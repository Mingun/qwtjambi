
package com.trolltech.qt.qwt;

import java.util.List;
import java.util.ArrayList;
import com.trolltech.qt.core.QRectF;

public class QwtArraySeriesData_QwtSetSample extends QwtSeriesData_QwtSetSample {
    protected QRectF boundingRect;
    protected List<QwtSetSample> samples;

    public QwtArraySeriesData_QwtSetSample() {
        samples = new ArrayList<QwtSetSample>();
    }

    public QwtArraySeriesData_QwtSetSample(int initialCapacity) {
        samples = new ArrayList<QwtSetSample>(initialCapacity);
    }

    @Override
    public QRectF boundingRect() {
        if (boundingRect == null) {
            boundingRect = QwtUtils.qwtBoundingRect(this, 0, -1);
        }
        return boundingRect;
    }

    @Override
    public QwtSetSample sample(int i) {
        return samples.get(i);
    }

    @Override
    public int size() {
        return samples.size();
    }

    public List<QwtSetSample> samples() {
        return samples;
    }

    public void setSamples(List<QwtSetSample> samples) {
        if (samples == null) {
            throw new IllegalArgumentException("'samples' must not be null");
        }
        this.samples = samples;
        boundingRect = null;
    }
}
