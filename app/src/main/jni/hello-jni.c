//
// Created by sandeep shabd on 1/10/16.
//

#include "hello-jni.h"
#include <string.h>
#include <jni.h>

jstring
        Java_apps_sandeep_com_ndktestapp1_MainActivity_helloJni( JNIEnv* env,
                                                          jobject thiz ){
    return (*env)->NewStringUTF(env, "Hello JNI ! ");

}