
package com.trolltech.qt.qwt;

import java.util.List;
import java.util.ArrayList;
import com.trolltech.qt.core.QRectF;

class QwtArraySeriesData@NAME@ extends QwtSeriesData@NAME@ {
    protected QRectF boundingRect;
    protected List<@TYPE@> samples = new ArrayList<@TYPE@>();

    @Override
    public QRectF boundingRect() {
        if (boundingRect == null) {
            boundingRect = QwtUtils.qwtBoundingRect(this, 0, -1);
        }
        return boundingRect;
    }

    @Override
    public @TYPE@ sample(int i) {
        return samples.get(i);
    }

    @Override
    public int size() {
        return samples.size();
    }
    
    public void clear() {
        samples.clear();
    }
}// class