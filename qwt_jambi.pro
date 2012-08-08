QWT_ROOT=$${PWD}/..
QT_JAMBI_ROOT=/home/ayanichkin/Projects/QtJambi/qtjambi-src-lgpl-4.5.2_01
GENERATED_DIR=$${PWD}/generated
COMPILED_DIR=$${PWD}/compiled

TEMPLATE = lib
# TARGET = qwt-jambi
TARGET = com_trolltech_qt_qwt
# Qt собрана статически вместе с Qt Jambi, поэтому нет необходимости линковать стандартные модули Qt.
QT = 

QWT_CONFIG += QwtPlot
# QWT_CONFIG += QwtWidgets
QWT_CONFIG += QwtSvg
# QWT_CONFIG += QwtMathML
# QWT_CONFIG += QwtDesigner
# Подключаем файл со списком исходников qwt
include(qwt.pri)
include($${QT_JAMBI_ROOT}/qtjambi/qtjambi_include.pri)
# Подключаем файл со списком исходников биндинга к java
# include($${GENERATED_DIR}/cpp/com_trolltech_qt_qwt/com_trolltech_qt_qwt.pri)
include($${GENERATED_DIR}/cpp/$${TARGET}/$${TARGET}.pri)

linux-g++* {
    QMAKE_CXXFLAGS *= -Wno-write-strings
}

INCLUDEPATH += $${PWD}/typesystem \
               $${QMAKE_INCDIR_QT}/QtCore \
               $${QMAKE_INCDIR_QT}/QtGui \
               $${QMAKE_INCDIR_QT}/QtSvg \

LIBS = -L/home/ayanichkin/tranzaxis/trunk/org.radixware/kernel/explorer/lib/native/linux-i-64 -lqtjambi
# Эту переменную выставляет Qwt, а генератор Qt Jambi недальновидно использует slots вместо Q_SLOTS
CONFIG -= no_keywords

DESTDIR = $${PWD}/lib

MOC_DIR      = $${GENERATED_DIR}/cpp/moc
# RCC_DIR      = $${GENERATED_DIR}/cpp/resources
!debug_and_release {
    OBJECTS_DIR       = $${COMPILED_DIR}/cpp/obj
}