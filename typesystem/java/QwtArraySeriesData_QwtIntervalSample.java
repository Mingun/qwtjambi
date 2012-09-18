
package com.trolltech.qt.qwt;

import java.util.List;
import java.util.ArrayList;
import com.trolltech.qt.core.QRectF;

public class QwtArraySeriesData_QwtIntervalSample extends QwtSeriesData_QwtIntervalSample {
    protected QRectF boundingRect;
    protected List<QwtIntervalSample> samples;

    public QwtArraySeriesData_QwtIntervalSample() {
        samples = new ArrayList<QwtIntervalSample>();
    }

    public QwtArraySeriesData_QwtIntervalSample(int initialCapacity) {
        samples = new ArrayList<QwtIntervalSample>(initialCapacity);
    }

    @Override
    public QRectF boundingRect() {
        if (boundingRect == null) {
            boundingRect = QwtUtils.qwtBoundingRect(this, 0, -1);
        }
        return boundingRect;
    }

    @Override
    public QwtIntervalSample sample(int i) {
        return samples.get(i);
    }

    @Override
    public int size() {
        return samples.size();
    }

    public List<QwtIntervalSample> samples() {
        return samples;
    }

    public void setSamples(List<QwtIntervalSample> samples) {
        if (samples == null) {
            throw new IllegalArgumentException("'samples' must not be null");
        }
        this.samples = samples;
        boundingRect = null;
    }
}
