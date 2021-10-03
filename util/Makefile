MODULE := $(notdir $(shell pwd))
SRC := $(wildcard *.cpp)
OBJS := $(SRC:.cpp=.o)

all:$(OBJS)
	@echo "> Compile $(MODULE)..."

%.o : %.cpp
	g++ -c $< -o $@

.PHONY : clean
clean:
	rm -rf $(OBJS)
