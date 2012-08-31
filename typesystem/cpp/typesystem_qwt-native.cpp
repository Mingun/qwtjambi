
//{ class QwtPlotSeriesItem
// QwtPlotSeriesItem::data()
extern "C" Q_DECL_EXPORT jobject JNICALL QTJAMBI_FUNCTION_PREFIX(Java_com_trolltech_qt_qwt_QwtPlotSeriesItem__1_1qt_1data__J)
(JNIEnv *__jni_env,
 jobject,
 jlong __this_nativeId)
{
    QTJAMBI_DEBUG_TRACE("(native) entering: QwtPlotSeriesItem::data()");
    Q_UNUSED(__jni_env)
    Q_UNUSED(__this_nativeId)
    QtJambiShell_QwtPlotSeriesItem *__qt_this = (QtJambiShell_QwtPlotSeriesItem *) qtjambi_from_jlong(__this_nativeId);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    Q_ASSERT(__qt_this);
    QwtSeriesDataGeneric*  __qt_return_value = __qt_this->data();

    jobject __java_return_value = qtjambi_from_cpointer(__jni_env, __qt_return_value, 8, 1);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    QTJAMBI_DEBUG_TRACE("(native) -> leaving: QwtPlotSeriesItem::data()");
    return __java_return_value;
}
// QwtPlotSeriesItem::setData(QwtSeriesData * data)
extern "C" Q_DECL_EXPORT void JNICALL QTJAMBI_FUNCTION_PREFIX(Java_com_trolltech_qt_qwt_QwtPlotSeriesItem__1_1qt_1setData__JLcom_trolltech_qt_QNativePointer_2)
(JNIEnv *__jni_env,
 jobject,
 jlong __this_nativeId,
 jobject data)
{
    QTJAMBI_DEBUG_TRACE("(native) entering: QwtPlotSeriesItem::setData(QwtSeriesData * data)");
    Q_UNUSED(__jni_env)
    Q_UNUSED(__this_nativeId)
    QwtSeriesDataGeneric*  __qt_data = (QwtSeriesDataGeneric* ) qtjambi_to_cpointer(__jni_env, data, 1);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    QtJambiShell_QwtPlotSeriesItem *__qt_this = (QtJambiShell_QwtPlotSeriesItem *) qtjambi_from_jlong(__this_nativeId);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    Q_ASSERT(__qt_this);
    __qt_this->setData(__qt_data);
    QTJAMBI_DEBUG_TRACE("(native) -> leaving: QwtPlotSeriesItem::setData(QwtSeriesData * data)");

}
//} class QwtPlotSeriesItem

//{ class QwtPlotRenderer
// QwtPlotRenderer::renderTo(QwtPlot * plot, QPaintDevice & p) const
extern "C" Q_DECL_EXPORT void JNICALL QTJAMBI_FUNCTION_PREFIX(Java_com_trolltech_qt_qwt_QwtPlotRenderer__1_1qt_1renderTo_1QwtPlot_1QPaintDevice__JJJ)
(JNIEnv *__jni_env,
 jobject,
 jlong __this_nativeId,
 jlong  plot,
 jlong  p1)
{
    QTJAMBI_DEBUG_TRACE("(native) entering: QwtPlotRenderer::renderTo(QwtPlot * plot, QPaintDevice & p) const");
    Q_UNUSED(__jni_env)
    Q_UNUSED(__this_nativeId)
    QwtPlot*  __qt_plot = (QwtPlot* ) qtjambi_from_jlong(plot);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    QPaintDevice&  __qt_p1 = (QPaintDevice& ) *(QPaintDevice* ) qtjambi_to_interface(__jni_env, (QtJambiLink *)p1, "QPaintDeviceInterface", "com/trolltech/qt/gui/", "__qt_cast_to_QPaintDevice");
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    QtJambiShell_QwtPlotRenderer *__qt_this = (QtJambiShell_QwtPlotRenderer *) qtjambi_from_jlong(__this_nativeId);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    Q_ASSERT(__qt_this);
    __qt_this->renderTo((QwtPlot* )__qt_plot, (QPaintDevice& )__qt_p1);
    QTJAMBI_DEBUG_TRACE("(native) -> leaving: QwtPlotRenderer::renderTo(QwtPlot * plot, QPaintDevice & p) const");

}
//} class QwtPlotRenderer