CXX ?= g++

CXXFLAGS += -c -Wall $(shell pkg-config --cflags opencv) -std=c++11 -g
LDFLAGS += $(shell pkg-config --libs --static opencv)

all: facedetectSimple

facedetectSimple: facedetectSimple.o Texto.o Menu.o Figura.o; $(CXX) $< -o $@ $(LDFLAGS)

%.o: %.cpp; $(CXX) $< -o $@ $(CXXFLAGS)

clean: ; rm -f *.o facedetectSimple
