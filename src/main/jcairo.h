#include <jni.h>
#include <stdint.h>

#define ARRAY_LENGTH(__array) ((int) (sizeof (__array) / sizeof (__array[0])))

JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_init(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_destroy(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_save(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_fill(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_rotate(JNIEnv *, jobject, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_mask(JNIEnv *, jobject, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_scale(JNIEnv *, jobject, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setSourceRGBA(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setSource(JNIEnv *, jobject, jint);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setSourceRGB(JNIEnv *, jobject, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setSourceSurface(JNIEnv *, jobject, jobject, jdouble, jdouble);

JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_status(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_restore(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_pushGroup(JNIEnv *, jobject);
JNIEXPORT jobject JNICALL Java_org_jcairo_CairoContext_popGroup(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_popGroupToSource(JNIEnv *, jobject);
JNIEXPORT jobject JNICALL Java_org_jcairo_CairoContext_getSource(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setAntialias(JNIEnv *, jobject, jint);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getAntialias(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setDash(JNIEnv *, jobject, jdoubleArray, jdouble);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getDashCount(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setFillRule(JNIEnv *, jobject, jint);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getFillRule(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setLineCap(JNIEnv *, jobject, jint);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getLineCap(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setLineJoin(JNIEnv *, jobject, jint);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getLineJoin(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setLineWidth(JNIEnv *, jobject, jdouble);
JNIEXPORT jdouble JNICALL Java_org_jcairo_CairoContext_getLineWidth(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setMiterLimit(JNIEnv *, jobject, jdouble);
JNIEXPORT jdouble JNICALL Java_org_jcairo_CairoContext_getMiterLimit(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setOperator(JNIEnv *, jobject, jint);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getOperator(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setTolerance(JNIEnv *, jobject, jdouble);
JNIEXPORT jdouble JNICALL Java_org_jcairo_CairoContext_getTolerance(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_clip(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_clipPreserve(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_resetClip(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_fillPreserve(JNIEnv *, jobject);
JNIEXPORT jboolean JNICALL Java_org_jcairo_CairoContext_inFill(JNIEnv *, jobject, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_paint(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_paintWithAlpha(JNIEnv *, jobject, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_stroke(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_strokePreserve(JNIEnv *, jobject);
JNIEXPORT jboolean JNICALL Java_org_jcairo_CairoContext_inStroke(JNIEnv *, jobject, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_copyPage(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_showPage(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getReferenceCount(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_translate(JNIEnv *, jobject, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setFontSize(JNIEnv *, jobject, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_showText(JNIEnv *, jobject, jstring);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_selectFontFace(JNIEnv *, jobject, jstring, jint, jint);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_textExtents(JNIEnv *, jobject, jstring);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_newPath(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_newSubPath(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_closePath(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_arc(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_arcNegative(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_curveTo(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_lineTo(JNIEnv *, jobject, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_moveTo(JNIEnv *, jobject, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_rectangle(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_textPath(JNIEnv *, jobject, jstring);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_relCurveTo(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_relLineTo(JNIEnv *, jobject, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_relMoveTo(JNIEnv *, jobject, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_destroy(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getType(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_create(JNIEnv *, jclass, jdouble, jdouble, jdouble);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_status(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getReferenceCount(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_createWithAlpha(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_createLinear(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_createRadial(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_addColorStop(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_addColorStopWithAlpha(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble, jdouble);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getColorStopCount(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_reference(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_setExtend(JNIEnv *, jobject, jint);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getExtend(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_setFilter(JNIEnv *, jobject, jint);
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getFilter(JNIEnv *, jobject);

JNIEXPORT jint JNICALL Java_org_jcairo_CairoSurface_status(JNIEnv *, jobject);
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_release(JNIEnv *, jobject);
/*
 * Class:     org_jcairo_CairoSurface
 * Method:    finish
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_finish
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    flush
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_flush
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    getContent
 * Signature: ()Lorg/jcairo/CairoSurface/Content;
 */
JNIEXPORT jobject JNICALL Java_org_jcairo_CairoSurface_getContent
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    getReferenceCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jcairo_CairoSurface_getReferenceCount
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    hasShowTextGlyphs
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jcairo_CairoSurface_hasShowTextGlyphs
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    markDirty
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_markDirty
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    markDirtyRectangle
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_markDirtyRectangle
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    setDeviceOffsett
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_setDeviceOffsett
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    setFallbackResolution
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_setFallbackResolution
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    copyPage
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_copyPage
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    showPage
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_showPage
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    getType
 * Signature: ()Lorg/jcairo/CairoSurface/SurfaceType;
 */
JNIEXPORT jobject JNICALL Java_org_jcairo_CairoSurface_getType
  (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_writeToPNG
  (JNIEnv *, jobject, jstring);

JNIEXPORT void JNICALL Java_org_jcairo_SvgSurface_SvgSurfaceCreate
  (JNIEnv *, jobject, jstring, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_jcairo_ImageSurface_createSurfaceImage
  (JNIEnv *, jobject, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_jcairo_PdfSurface_createSurfacePdf
  (JNIEnv *, jobject, jstring, jdouble, jdouble);

JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_x_1bearing
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_TextExtents
 * Method:    y_bearing
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_y_1bearing
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_TextExtents
 * Method:    width
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_width
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_TextExtents
 * Method:    height
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_height
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_TextExtents
 * Method:    x_advance
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_x_1advance
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_TextExtents
 * Method:    y_advance
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_y_1advance
  (JNIEnv *, jobject);

