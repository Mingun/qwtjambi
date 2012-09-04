
class QwtLegend__ extends QwtLegend {
    private java.util.Map<QwtLegendItemManager,com.trolltech.qt.gui.QWidget> __rcWidgetsForItemManager = new java.util.HashMap<QwtLegendItemManager,com.trolltech.qt.gui.QWidget>();
}// class

class QwtPlot__ extends QwtPlot {
    @QtBlockedSlot
    public final void insertLegend(QwtLegend legend) {
        insertLegend(legend, QwtPlot.LegendPosition.RightLegend, -1.0);
    }
    @QtBlockedSlot
    public final void insertLegend(QwtLegend legend, QwtPlot.LegendPosition pos) {
        insertLegend(legend, pos, -1.0);
    }
    @QtBlockedSlot
    public final void insertLegend(QwtLegend legend, QwtPlot.LegendPosition pos, double ratio) {
        com.trolltech.qt.GeneratorUtilities.threadCheck(this);
        if (nativeId() == 0)
            throw new QNoNativeResourcesException("Function call on incomplete object of type: " +getClass().getName());
        if (legend != null && pos != QwtPlot.LegendPosition.ExternalLegend) {
            legend.disableGarbageCollection();
        }
        __qt_insertLegend_QwtLegend_LegendPosition_double(nativeId(), legend == null ? 0 : legend.nativeId(), pos.value(), ratio);
    }
    @QtBlockedSlot
    native void __qt_insertLegend_QwtLegend_LegendPosition_double(long __this__nativeId, long legend, int pos, double ratio);
}// class

class QwtPlotSeriesItem__<T> extends QwtPlotSeriesItem<T> {

    @QtBlockedSlot
    public final QwtSeriesData<T> data() {
        if (nativeId() == 0)
            throw new QNoNativeResourcesException("Function call on incomplete object of type: " +getClass().getName());
        return (QwtSeriesData<T>) __qt_data(nativeId());
    }
    @QtBlockedSlot
    private native final QwtSeriesData<T> __qt_data(long __this__nativeId);

    @QtBlockedSlot
    public final void setData(QwtSeriesData<T> data) {
        if (nativeId() == 0)
            throw new QNoNativeResourcesException("Function call on incomplete object of type: " +getClass().getName());
        if (data != null) {
            data.disableGarbageCollection();
        }
        __qt_setData(nativeId(), data == null ? 0 : data.nativeId());
    }
    @QtBlockedSlot
    native void __qt_setData(long __this__nativeId, long data);

}// class
