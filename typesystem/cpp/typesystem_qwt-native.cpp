//{ class QwtPlot__
// QwtPlot::insertLegend(QwtLegend * legend, QwtPlot::LegendPosition pos, double ratio)
extern "C" Q_DECL_EXPORT void JNICALL QTJAMBI_FUNCTION_PREFIX(Java_com_trolltech_qt_qwt_QwtPlot__1_1qt_1insertLegend_1QwtLegend_1LegendPosition_1double__JJID)
(JNIEnv *__jni_env,
 jobject,
 jlong __this_nativeId,
 jlong  legend,
 jint pos,
 jdouble ratio)
{
    QTJAMBI_DEBUG_TRACE("(native) entering: QwtPlot::insertLegend(QwtLegend * legend, QwtPlot::LegendPosition pos, double ratio)");
    Q_UNUSED(__jni_env)
    Q_UNUSED(__this_nativeId)

    QwtLegend* __qt_legend = (QwtLegend*) qtjambi_from_jlong(legend);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);

    QwtPlot::LegendPosition __qt_pos = (QwtPlot::LegendPosition) pos;
    QTJAMBI_EXCEPTION_CHECK(__jni_env);

    QtJambiShell_QwtPlot *__qt_this = (QtJambiShell_QwtPlot*) qtjambi_from_jlong(__this_nativeId);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    Q_ASSERT(__qt_this);

    __qt_this->insertLegend(__qt_legend, __qt_pos, (double)ratio);
    QTJAMBI_DEBUG_TRACE("(native) -> leaving: QwtPlot::insertLegend(QwtLegend * legend, QwtPlot::LegendPosition pos, double ratio)");
}
//} class QwtPlot__

//{ class QwtPlotSeriesItem__
// %QTCLASS::data()
extern "C" Q_DECL_EXPORT jobject JNICALL QTJAMBI_FUNCTION_PREFIX(Java_com_trolltech_qt_qwt_%QTCLASS__1_1qt_1data__J)
(JNIEnv *__jni_env,
 jobject,
 jlong __this_nativeId)
{
    QTJAMBI_DEBUG_TRACE("(native) entering: %QTCLASS::data()");
    Q_UNUSED(__jni_env)
    Q_UNUSED(__this_nativeId)
    QtJambiShell_%QTCLASS *__qt_this = (QtJambiShell_%QTCLASS *) qtjambi_from_jlong(__this_nativeId);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    Q_ASSERT(__qt_this);
    QwtSeriesData< %TYPE >*  __qt_return_value = __qt_this->data();
    // TODO: qtjambi_from_object
    //jobject __java_return_value = qtjambi_from_cpointer(__jni_env, __qt_return_value, 8, 1);
    jobject __java_return_value = qtjambi_from_object(__jni_env, __qt_return_value, "%JAVACLASS", "com/trolltech/qt/qwt/", true);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    QTJAMBI_DEBUG_TRACE("(native) -> leaving: %QTCLASS::data()");
    return __java_return_value;
}
// %QTCLASS::setData(QwtSeriesData< %TYPE > * data)
extern "C" Q_DECL_EXPORT void JNICALL QTJAMBI_FUNCTION_PREFIX(Java_com_trolltech_qt_qwt_%QTCLASS__1_1qt_1setData)
(JNIEnv *__jni_env,
 jobject,
 jlong __this_nativeId,
 jlong  data)
{
    QTJAMBI_DEBUG_TRACE("(native) entering: %QTCLASS::setData(QwtSeriesData< %TYPE > * data)");
    Q_UNUSED(__jni_env)
    Q_UNUSED(__this_nativeId)
    QwtSeriesData< %TYPE >*  __qt_data = (QwtSeriesData< %TYPE >* ) qtjambi_from_jlong(data);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);

    QtJambiShell_%QTCLASS *__qt_this = (QtJambiShell_%QTCLASS *) qtjambi_from_jlong(__this_nativeId);
    QTJAMBI_EXCEPTION_CHECK(__jni_env);
    Q_ASSERT(__qt_this);

    __qt_this->setData(__qt_data);
    QTJAMBI_DEBUG_TRACE("(native) -> leaving: %QTCLASS::setData(QwtSeriesData< %TYPE > * data)");

}
//} class QwtPlotSeriesItem__
