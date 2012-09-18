
package com.trolltech.qt.qwt;

import java.util.List;
import java.util.ArrayList;
import com.trolltech.qt.core.QRectF;

public abstract class QwtArraySeriesData<T> extends QwtSeriesData<T> {
    protected QRectF boundingRect;
    protected List<T> samples;

    public QwtArraySeriesData() {
        samples = new ArrayList<T>();
    }

    public QwtArraySeriesData(int initialCapacity) {
        samples = new ArrayList<T>(initialCapacity);
    }

    @Override
    public T sample(int i) {
        return samples.get(i);
    }

    @Override
    public int size() {
        return samples.size();
    }

    public List<T> samples() {
        return samples;
    }

    public void setSamples(List<T> samples) {
        if (samples == null) {
            throw new IllegalArgumentException("'samples' must not be null");
        }
        this.samples = samples;
        boundingRect = null;
    }
}
