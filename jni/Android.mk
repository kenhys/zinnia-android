LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := libzinnia
LOCAL_SRC_FILES := character.cpp feature.cpp libzinnia.cpp param.cpp recognizer.cpp sexp.cpp svm.cpp trainer.cpp
LOCAL_CFLAGS    := -Werror -DHAVE_CONFIG_H
include $(BUILD_STATIC_LIBRARY)

# JNI
include $(CLEAR_VARS)
LOCAL_MODULE    := libzinniajni
LOCAL_SRC_FILES := libzinniajni.cpp
LOCAL_STATIC_LIBRARIES := libzinnia
include $(BUILD_SHARED_LIBRARY)
