#include <jni.h>
#include <string>
#include <algorithm>
#include <type_traits>
#include <vector>
#include <numeric>
#include <limits>
#include <cmath>
#include <semaphore.h>
#include <mutex>
#include <shared_mutex>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_irfan_playdroid_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
