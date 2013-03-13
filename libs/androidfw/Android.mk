# Copyright (C) 2010 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

LOCAL_PATH:= $(call my-dir)

# libandroidfw is partially built for the host (used by build time keymap validation tool)
# These files are common to host and target builds.

# formerly in libutils
commonUtilsSources:= \
    Asset.cpp \
    AssetDir.cpp \
    AssetManager.cpp \
    ObbFile.cpp \
    ResourceTypes.cpp \
    StreamingZipInflater.cpp

# formerly in libui
commonUiSources:= \
    Input.cpp \
    InputDevice.cpp \
    Keyboard.cpp \
    KeyCharacterMap.cpp \
    KeyLayoutMap.cpp \
    VelocityControl.cpp \
    VelocityTracker.cpp \
    VirtualKeyMap.cpp

commonSources:= \
	$(commonUtilsSources) \
	$(commonUiSources)

# For the device
# =====================================================

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	$(commonSources) \
	BackupData.cpp \
	BackupHelpers.cpp \
    CursorWindow.cpp \
	InputTransport.cpp

LOCAL_SHARED_LIBRARIES := \
	liblog \
	libcutils \
	libutils \
	libbinder \
	libskia \
	libz

LOCAL_C_INCLUDES := \
    external/skia/include/core \
    external/icu4c/common \
	external/zlib

LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../native/include/
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../../system/core/include


LOCAL_CFLAGS += -DHAVE_ENDIAN_H -DHAVE_PTHREADS -DHAVE_SYS_UIO_H -DHAVE_POSIX_FILEMAP
LOCAL_CFLAGS += -DHAVE_SCHED_H -DHAVE_SYS_UIO_H -DHAVE_IOCTL -DHAVE_TM_GMTOFF -DHAVE_OFF64_T
LOCAL_CFLAGS += -DHAVE_EXPAT_CONFIG_H
LOCAL_CFLAGS += -DOS_PATH_SEPARATOR=\'/\'


LOCAL_MODULE:= libandroidfw

include $(BUILD_STATIC_LIBRARY)

LOCAL_MODULE_TAGS := optional

ifeq ($(TARGET_OS),linux)
include $(CLEAR_VARS)
LOCAL_C_INCLUDES += \
	external/skia/include/core \
	external/zlib \
	external/icu4c/common \
	bionic/libc/private
LOCAL_LDLIBS := -lrt -ldl -lpthread
LOCAL_MODULE := libandroidfw
LOCAL_SRC_FILES := $(commonUtilsSources) BackupData.cpp BackupHelpers.cpp
include $(BUILD_STATIC_LIBRARY)
endif


# Include subdirectory makefiles
# ============================================================

# If we're building with ONE_SHOT_MAKEFILE (mm, mmm), then what the framework
# team really wants is to build the stuff defined by this makefile.
ifeq (,$(ONE_SHOT_MAKEFILE))
include $(call first-makefiles-under,$(LOCAL_PATH))
endif
