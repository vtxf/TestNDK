#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_txfg_txf_testndk_MyNdk_getString(JNIEnv *env, jobject instance) {
    return (*env)->NewStringUTF(env, "Hello txf !!!");
}