
package com.trolltech.qt.qwt;

import com.trolltech.qt.core.QPointF;
import com.trolltech.qt.core.QRectF;

public abstract class QwtUtils {
    private QwtUtils() {}

    public static QRectF qwtBoundingRect(QPointF sample) {
        return new QRectF(sample.x(), sample.y(), 0.0, 0.0);
    }
    public static QRectF qwtBoundingRect(QwtPoint3D sample) {
        return new QRectF(sample.x(), sample.y(), 0.0, 0.0);
    }
    public static QRectF qwtBoundingRect(QwtPointPolar sample) {
        return new QRectF(sample.azimuth(), sample.radius(), 0.0, 0.0);
    }
    public static QRectF qwtBoundingRect(QwtIntervalSample sample) {
        return new QRectF(sample.interval().minValue(), sample.value(), sample.interval().maxValue() - sample.interval().minValue(), 0.0);
    }
    public static QRectF qwtBoundingRect(QwtSetSample sample) {
        double minX = sample.set().get(0);
        double maxX = minX;

        for (double d : sample.set()) {
            if (d < minX)
                minX = d;
            if (d > maxX)
                maxX = d;
        }

        double minY = sample.value();
        double maxY = sample.value();

        return new QRectF(minX, minY, maxX - minX, maxY - minY);
    }

    /**
     * Вычисляет ограничивающий прямоугольник серии точек в указанном диапазоне.
     * @param samples 
     *        Серия точек.
     * @param from 
     *        Индекс, c которого начинать выборку, включительно. Если меньше нуля, то 0.
     * @param to
     *        Индекс, на котором закончить выборку, включительно. Если меньше нуля, то
     *        <code>samples.size() - 1</code>.
     * @return Прямоугольник, в пределах которого лежат все точки.
     */
    public static QRectF qwtBoundingRect(QwtSeriesData_QPointF samples, int from, int to) {
        if (from < 0) {from = 0;}
        if (to < 0) {to = samples.size() - 1;}
        if (to < from) {return new QRectF(1.0, 1.0, -2.0, -2.0);}

        QPointF p = samples.sample(from);
        double left   = p.x();
        double right  = p.x();
        double top    = p.y();
        double bottom = p.y();

        for (int i = from+1; i <= to; ++i) {
            p = samples.sample(i);
            left   = Math.min(left  , p.x());
            right  = Math.max(right , p.x());
            top    = Math.min(top   , p.y());
            bottom = Math.max(bottom, p.y());
        }
        return new QRectF(left, top, right - left, bottom - top);
    }
    /**
     * Вычисляет ограничивающий прямоугольник серии точек в указанном диапазоне.
     * @param samples 
     *        Серия точек.
     * @param from 
     *        Индекс, c которого начинать выборку, включительно. Если меньше нуля, то 0.
     * @param to
     *        Индекс, на котором закончить выборку, включительно. Если меньше нуля, то
     *        <code>samples.size() - 1</code>.
     * @return Прямоугольник, в пределах которого лежат все точки.
     */
    public static QRectF qwtBoundingRect(QwtSeriesData_QwtPoint3D samples, int from, int to) {
        if (from < 0) {from = 0;}
        if (to < 0) {to = samples.size() - 1;}
        if (to < from) {return new QRectF(1.0, 1.0, -2.0, -2.0);}

        QwtPoint3D p = samples.sample(from);
        double left   = p.x();
        double right  = p.x();
        double top    = p.y();
        double bottom = p.y();

        for (int i = from+1; i <= to; ++i) {
            p = samples.sample(i);
            left   = Math.min(left  , p.x());
            right  = Math.max(right , p.x());
            top    = Math.min(top   , p.y());
            bottom = Math.max(bottom, p.y());
        }
        return new QRectF(left, top, right - left, bottom - top);
    }
    /**
     * Вычисляет ограничивающий прямоугольник серии точек в указанном диапазоне.
     * @param samples 
     *        Серия точек.
     * @param from 
     *        Индекс, c которого начинать выборку, включительно. Если меньше нуля, то 0.
     * @param to
     *        Индекс, на котором закончить выборку, включительно. Если меньше нуля, то
     *        <code>samples.size() - 1</code>.
     * @return Прямоугольник, в пределах которого лежат все точки.
     */
    public static QRectF qwtBoundingRect(QwtSeriesData_QwtSetSample samples, int from, int to) {
        if (from < 0) {from = 0;}
        if (to < 0) {to = samples.size() - 1;}
        if (to < from) {return new QRectF(1.0, 1.0, -2.0, -2.0);}

        
        QwtSetSample p = samples.sample(from);
        
        double minX = p.set().get(0);
        double maxX = minX;
        for (double d : p.set()) {
            if (d < minX) {minX = d;}
            if (d > maxX) {maxX = d;}
        }

        double left   = minX;
        double right  = maxX;
        double top    = p.value();
        double bottom = p.value();

        for (int i = from+1; i <= to; ++i) {
            p = samples.sample(i);
            minX = p.set().get(0);
            maxX = minX;
            for (double d : p.set()) {
                if (d < minX) {minX = d;}
                if (d > maxX) {maxX = d;}
            }
            
            left   = Math.min(left  , minX);
            right  = Math.max(right , maxX);
            top    = Math.min(top   , p.value());
            bottom = Math.max(bottom, p.value());
        }
        return new QRectF(left, top, right - left, bottom - top);
    }
    /**
     * Вычисляет ограничивающий прямоугольник серии точек в указанном диапазоне.
     * @param samples 
     *        Серия точек.
     * @param from 
     *        Индекс, c которого начинать выборку, включительно. Если меньше нуля, то 0.
     * @param to
     *        Индекс, на котором закончить выборку, включительно. Если меньше нуля, то
     *        <code>samples.size() - 1</code>.
     * @return Прямоугольник, в пределах которого лежат все точки.
     */
    public static QRectF qwtBoundingRect(QwtSeriesData_QwtIntervalSample samples, int from, int to) {
        if (from < 0) {from = 0;}
        if (to < 0) {to = samples.size() - 1;}
        if (to < from) {return new QRectF(1.0, 1.0, -2.0, -2.0);}

        QwtIntervalSample p = samples.sample(from);
        double left   = p.interval().minValue();
        double right  = p.interval().maxValue();
        double top    = p.value();
        double bottom = p.value();

        for (int i = from+1; i <= to; ++i) {
            p = samples.sample(i);
            left   = Math.min(left  , p.interval().minValue());
            right  = Math.max(right , p.interval().maxValue());
            top    = Math.min(top   , p.value());
            bottom = Math.max(bottom, p.value());
        }
        return new QRectF(left, top, right - left, bottom - top);
    }
}
