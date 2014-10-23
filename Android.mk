LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_PACKAGE_NAME := OctDelta
LOCAL_MODULE_TAGS := optional
LOCAL_PRIVILEGED_MODULE := true

LOCAL_SRC_FILES := $(call all-java-files-under, src)

LOCAL_SDK_VERSION := 19

LOCAL_JNI_SHARED_LIBRARIES := liboctdelta
LOCAL_REQUIRED_MODULES := liboctdelta

LOCAL_PROGUARD_FLAG_FILES := proguard-project.txt

include $(BUILD_PACKAGE)

include $(call all-makefiles-under,$(LOCAL_PATH))
