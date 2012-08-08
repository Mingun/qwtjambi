#ifndef QTJAMBI_QWT_QHASHES_H
#define QTJAMBI_QWT_QHASHES_H

#include <QtCore/QHash>
#include <qwt_interval.h>
#include <qwt_interval_symbol.h>
#include <qwt_point_3d.h>
#include <qwt_series_data.h>
#include <qwt_scale_div.h>
#include <qwt_symbol.h>
#include <qwt_text.h>

#include <qtjambi_core_qhashes.h>
#include <qtjambi_gui_qhashes.h>

inline int qHash(const QwtInterval &value)
{
    int hashCode = int(value.borderFlags());
    hashCode = hashCode * 31 + qHash(quint64(value.minValue()));
    hashCode = hashCode * 31 + qHash(quint64(value.maxValue()));
    return hashCode;
}
inline int qHash(const QwtIntervalSample &value)
{
    return qHash(quint64(value.value)) * 31 + qHash(value.interval);
}
inline int qHash(const QwtIntervalSymbol &value)
{
    int hashCode = int(value.style());
    hashCode = hashCode * 31 + value.width();
    hashCode = hashCode * 31 + qHash(value.brush());
    hashCode = hashCode * 31 + qHash(value.pen());
    return hashCode;
}
inline int qHash(const QwtPoint3D &value)
{
    int hashCode = qHash(quint64(value.x()));
    hashCode = hashCode * 31 + qHash(quint64(value.y()));
    hashCode = hashCode * 31 + qHash(quint64(value.z()));
    return hashCode;
}
inline int qHash(const QwtScaleDiv &value)
{
    int hashCode = 1;
    for (int tick = 0; tick < int(QwtScaleDiv::NTickTypes); ++tick) {
        for (QList<double>::const_iterator it = value.ticks(tick).begin(); it != value.ticks(tick).end(); ++it) {
            hashCode = hashCode * 31 + qHash(quint64(*it));
        }
    }
    return hashCode;
}
inline int qHash(const QwtSymbol &value)
{
    int hashCode = int(value.style());
    hashCode = hashCode * 31 + qHash(value.brush());
    hashCode = hashCode * 31 + qHash(value.pen());
    hashCode = hashCode * 31 + qHash(value.size());
    return hashCode;
}
inline int qHash(const QwtText &value)
{
    int hashCode = qHash(value.text());
    hashCode = hashCode * 31 + qHash(value.font());
    hashCode = hashCode * 31 + qHash(value.backgroundPen());
    hashCode = hashCode * 31 + qHash(value.backgroundBrush());
    // hashCode = hashCode * 31 + int(value.paintAttributes());
    // hashCode = hashCode * 31 + int(value.layoutAttributes());
    hashCode = hashCode * 31 + value.renderFlags() ;
    return hashCode;
}

#endif // QTJAMBI_QWT_QHASHES_H