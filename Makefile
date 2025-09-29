#================================
# * C++ Sample Makefile
#================================

# Detect platform
UNAME_S := $(shell uname -s)

#================================
# Compiler and flags
#================================
ifeq ($(UNAME_S),Darwin)
  CXX := clang++ -arch x86_64
else
  CXX := g++
endif

CXXFLAGS := -Wall -Wextra -g
LDFLAGS  :=
INCLUDE  := -I include/

#================================
# Project structure
#================================
BUILD_DIR    	:= ./build
OBJ_DIR  		:= $(BUILD_DIR)/objects
APP_DIR  		:= $(BUILD_DIR)/apps
TARGET   		:= app
SRC      		:= $(shell find src -type f -name *.cpp)
OBJECTS 		:= $(SRC:%.cpp=$(OBJ_DIR)/%.o)

#================================
# Default target
#================================
all: print clean build $(APP_DIR)/$(TARGET)
#all: clean build $(APP_DIR)/$(TARGET)

#================================
# Compilation 
#================================
$(OBJ_DIR)/%.o: %.cpp
	@echo ""
	@echo "Compiling $< ..."
	@echo ""
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ -c $<

#================================
# Linking
#================================
$(APP_DIR)/$(TARGET): $(OBJECTS)
	@echo ""
	@echo "Linking $(TARGET) ..."
	@echo ""
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(OBJECTS) $(LDFLAGS) -o $@

#================================
# Clean build directories
#================================
clean:
	@echo ""
	@echo "Cleaning build artifacts ..."
	@echo ""
	-@rm -rvf $(OBJ_DIR)/*
	-@rm -rvf $(APP_DIR)/*

#================================
# Create build directories
#================================
build:
	@echo ""
	@echo "Building ..."
	@echo ""	
	@mkdir -p $(APP_DIR)
	@mkdir -p $(OBJ_DIR)

#================================
# Print variables
#================================
print:
	@echo ""
	@echo "---- Build Variables ----"
	@echo ""
	@echo " SRC: ${SRC}"
	@echo ""
	@echo " OBJECTS: ${OBJECTS}"
	@echo ""
	@echo " BUILD_DIR: ${BUILD_DIR}"
	@echo ""
	@echo " OBJ_DIR: ${OBJ_DIR}"
	@echo ""
	@echo " APP_DIR: ${APP_DIR}"
	@echo ""
	@echo " TARGET: ${TARGET}"
	@echo ""
	@echo " INCLUDE: ${INCLUDE}"
	@echo ""
	@echo " CXXFLAGS: ${CXXFLAGS}"
	@echo ""
	@echo " LDFLAGS: ${LDFLAGS}"
	@echo ""
#================================
# Phony targets
#================================
.PHONY: clean

