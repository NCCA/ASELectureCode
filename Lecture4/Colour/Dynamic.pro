# this is a qmake file
# target is the name of the program, we can add a path to this
TARGET =Dynamic
OBJECTS_DIR=obj

# only used for mac
CONFIG -= app_bundle
# add the QtCore to the build for QImage
# this is where we want to put the .o build files
# this is where to find the source files
SOURCES += \
				src/Dynamic.cpp \
				src/Colour.cpp
DEPENDPATH +=src \
					 +=include

INCLUDEPATH +=include
HEADERS += include/Colour.h
QMAKE_CXXFLAGS+= -Wall -g -O2
# uncomment this to remove all asserts
DEFINES+= NDEBUG
