//
// Created by sandeep shabd on 1/10/16.
//

#include "hello-jni.h"
#include <string.h>
#include <jni.h>
#include <stdlib.h>

#include <android/log.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "App2", __VA_ARGS__))

JNIEXPORT jstring
        Java_apps_sandeep_com_ndktestapp1_MainActivity_helloJni( JNIEnv* env,
                                                          jobject thiz ){
    LOGI( "******Logging the hello world*******" );
    return env->NewStringUTF( "Hello JNI. Gettng ready for OpenGl 3!! ");

}