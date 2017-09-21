TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += \
    Concrete.h \
	Concrete01.h \
	Concrete02.h \
	OpenseesModelGenerator.h \
	ReinforcingSteel.h \
	Steel.h \
	Steel02.h

SOURCES += \
    Concrete.cpp \
	Concrete01.cpp \
	Concrete02.cpp \
	OpenseesModelGenerator.cpp \
	ReinforcingSteel.cpp \
	Steel.cpp \
	Steel02.cpp \
	main.cpp

win32 {
INCLUDEPATH += 
LIBS += 
}
