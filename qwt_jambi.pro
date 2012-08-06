TARGET = com_trolltech_qt_qwt

QWT_ROOT=$${PWD}/..
QT_JAMBI_ROOT=/home/ayanichkin/Projects/QtJambi/qtjambi-src-lgpl-4.5.2_01

GENERATED_DIR=generated

include($${QT_JAMBI_ROOT}/qtjambi/qtjambi_include.pri)
DESTDIR = $${PWD}/lib
DLLDESTDIR = $${PWD}/bin
include($${GENERATED_DIR}/cpp/$${TARGET}/$${TARGET}.pri)

# gcc {
    QMAKE_CXXFLAGS += -Wno-write-strings
# }

INCLUDEPATH += $${QWT_ROOT}/src \
            $${PWD}/typesystem
LIBS += -L$${QWT_ROOT}/lib -lqwt