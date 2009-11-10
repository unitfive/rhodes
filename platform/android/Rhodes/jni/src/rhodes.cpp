#include <com_rhomobile_rhodes_Rhodes.h>

#include <logging/RhoLogConf.h>
#include <common/RhodesApp.h>

const char* rho_native_rhopath()
{
    // TODO:
    return "/sdcard/rhomobile/JNI";
}

void startRhodesApp()
{
    //const char* szRootPath = rho_native_rhopath();
    //rho_logconf_Init(szRootPath);
    //rho_rhodesapp_create(szRootPath);
    //rho_rhodesapp_start();
}

void stopRhodesApp()
{
    //rho_rhodesapp_destroy();
}

JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_Rhodes_startRhodesApp
  (JNIEnv *, jobject)
{
    startRhodesApp();
}

JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_Rhodes_stopRhodesApp
  (JNIEnv *, jobject)
{
    stopRhodesApp();
}

JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_Rhodes_saveCurrentLocation
  (JNIEnv *, jobject, jstring)
{
    // TODO
}

JNIEXPORT jboolean JNICALL Java_com_rhomobile_rhodes_Rhodes_restoreLocation
  (JNIEnv *, jobject)
{
    // TODO
    return false;
}

JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_Rhodes_doSyncAllSources
  (JNIEnv *, jobject, jboolean)
{
    // TODO
}

JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_Rhodes_getOptionsUrl
  (JNIEnv *env, jobject)
{
    // TODO
    return env->NewStringUTF("");
}

JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_Rhodes_getStartUrl
  (JNIEnv *env, jobject)
{
    // TODO
    return env->NewStringUTF("");
}

JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_Rhodes_getCurrentUrl
  (JNIEnv *env, jobject)
{
    // TODO
    return env->NewStringUTF("");
}

