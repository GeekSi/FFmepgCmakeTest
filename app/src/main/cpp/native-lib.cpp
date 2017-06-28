#include <jni.h>
#include <string>

extern "C"
{


#include <libavcodec/avcodec.h>
JNIEXPORT jstring JNICALL
Java_com_example_siqing_ffmpegtestcmake_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ this is my first C";
    hello = avcodec_configuration();
    return env->NewStringUTF(hello.c_str());
}

}
