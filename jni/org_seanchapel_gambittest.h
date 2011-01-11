#include <jni.h>
/* Header for class org.seanchapel.gambittest */

#ifndef _Included_org_seanchapel_gambittest_MainActivity
#define _Included_org_seanchapel_gambittest_MainActivity
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_org_seanchapel_gambittest_MainActivity_testFib(JNIEnv *, jobject);

JNIEXPORT jstring JNICALL Java_org_seanchapel_gambittest_MainActivity_testPorts(JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_org_seanchapel_gambittest_MainActivity_initGambit(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
