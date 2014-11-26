# Copyright 2007 The Android Open Source Project
#
# Copies files into the directory structure described by a manifest

# This tool is prebuilt if we're doing an app-only build.
ifeq ($(TARGET_BUILD_APPS)$(filter true,$(TARGET_BUILD_PDK)),)

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	aidl_language_l.l \
	aidl_language_y.y \
	aidl.cpp \
	aidl_language.cpp \
	options.cpp \
	search_path.cpp \
	AST.cpp \
	Type.cpp \
	generate_java.cpp \
	generate_java_binder.cpp \
	generate_java_rpc.cpp

LOCAL_CFLAGS := -g
LOCAL_MODULE := aidl

ifdef AIDE_BUILD

define aidl-lex-yacc
$(LOCAL_PATH)/aidl_language_l.cpp : $(LOCAL_PATH)/aidl_language_l.l $(LOCAL_PATH)/aidl_language_y.cpp 
	cd $(LOCAL_PATH); $(LEX) --outfile=aidl_language_l.cpp --header-file=aidl_language_l.h aidl_language_l.l
$(LOCAL_PATH)/aidl_language_y.cpp : $(LOCAL_PATH)/aidl_language_y.y
	cd $(LOCAL_PATH); $(YACC) --defines=aidl_language_y.h --output=aidl_language_y.cpp aidl_language_y.y

endef

$(eval $(call aidl-lex-yacc))

LOCAL_SRC_FILES += \
	aidl_language_l.cpp \
	aidl_language_y.cpp \

include $(BUILD_EXECUTABLE)
else
include $(BUILD_HOST_EXECUTABLE)
endif # AIDE_BUILD

endif # No TARGET_BUILD_APPS or TARGET_BUILD_PDK
