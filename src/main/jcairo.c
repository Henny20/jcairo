#include "jcairo.h"
#include <cairo/cairo.h>
#include <cairo/cairo-svg.h> 
#include <cairo/cairo-pdf.h> 

static cairo_t *cr;
static cairo_surface_t *surface;
static cairo_pattern_t *pat;
cairo_text_extents_t te;
cairo_font_options_t *options;
cairo_status_t status;


JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_init(JNIEnv *env, jobject obj){
//return (intptr_t)cr;
 cr = cairo_create(surface);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_destroy(JNIEnv *env, jobject obj){
cairo_destroy(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_save(JNIEnv *env, jobject obj){
cairo_save(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_fill(JNIEnv *env, jobject obj){
cairo_fill(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_rotate(JNIEnv *env, jobject obj, jdouble param0){
cairo_rotate(cr, param0);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_mask(JNIEnv *env, jobject obj, jobject obj0){
cairo_mask(cr, pat);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_scale(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
cairo_scale(cr, param0, param1);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setSourceRGBA(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3){
cairo_set_source_rgba(cr, param0, param1, param2, param3);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setSource(JNIEnv *env, jobject obj, jint param0){
cairo_set_source(cr, pat);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setSourceRGB(JNIEnv *env, jobject obj, jdouble red, jdouble green, jdouble blue){
cairo_set_source_rgb(cr, red, green, blue);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setSourceSurface(JNIEnv *env, jobject obj0, jobject obj1, jdouble param0, jdouble param1){
cairo_set_source_surface(cr, surface, param0, param1);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_status(JNIEnv *env, jobject obj){
return (jint)cairo_status(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_restore(JNIEnv *env, jobject obj){
cairo_restore(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_pushGroup(JNIEnv *env, jobject obj){
cairo_push_group(cr);
}
JNIEXPORT jobject JNICALL Java_org_jcairo_CairoContext_popGroup(JNIEnv *env, jobject obj){
return (jobject)cairo_pop_group(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_popGroupToSource(JNIEnv *env, jobject obj){
cairo_pop_group_to_source(cr);
}
JNIEXPORT jobject JNICALL Java_org_jcairo_CairoContext_getSource(JNIEnv *env, jobject obj){
return (jobject)cairo_get_source(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setAntialias(JNIEnv *env, jobject obj, jint param0){
cairo_set_antialias(cr, param0);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getAntialias(JNIEnv *env, jobject obj){
return (jint)cairo_get_antialias(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setDash(JNIEnv *env, jobject obj , jdoubleArray array, jdouble param0){
 jdouble* dash=(*env)->GetDoubleArrayElements(env, array, 0);
 jint n =(*env)->GetArrayLength(env, array);

 //cairo_set_dash(cr, dash, ARRAY_LENGTH(dash), param0);
  cairo_set_dash(cr, dash, n, param0);
 (*env)->ReleaseDoubleArrayElements(env, array, dash, 0);
 
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getDashCount(JNIEnv *env, jobject obj){
return (jint)cairo_get_dash_count(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setFillRule(JNIEnv *env, jobject obj, jint param0){
cairo_set_fill_rule(cr, param0);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getFillRule(JNIEnv *env, jobject obj){
return (jint)cairo_get_fill_rule(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setLineCap(JNIEnv *env, jobject obj, jint param0){
cairo_set_line_cap(cr, param0);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getLineCap(JNIEnv *env, jobject obj){
return (jint)cairo_get_line_cap(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setLineJoin(JNIEnv *env, jobject obj, jint param0){
cairo_set_line_join(cr, param0);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getLineJoin(JNIEnv *env, jobject obj){
return (jint)cairo_get_line_join(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setLineWidth(JNIEnv *env, jobject obj, jdouble param0){
cairo_set_line_width(cr, param0);
}
JNIEXPORT jdouble JNICALL Java_org_jcairo_CairoContext_getLineWidth(JNIEnv *env, jobject obj){
return (jdouble)cairo_get_line_width(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setMiterLimit(JNIEnv *env, jobject obj, jdouble param0){
cairo_set_miter_limit(cr, param0);
}
JNIEXPORT jdouble JNICALL Java_org_jcairo_CairoContext_getMiterLimit(JNIEnv *env, jobject obj){
return (jdouble)cairo_get_miter_limit(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setOperator(JNIEnv *env, jobject obj, jint param0){
cairo_set_operator(cr, param0);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getOperator(JNIEnv *env, jobject obj){
return (jint)cairo_get_operator(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setTolerance(JNIEnv *env, jobject obj, jdouble param0){
cairo_set_tolerance(cr, param0);
}
JNIEXPORT jdouble JNICALL Java_org_jcairo_CairoContext_getTolerance(JNIEnv *env, jobject obj){
return (jdouble)cairo_get_tolerance(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_clip(JNIEnv *env, jobject obj){
cairo_clip(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_clipPreserve(JNIEnv *env, jobject obj){
cairo_clip_preserve(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_resetClip(JNIEnv *env, jobject obj){
cairo_reset_clip(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_fillPreserve(JNIEnv *env, jobject obj){
cairo_fill_preserve(cr);
}
JNIEXPORT jboolean JNICALL Java_org_jcairo_CairoContext_inFill(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
return (jboolean)cairo_in_fill(cr, param0, param1);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_paint(JNIEnv *env, jobject obj){
cairo_paint(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_paintWithAlpha(JNIEnv *env, jobject obj, jdouble param0){
cairo_paint_with_alpha(cr, param0);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_stroke(JNIEnv *env, jobject obj){
cairo_stroke(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_strokePreserve(JNIEnv *env, jobject obj){
cairo_stroke_preserve(cr);
}
JNIEXPORT jboolean JNICALL Java_org_jcairo_CairoContext_inStroke(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
return (jboolean)cairo_in_stroke(cr, param0, param1);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_copyPage(JNIEnv *env, jobject obj){
cairo_copy_page(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_showPage(JNIEnv *env, jobject obj){
cairo_show_page(cr);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoContext_getReferenceCount(JNIEnv *env, jobject obj){
return (jint)cairo_get_reference_count(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_translate(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
cairo_translate(cr, param0, param1);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_setFontSize(JNIEnv *env, jobject obj, jdouble param0){
cairo_set_font_size(cr, param0);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_showText(JNIEnv *env, jobject obj, jstring param0){
 const char *tekst = (*env)->GetStringUTFChars(env, param0, 0);
 cairo_show_text(cr, tekst);
 (*env)->ReleaseStringUTFChars(env, param0, tekst);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_selectFontFace(JNIEnv *env, jobject obj, jstring string , jint param0, jint param1){
 const char *fam = (*env)->GetStringUTFChars(env, string, 0);
 
 cairo_select_font_face (cr, fam, param0, param1);
 (*env)->ReleaseStringUTFChars(env, string, fam);
 
 //cairo_font_options_set_hint_style (options, CAIRO_HINT_STYLE_NONE);
 //cairo_font_options_set_hint_metrics (options, CAIRO_HINT_METRICS_OFF);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_textExtents(JNIEnv *env, jobject obj, jstring lb){
 const char *label = (*env)->GetStringUTFChars(env, lb, 0);
 cairo_text_extents (cr, label, &te);
 (*env)->ReleaseStringUTFChars(env, lb, label); 
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_newPath(JNIEnv *env, jobject obj){
cairo_new_path(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_newSubPath(JNIEnv *env, jobject obj){
cairo_new_sub_path(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_closePath(JNIEnv *env, jobject obj){
cairo_close_path(cr);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_arc(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4){
cairo_arc(cr, param0, param1, param2, param3, param4);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_arcNegative(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4){
cairo_arc_negative(cr, param0, param1, param2, param3, param4);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_curveTo(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5){
cairo_curve_to(cr, param0, param1, param2, param3, param4, param5);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_lineTo(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
cairo_line_to(cr, param0, param1);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_moveTo(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
cairo_move_to(cr, param0, param1);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_rectangle(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3){
cairo_rectangle(cr, param0, param1, param2, param3);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_textPath(JNIEnv *env, jobject obj, jstring param0){
const char *n = (*env)->GetStringUTFChars(env, param0, 0);
cairo_text_path(cr, n);
(*env)->ReleaseStringUTFChars(env, param0, n);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_relCurveTo(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5){
cairo_rel_curve_to(cr, param0, param1, param2, param3, param4, param5);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_relLineTo(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
cairo_rel_line_to(cr, param0, param1);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoContext_relMoveTo(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
cairo_rel_move_to(cr, param0, param1);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_destroy(JNIEnv *env, jobject obj){
cairo_pattern_destroy(pat);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getType(JNIEnv *env, jobject obj){
return (jint)cairo_pat_get_type(pat);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_create(JNIEnv *env, jclass cl, jdouble param0, jdouble param1, jdouble param2){
return (jint)cairo_pattern_create(pat, param0, param1, param2);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_status(JNIEnv *env, jobject obj){
return (jint)cairo_pattern_status(pat);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getReferenceCount(JNIEnv *env, jobject obj){
return (jint)cairo_pattern_get_reference_count(pat);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_createWithAlpha(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3){
pat = cairo_pattern_create_rgba(param0, param1, param2, param3);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_createLinear(JNIEnv *env,  jobject obj,  jdouble param0, jdouble param1, jdouble param2, jdouble param3){
pat = cairo_pattern_create_linear(param0, param1, param2, param3);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_createRadial(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5){
pat = cairo_pattern_create_radial(param0, param1, param2, param3, param4, param5);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_addColorStop(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3){
cairo_pattern_add_color_stop_rgb(pat, param0, param1, param2, param3);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_addColorStopWithAlpha(JNIEnv *env, jobject obj, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4){
cairo_pattern_add_color_stop_rgba(pat, param0, param1, param2, param3, param4);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getColorStopCount(JNIEnv *env, jobject obj){
 int* count;
 return (jint)cairo_pattern_get_color_stop_count(pat, count);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_reference(JNIEnv *env, jobject obj){
cairo_pattern_reference(pat);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_setExtend(JNIEnv *env, jobject obj, jint param0){
cairo_pattern_set_extend(pat, param0);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getExtend(JNIEnv *env, jobject obj){
return (jint)cairo_pattern_get_extend(pat);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoPattern_setFilter(JNIEnv *env, jobject obj, jint param0){
cairo_pattern_set_filter(pat, param0);
}
JNIEXPORT jint JNICALL Java_org_jcairo_CairoPattern_getFilter(JNIEnv *env, jobject obj){
return (jint)cairo_pattern_get_filter(pat);
}

JNIEXPORT jint JNICALL Java_org_jcairo_CairoSurface_status(JNIEnv *env, jobject obj){
return (jint)cairo_surface_status(surface);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_release(JNIEnv *env, jobject obj){
cairo_surface_destroy(surface);
}
/*
 * Class:     org_jcairo_CairoSurface
 * Method:    finish
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_finish(JNIEnv *env, jobject obj){
cairo_surface_finish(surface);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_release
  (JNIEnv *, jobject);

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    flush
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_flush(JNIEnv *env, jobject obj){
cairo_surface_flush(surface);
}

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    getContent
 * Signature: ()Lorg/jcairo/CairoSurface/Content;
 */
JNIEXPORT jobject JNICALL Java_org_jcairo_CairoSurface_getContent(JNIEnv *env, jobject obj){
return (jobject)cairo_surface_get_content(surface);
}

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    getReferenceCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jcairo_CairoSurface_getReferenceCount(JNIEnv *env, jobject obj){
return (jint)cairo_surface_get_reference_count(surface);
}

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    hasShowTextGlyphs
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jcairo_CairoSurface_hasShowTextGlyphs(JNIEnv *env, jobject obj){
return (jboolean)cairo_surface_has_show_text_glyphs(surface);
}
/*
 * Class:     org_jcairo_CairoSurface
 * Method:    markDirty
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_markDirty(JNIEnv *env, jobject obj){
cairo_surface_mark_dirty(surface);
}

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    markDirtyRectangle
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_markDirtyRectangle(JNIEnv *env, jobject obj, jint param0, jint param1, jint param2, jint param3){
cairo_surface_mark_dirty_rectangle(surface, param0, param1, param2, param3);
}
/*
 * Class:     org_jcairo_CairoSurface
 * Method:    setDeviceOffsett
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_setDeviceOffsett(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
cairo_surface_set_device_offset(surface, param0, param1);
}

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    setFallbackResolution
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_setFallbackResolution(JNIEnv *env, jobject obj, jdouble param0, jdouble param1){
cairo_surface_set_fallback_resolution(surface, param0, param1);
}

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    copyPage
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_copyPage(JNIEnv *env, jobject obj){
cairo_surface_copy_page(surface);
}

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    showPage
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_showPage(JNIEnv *env, jobject obj){
cairo_surface_show_page(surface);
}

/*
 * Class:     org_jcairo_CairoSurface
 * Method:    getType
 * Signature: ()Lorg/jcairo/CairoSurface/SurfaceType;
 */
JNIEXPORT jobject JNICALL Java_org_jcairo_CairoSurface_getType(JNIEnv *env, jobject obj){
return (jobject)cairo_surface_get_type(surface);
}
JNIEXPORT void JNICALL Java_org_jcairo_CairoSurface_writeToPNG(JNIEnv *env, jobject obj, jstring filename){
const char *fname = (*env)->GetStringUTFChars(env, filename, 0);
 cairo_surface_write_to_png(surface, fname);
(*env)->ReleaseStringUTFChars(env, filename, fname);
}

JNIEXPORT void JNICALL Java_org_jcairo_SvgSurface_createSurfaceSvg(JNIEnv *env, jobject obj, jstring name, jdouble param0, jdouble param1){
 const char *nm = (*env)->GetStringUTFChars(env, name, 0);
surface = cairo_svg_surface_create(nm, param0, param1);
 (*env)->ReleaseStringUTFChars(env, name, nm);
}

JNIEXPORT void JNICALL Java_org_jcairo_ImageSurface_createSurfaceImage
  (JNIEnv *env, jobject obj, jint param0, jdouble param1, jdouble param2){ 
surface = cairo_image_surface_create(param0, param1, param2);
}




JNIEXPORT void JNICALL Java_org_jcairo_PdfSurface_createSurfacePdf(JNIEnv *env, jobject obj , jstring n, jdouble param0,  jdouble param1){
  const char *bestandsnaam = (*env)->GetStringUTFChars(env, n, 0);
  surface = cairo_pdf_surface_create(bestandsnaam, param0, param1);
 (*env)->ReleaseStringUTFChars(env, n, bestandsnaam);
}

JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_x_1bearing(JNIEnv *env , jobject obj){ 
return (jdouble)te.x_bearing;
}

JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_y_1bearing(JNIEnv *env , jobject obj){
return (jdouble)te.y_bearing;
}

JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_width(JNIEnv *env , jobject obj){
  return (jdouble)te.width;
}

JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_height(JNIEnv *env , jobject obj){
  return (jdouble)te.height;
}

JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_x_1advance(JNIEnv *env , jobject obj){
return (jdouble)te.x_advance;
}

JNIEXPORT jdouble JNICALL Java_org_jcairo_TextExtents_y_1advance(JNIEnv *env , jobject obj){
 return (jdouble)te.y_advance;
}


