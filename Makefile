CXXFLAGS =	-O2 -g -Wall -fmessage-length=0 $(INCLUDES)

INCLUDES = -Isrc -Idemo

OBJS =	demo/DemoLog.o \
	src/CLog.o \

LIBS =

TARGET = DemoLog.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
