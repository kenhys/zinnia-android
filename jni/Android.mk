LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := libzinnia
#LOCAL_SRC_FILES := character.cpp feature.cpp libzinnia.cpp svm.cpp param.cpp
#LOCAL_SRC_FILES := sexp.cpp
#LOCAL_SRC_FILES := trainer.cpp
LOCAL_SRC_FILES := character.cpp feature.cpp libzinnia.cpp param.cpp recognizer.cpp sexp.cpp svm.cpp trainer.cpp
APP_STL := stlport_static
LOCAL_CFLAGS    := -Werror -DHAVE_CONFIG_H

include $(BUILD_SHARED_LIBRARY)

