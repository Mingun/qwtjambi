
package com.trolltech.qt.qwt;

import java.util.List;
import java.util.ArrayList;
import com.trolltech.qt.core.QRectF;
import com.trolltech.qt.core.QPointF;

public class QwtArraySeriesData_QPointF extends QwtSeriesData_QPointF {
    protected QRectF boundingRect;
    protected List<QPointF> samples;

    public QwtArraySeriesData_QPointF() {
        samples = new ArrayList<QPointF>();
    }

    public QwtArraySeriesData_QPointF(int initialCapacity) {
        samples = new ArrayList<QPointF>(initialCapacity);
    }

    @Override
    public QRectF boundingRect() {
        if (boundingRect == null) {
            boundingRect = QwtUtils.qwtBoundingRect(this, 0, -1);
        }
        return boundingRect;
    }

    @Override
    public QPointF sample(int i) {
        return samples.get(i);
    }

    @Override
    public int size() {
        return samples.size();
    }

    public List<QPointF> samples() {
        return samples;
    }

    public void setSamples(List<QPointF> samples) {
        if (samples == null) {
            throw new IllegalArgumentException("'samples' must not be null");
        }
        this.samples = samples;
        boundingRect = null;
    }
}
