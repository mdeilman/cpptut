
CXX = g++

GTEST_HOME = c:/home/src/gtest/googletest
INC = -I $(GTEST_HOME) -I $(GTEST_HOME)/include -I . -I ../src -I ../../../class-library/include
LDLIBS = c:/home/src/lib/libgtest.a
LDFLAGS =
CXXFLAGS = -std=c++11 -pthread

TARGET = mkt_freq

BUILD_DIR = ./build
SRCS = $(wildcard *.cpp)
OBJ = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)
DEPS = $(OBJ:%.o=%.d)

$(TARGET) : $(BUILD_DIR)/$(TARGET)

$(BUILD_DIR)/$(TARGET) : $(OBJ)
#	mkdir $(@D)
	mkdir $(@D)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS) $(LDLIBS)

-include $(DEPS)

$(BUILD_DIR)/%.o : %.cpp
#	mkdir -p $(@D)
	mkdir -p $(@D)
	$(CXX) -static $(CXXFLAGS) -MMD -c $< -o $@ $(INC)

.PHONY: all clean tests

all: clean $(TARGET)

clean:
	rm -fr $(BUILD_DIR)

tests: $(TARGET)
	$(BUILD_DIR)/$(TARGET)
