#ifndef __QWT_JAMBI_H__
#define __QWT_JAMBI_H__

#define QT_NO_STL
#ifndef NULL
#define NULL 0
#endif

#undef QT_NO_DEBUG
#include <QtCore>
#include <QtGui>

#define QWT_NO_COMPAT 1

#include "../../src/qwt.h"
#include "../../src/qwt_abstract_scale_draw.h"
#include "../../src/qwt_interval_symbol.h"
#include "../../src/qwt_clipper.h"
#include "../../src/qwt_color_map.h"
#include "../../src/qwt_column_symbol.h"
#include "../../src/qwt_interval.h"
#include "../../src/qwt_dyngrid_layout.h"
#include "../../src/qwt_global.h"
#include "../../src/qwt_math.h"
#include "../../src/qwt_magnifier.h"
#include "../../src/qwt_null_paintdevice.h"
#include "../../src/qwt_painter.h"
#include "../../src/qwt_panner.h"
#include "../../src/qwt_picker.h"
#include "../../src/qwt_picker_machine.h"
#include "../../src/qwt_point_3d.h"
#include "../../src/qwt_point_polar.h"
#include "../../src/qwt_round_scale_draw.h"
#include "../../src/qwt_scale_div.h"
#include "../../src/qwt_scale_draw.h"
#include "../../src/qwt_scale_engine.h"
#include "../../src/qwt_scale_map.h"
#include "../../src/qwt_spline.h"
#include "../../src/qwt_symbol.h"
#include "../../src/qwt_system_clock.h"
#include "../../src/qwt_text_engine.h"
#include "../../src/qwt_text_label.h"
#include "../../src/qwt_text.h"


#include "../../src/qwt_curve_fitter.h"
#include "../../src/qwt_event_pattern.h"
#include "../../src/qwt_legend.h"
#include "../../src/qwt_legend_item.h"
#include "../../src/qwt_legend_itemmanager.h"
#include "../../src/qwt_plot.h"
#include "../../src/qwt_plot_renderer.h"
#include "../../src/qwt_plot_curve.h"
#include "../../src/qwt_plot_dict.h"
#include "../../src/qwt_plot_directpainter.h"
#include "../../src/qwt_plot_grid.h"
#include "../../src/qwt_plot_histogram.h"
#include "../../src/qwt_plot_item.h"
#include "../../src/qwt_plot_intervalcurve.h"
#include "../../src/qwt_plot_layout.h"
#include "../../src/qwt_plot_marker.h"
#include "../../src/qwt_plot_rasteritem.h"
#include "../../src/qwt_plot_spectrogram.h"
#include "../../src/qwt_plot_spectrocurve.h"
#include "../../src/qwt_plot_scaleitem.h"
#include "../../src/qwt_plot_seriesitem.h"
#include "../../src/qwt_plot_canvas.h"
#include "../../src/qwt_plot_panner.h"
#include "../../src/qwt_plot_picker.h"
#include "../../src/qwt_plot_zoomer.h"
#include "../../src/qwt_plot_magnifier.h"
#include "../../src/qwt_plot_rescaler.h"
#include "../../src/qwt_raster_data.h"
#include "../../src/qwt_matrix_raster_data.h"
#include "../../src/qwt_sampling_thread.h"
#include "../../src/qwt_series_data.h"
#include "../../src/qwt_scale_widget.h"


#include "../../src/qwt_plot_svgitem.h"

/*
#include "../../src/qwt_abstract_slider.h"
#include "../../src/qwt_abstract_scale.h"
#include "../../src/qwt_arrow_button.h"
#include "../../src/qwt_analog_clock.h"
#include "../../src/qwt_compass.h"
#include "../../src/qwt_compass_rose.h"
#include "../../src/qwt_counter.h"
#include "../../src/qwt_dial.h"
#include "../../src/qwt_dial_needle.h"
#include "../../src/qwt_double_range.h"
#include "../../src/qwt_knob.h"
#include "../../src/qwt_slider.h"
#include "../../src/qwt_thermo.h"
#include "../../src/qwt_wheel.h"*/

#include "qtjambi_qwt_qhashes.h"
#include "qtjambi_core.h"

// При использовании typedef невозможно заменить выражение по умолчанию, что приводит к ошибке при компиляции java-кода.
// typedef QwtPlotSeriesItem<JObjectWrapper>  QwtPlotSeriesItemGeneric;
typedef QwtSeriesData<JObjectWrapper>      QwtSeriesDataGeneric;
typedef QwtArraySeriesData<JObjectWrapper> QwtArraySeriesDataGeneric;

class QwtPlotSeriesItemGeneric : public QwtPlotSeriesItem<JObjectWrapper> {
    typedef QwtPlotSeriesItem<JObjectWrapper> _Base;
public:
    explicit QwtPlotSeriesItemGeneric(const QString &title = QString::null) : _Base(title) {}
    explicit QwtPlotSeriesItemGeneric(const QwtText &title) : _Base(title) {}
/*
    inline QwtSeriesDataGeneric* data() {
        return _Base::data();
    }
    inline void setData(QwtSeriesDataGeneric* data) {
        _Base::setData(data);
    }*/
};
#define QTJAMBI_DEBUG_TRACE(msg) {printf(msg);printf("\n");}
#endif // __QWT_JAMBI_H__