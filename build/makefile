# Simple Makefile for Project Euler compilation and it's test cases.
# Author: Rakesh Kumar @ cpp.rakesh@gmail.com
# October 8th, 2016

SRC_PATH := ../problems/src
OBJ_PATH := objs

SRC_FILES := $(wildcard $(SRC_PATH)/*.cpp)
OBJ_FILES := $(addprefix $(OBJ_PATH)/,$(notdir $(SRC_FILES:.cpp=.o)))

PROBLEMS_INC := -I ~/git_hub/project_euler/problems/inc

TEST_SUITE_SRC = ../test/src/test_suite.cpp
MAIN_SRC = ../test/src/main.cpp

PROBLEM_54_SRC := $(wildcard ~/git_hub/project_euler/problems/src/problem_54/*.cpp)
OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(PROBLEM_54_SRC:.cpp=.o)))

UTILITY_INTEGER_INC := -I ~/git_hub/utility/integer/inc
UTILITY_MATHS_INC := -I ~/git_hub/utility/maths/general/inc
UTILITY_COMMON_INC := -I ~/git_hub/utility/common/inc
UTILITY_STRING_INC := -I ~/git_hub/utility/string/inc
UTILITY_ALGORITHMS_SEARCH_INC := -I ~/git_hub/utility/algorithms/search/inc
UTILITY_ALGORITHMS_SORT_INC := -I ~/git_hub/utility/algorithms/sort/inc
UTILITY_PERMUTATIONS_INC := -I ~/git_hub/utility/permutation/inc
PROBLEM_54_INC := -I ~/git_hub/project_euler/problems/src/problem_54
TEST_INC := -I ../test/inc

INCLUDES := $(PROBLEMS_INC)
INCLUDES += $(UTILITY_INTEGER_INC)
INCLUDES += $(UTILITY_MATHS_INC)
INCLUDES += $(UTILITY_COMMON_INC)
INCLUDES += $(UTILITY_STRING_INC)
INCLUDES += $(UTILITY_ALGORITHMS_SEARCH_INC)
INCLUDES += $(UTILITY_ALGORITHMS_SORT_INC)
INCLUDES += $(UTILITY_PERMUTATIONS_INC)
INCLUDES += $(PROBLEM_54_INC)
INCLUDES += $(TEST_INC)

GXX = g++ -std=c++11
CCFLAGS = -g -c -Wall -O3

LD := -lutility
LD_PATH := -L ~/git_hub/utility/lib/

TARGET = euler

euler : $(OBJ_FILES) test main
	@echo "Generating executable --> euler"
	@$(GXX) -o $(TARGET) $(OBJ_PATH)/*.o $(LD_PATH) $(LD)

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.cpp
	@echo "Compiling --> $<"
	@$(GXX) $(CCFLAGS) $(INCLUDES) $< -o $@

test: $(TEST_SUITE_SRC)
	@echo "Compiling --> $<"
	@$(GXX) $(CCFLAGS) $(PROBLEMS_INC) $(INCLUDES) $(PROBLEM_54_INC) -o objs/test_suite.o $(TEST_SUITE_SRC)

main: $(MAIN_SRC)
	@echo "Compiling --> $<"
	@$(GXX) $(CCFLAGS) $(PROBLEMS_INC) $(INCLUDES) $(PROBLEM_54_INC) -o objs/main.o $(MAIN_SRC)

$(OBJ_PATH)/%.o: ~/git_hub/project_euler/problems/src/problem_54/%.cpp
	@echo "Compiling --> $<"
	@$(GXX) $(CCFLAGS) $(INCLUDES) $(PROBLEM_54_INC) $< -o $@

clean:
	@echo "Removing --> all object files"
	@rm -rf $(OBJ_PATH)/* $(TARGET)
