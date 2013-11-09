# 
# Copyright 2006 The Android Open Source Project
#
# Android Asset Packaging Tool
#

# This tool is prebuilt if we're doing an app-only build.
ifeq ($(TARGET_BUILD_APPS),)

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	AaptAssets.cpp \
	Command.cpp \
	CrunchCache.cpp \
	FileFinder.cpp \
	Main.cpp \
	Package.cpp \
	StringPool.cpp \
	XMLNode.cpp \
	ResourceFilter.cpp \
	ResourceIdCache.cpp \
	ResourceTable.cpp \
	Images.cpp \
	Resource.cpp \
    SourcePos.cpp \
    ZipEntry.cpp \
    ZipFile.cpp


LOCAL_CFLAGS += -Wno-format-y2k
LOCAL_CFLAGS += -DHAVE_ENDIAN_H -DHAVE_PTHREADS -DHAVE_SYS_UIO_H -DHAVE_POSIX_FILEMAP
LOCAL_CFLAGS += -DHAVE_SCHED_H -DHAVE_SYS_UIO_H -DHAVE_IOCTL -DHAVE_TM_GMTOFF -DHAVE_OFF64_T
LOCAL_CFLAGS += -DHAVE_EXPAT_CONFIG_H
LOCAL_CFLAGS += -DOS_PATH_SEPARATOR=\'/\'


#LOCAL_C_INCLUDES += external/libpng
#LOCAL_C_INCLUDES += external/zlib
#LOCAL_C_INCLUDES += build/libs/host/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../native/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../../system/core/include/
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../../external/expat/lib
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../../external/libpng
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../../external/zlib
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../../build/libs/host/include


LOCAL_STATIC_LIBRARIES := \
	libhost \
	libandroidfw \
	libutils \
	libcutils \
	libexpat \
	libpng \
	liblog

LOCAL_LDLIBS += -lz -llog

LOCAL_MODULE := aapt

include $(BUILD_EXECUTABLE)

endif # TARGET_BUILD_APPS
