
package com.trolltech.qt.qwt;

import java.util.List;
import java.util.ArrayList;
import com.trolltech.qt.core.QRectF;

public class QwtArraySeriesData_QwtPoint3D extends QwtSeriesData_QwtPoint3D {
    protected QRectF boundingRect;
    protected List<QwtPoint3D> samples;

    public QwtArraySeriesData_QwtPoint3D() {
        samples = new ArrayList<QwtPoint3D>();
    }

    public QwtArraySeriesData_QwtPoint3D(int initialCapacity) {
        samples = new ArrayList<QwtPoint3D>(initialCapacity);
    }

    @Override
    public QRectF boundingRect() {
        if (boundingRect == null) {
            boundingRect = QwtUtils.qwtBoundingRect(this, 0, -1);
        }
        return boundingRect;
    }

    @Override
    public QwtPoint3D sample(int i) {
        return samples.get(i);
    }

    @Override
    public int size() {
        return samples.size();
    }

    public List<QwtPoint3D> samples() {
        return samples;
    }

    public void setSamples(List<QwtPoint3D> samples) {
        if (samples == null) {
            throw new IllegalArgumentException("'samples' must not be null");
        }
        this.samples = samples;
        boundingRect = null;
    }
}
