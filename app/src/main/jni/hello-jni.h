//
// Created by sandeep shabd on 1/10/16.
//

#include <jni.h>

#ifndef NDKTESTAPP1_HELLO_JNI_H
#define NDKTESTAPP1_HELLO_JNI_H

#endif //NDKTESTAPP1_HELLO_JNI_H

extern "C" {
JNIEXPORT jstring
        Java_apps_sandeep_com_ndktestapp1_MainActivity_helloJni( JNIEnv* env,
                                                                 jobject thiz );
};


