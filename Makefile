CXX			:= g++
CXXFLAGS 	:= -std=c++11 -Wall -Wextra -Werror -g -I.

MSG_START	:= "Build Started"
MSG_END		:= "Build Complete"
MSG_CLEAN	:= "Cleaning up"

BUILD_DIR	:= ./bin
SRC_DIR		:= ./src

TARGET		:= ${BUILD_DIR}/sampleapp.bin

SRC			:= ${SRC_DIR}/main.cpp ${SRC_DIR}/Troll.cpp ${SRC_DIR}/Orc.cpp ${SRC_DIR}/Character.cpp

all			:= build

build:
	@echo ${MSG_START}

	#remove directory if it exits and then create directory
	rm -rf ${BUILD_DIR} || true

	#create bin directory
	mkdir ${BUILD_DIR}

	${CXX} ${CXXFLAGS} -o ${TARGET} ${SRC}
	@echo ${MSG_END}
	./${TARGET}

.PHONY: clean

clean:
	@echo ${MSG_CLEAN}
	rm -rf ${BUILD_DIR} || true