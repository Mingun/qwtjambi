
class QwtPlotSeriesItem<T> {

    @QtBlockedSlot
    public final QwtSeriesData<T> data() {
        if (nativeId() == 0)
            throw new QNoNativeResourcesException("Function call on incomplete object of type: " +getClass().getName());
        return __qt_data(nativeId());
    }
    @QtBlockedSlot
    private native final QwtSeriesData<T> __qt_data(long __this__nativeId);

    @QtBlockedSlot
    public final void setData(QwtSeriesData<T> data) {
        if (nativeId() == 0)
            throw new QNoNativeResourcesException("Function call on incomplete object of type: " +getClass().getName());
        __qt_setData(nativeId(), data);
    }
    @QtBlockedSlot
    private native final void __qt_setData(long __this__nativeId, QwtSeriesData<T> data);

}// class

class QwtSamplingThread extends QThread {
    //TODO
}// class