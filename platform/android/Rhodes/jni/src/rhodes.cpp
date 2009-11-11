#include <com_rhomobile_rhodes_Rhodes.h>

#include <logging/RhoLogConf.h>
#include <common/RhodesApp.h>

#include <sys/stat.h>

static rho::String g_appName;
static rho::String g_rootPath;

static JNIEnv *g_env;
JNIEnv *jnienv()
{
    return g_env;
}

jclass getJNIClass(const char *name)
{
    jclass cls = jnienv()->FindClass(name);
    if (cls == NULL)
    {
        jclass exc = jnienv()->FindClass("java/lang/RuntimeException");
        rho::String descr = "Can not find class ";
        descr += name;
        jnienv()->ThrowNew(exc, descr.c_str());
    }
    return cls;
}

jmethodID getJNIClassMethod(jclass cls, const char *name, const char *signature)
{
    jmethodID mid = jnienv()->GetMethodID(cls, name, signature);
    if (mid == NULL)
    {
        jclass exc = jnienv()->FindClass("java/lang/RuntimeException");
        rho::String descr = "Can not find method ";
        descr += name;
        descr += " of type ";
        descr += signature;
        jnienv()->ThrowNew(exc, descr.c_str());
    }
    return mid;
}

const char* rho_native_rhopath()
{
    if (g_rootPath.empty() && !g_appName.empty())
        g_rootPath = rho::String("/sdcard/rhomobile/") + g_appName + "/";
    return g_rootPath.c_str();
}

JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_Rhodes_getRootPath
  (JNIEnv *env, jobject obj)
{
    if (g_appName.empty())
    {
        g_env = env;

        jclass cls = env->GetObjectClass(obj);
        jmethodID mid = getJNIClassMethod(cls, "getAppName", "()Ljava/lang/String;");
        if (mid == NULL)
            return NULL;
        jstring str = (jstring)env->CallObjectMethod(obj, mid);
        const char *s = env->GetStringUTFChars(str, JNI_FALSE);
        g_appName = s;
        env->ReleaseStringUTFChars(str, s);
    }
    return env->NewStringUTF(rho_native_rhopath());
}

JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_Rhodes_startRhodesApp
  (JNIEnv *env, jobject obj)
{
    const char* szRootPath = rho_native_rhopath();
    rho_logconf_Init(szRootPath);
    rho_rhodesapp_create(szRootPath);
    rho_rhodesapp_start();
}

JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_Rhodes_stopRhodesApp
  (JNIEnv *, jobject)
{
    rho_rhodesapp_destroy();
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
    //const char *s = "";
    const char *s = RHODESAPP().getOptionsUrl().c_str();
    return env->NewStringUTF(s);
}

JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_Rhodes_getStartUrl
  (JNIEnv *env, jobject)
{
    //const char *s = "";
    const char *s = RHODESAPP().getStartUrl().c_str();
    return env->NewStringUTF(s);
}

JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_Rhodes_getCurrentUrl
  (JNIEnv *env, jobject)
{
    //const char *s = "";
    const char *s = RHODESAPP().getCurrentUrl().c_str();
    return env->NewStringUTF(s);
}

