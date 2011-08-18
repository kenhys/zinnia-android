#include "zinnia.h"
#include <jni.h>
#include "libzinniajni.h"

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1new
  (JNIEnv *envenv, jobject jobj)
{
    zinnia_character_t* p = zinnia_character_new();
    return reinterpret_cast<jlong>(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1destroy
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_character_destroy(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_set_value
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1set_1value
(JNIEnv *env, jobject jobj, jlong character, jstring jstr)
{
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_set_value2
 * Signature: (JLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1set_1value2
(JNIEnv *env, jobject jobj, jlong character, jstring jstr, jlong length)
{
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_value
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1value
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return env->NewStringUTF(zinnia_character_value(p));
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_set_width
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1set_1width
(JNIEnv *env, jobject jobj, jlong character, jlong width)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_character_set_width(p, width);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_set_height
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1set_1height
(JNIEnv *env, jobject jobj, jlong character, jlong height)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_character_set_height(p, height);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_width
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1width
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_width(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_height
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1height
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_height(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1clear
(JNIEnv *env, jobject jobj, jlong stroke)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(stroke);
    zinnia_character_clear(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_add
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1add
(JNIEnv *env, jobject jobj, jlong character, jlong id, jint x, jint y)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_character_add(p, id, x, y);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_strokes_size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1strokes_1size
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_strokes_size(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_stroke_size
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1stroke_1size
(JNIEnv *env, jobject jobj, jlong character, jlong id)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_stroke_size(p, id);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_x
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1x
(JNIEnv *env, jobject jobj, jlong character, jlong id, jlong index)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_x(p, id, index);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_y
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1y
(JNIEnv *env, jobject jobj, jlong character, jlong id, jlong index)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return zinnia_character_y(p, id, index);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_parse
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1parse
  (JNIEnv *env, jobject jobj, jlong, jstring jstr)
{
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_parse2
 * Signature: (JLjava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1parse2
(JNIEnv *env, jobject jobj, jlong character, jstring str, jlong length)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    /* TODO */
    return 0;
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_to_string
 * Signature: (JLjava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1to_1string
(JNIEnv *env, jobject jobj, jlong character, jstring buf, jlong length)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    /* TODO */
    return 0;
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_character_strerror
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1character_1strerror
(JNIEnv *env, jobject jobj, jlong character)
{
    zinnia_character_t* p = reinterpret_cast<zinnia_character_t*>(character);
    return env->NewStringUTF(zinnia_character_strerror(p));
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_result_value
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1result_1value
(JNIEnv *env, jobject jobj, jlong result, jlong index)
{
    zinnia_result_t* p = reinterpret_cast<zinnia_result_t*>(result);
    return env->NewStringUTF(zinnia_result_value(p, index));
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_result_score
 * Signature: (JJ)F
 */
JNIEXPORT jfloat JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1result_1score
(JNIEnv *env, jobject jobj, jlong result, jlong index)
{
    zinnia_result_t* p = reinterpret_cast<zinnia_result_t*>(result);
    return zinnia_result_score(p, index);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_result_size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1result_1size
(JNIEnv *env, jobject jobj, jlong result)
{
    zinnia_result_t* p = reinterpret_cast<zinnia_result_t*>(result);
    return zinnia_result_size(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_result_destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1result_1destroy
(JNIEnv *env, jobject jobj, jlong jlongv)
{
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_recognizer_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1recognizer_1new
  (JNIEnv *env, jobject jobj)
{
    zinnia_recognizer_t* p = zinnia_recognizer_new();
    return reinterpret_cast<jlong>(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_recognizer_destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1recognizer_1destroy
(JNIEnv *env, jobject jobj, jlong recognizer)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    zinnia_recognizer_destroy(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_recognizer_open
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1recognizer_1open
  (JNIEnv *env, jobject jobj, jlong recognizer, jstring filename)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return zinnia_recognizer_open(p, env->GetStringUTFChars(filename, NULL));
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_recognizer_open_from_ptr
 * Signature: (JLjava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1recognizer_1open_1from_1ptr
(JNIEnv *env, jobject jobj, jlong, jstring jstr, jlong jlongv)
{
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_recognizer_close
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1recognizer_1close
(JNIEnv *env, jobject jobj, jlong recognizer)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return zinnia_recognizer_close(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_recognizer_size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1recognizer_1size
(JNIEnv *env, jobject jobj, jlong recognizer)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return zinnia_recognizer_size(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_recognizer_value
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1recognizer_1value
(JNIEnv *env, jobject jobj, jlong recognizer, jlong index)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return env->NewStringUTF(zinnia_recognizer_value(p, index));
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_recognizer_strerror
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1recognizer_1strerror
(JNIEnv *env, jobject jobj, jlong recognizer)
{
    zinnia_recognizer_t* p = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    return env->NewStringUTF(zinnia_recognizer_strerror(p));
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_recognizer_classify
 * Signature: (JLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1recognizer_1classify
(JNIEnv *env, jobject jobj, jlong recognizer, jlong character, jlong nbest)
{
    zinnia_recognizer_t* recog = reinterpret_cast<zinnia_recognizer_t*>(recognizer);
    zinnia_character_t* ch = reinterpret_cast<zinnia_character_t*>(character);
    zinnia_result_t* result = zinnia_recognizer_classify(recog, ch, nbest);
    
    return reinterpret_cast<jlong>(result);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_trainer_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1trainer_1new
  (JNIEnv *env, jobject jobj)
{
   zinnia_trainer_t* trainer = zinnia_trainer_new();
   return reinterpret_cast<jlong>(trainer);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_trainer_destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1trainer_1destroy
(JNIEnv *env, jobject jobj, jlong trainer)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  zinnia_trainer_destroy(p);

}
   

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_trainer_add
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1trainer_1add
(JNIEnv *env, jobject jobj, jlong trainer, jlong character)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  zinnia_character_t* ch = reinterpret_cast<zinnia_character_t*>(character);
  return zinnia_trainer_add(p, ch);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_trainer_clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1trainer_1clear
(JNIEnv *env, jobject jobj, jlong trainer)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  zinnia_trainer_clear(p);
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_trainer_train
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1trainer_1train
  (JNIEnv *env, jobject jobj, jlong trainer, jstring filename)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  return zinnia_trainer_train(p, (const char*)(env->GetStringUTFChars(filename, NULL)));
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_trainer_strerror
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1trainer_1strerror
(JNIEnv *env, jobject jobj, jlong trainer)
{
  zinnia_trainer_t* p = reinterpret_cast<zinnia_trainer_t*>(trainer);
  return env->NewStringUTF(zinnia_trainer_strerror(p));
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_trainer_convert_model
 * Signature: (Ljava/lang/String;Ljava/lang/String;D)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1trainer_1convert_1model
  (JNIEnv *env, jobject jobj, jstring txt_model, jstring binary_mode, jdouble compression_threshold)
{
}

/*
 * Class:     org_xdump_android_zinnia_Zinnia
 * Method:    zinnia_trainer_make_header
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;D)I
 */
JNIEXPORT jint JNICALL Java_org_xdump_android_zinnia_Zinnia_zinnia_1trainer_1make_1header
(JNIEnv *env, jobject jobj, jstring txt_model, jstring header_file, jstring name, jdouble compression_threashold)
{
}

