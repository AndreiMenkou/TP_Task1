# -------------------------------------------------
# Project created by QtCreator 2011-10-15T16:28:24
# -------------------------------------------------
TARGET = Task1
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    figures/Triangle.cpp \
    figures/Square.cpp \
    figures/Segment.cpp \
    figures/Rhombus.cpp \
    figures/Rectangle.cpp \
    figures/Ray.cpp \
    figures/Polygon.cpp \
    figures/Point.cpp \
    figures/Line.cpp \
    figures/Figure2D.cpp \
    figures/Figure1D.cpp \
    figures/Ellipse.cpp \
    figures/Circle.cpp \
    figures/AbstractFigure.cpp \
    graphicsscene.cpp \
    figures/Parallelogramm.cpp
HEADERS += mainwindow.h \
    figures/Triangle.h \
    figures/Square.h \
    figures/Segment.h \
    figures/Rhombus.h \
    figures/Rectangle.h \
    figures/Ray.h \
    figures/Polygon.h \
    figures/Point.h \
    figures/Line.h \
    figures/Figure2D.h \
    figures/Figure1D.h \
    figures/Ellipse.h \
    figures/Circle.h \
    figures/AbstractFigure.h \
    graphicsscene.h \
    figures/Parallelogramm.h
RESOURCES += resources.qrc
CONFIG += static
static { 
CONFIG += static	
DEFINES += STATIC
message("Static build.")
}