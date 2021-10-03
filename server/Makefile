LIBS := math util
HDRS := $(addprefix -I../, $(LIBS))

SRCS := $(wildcard ../math/*.cpp ../util/*.cpp)
OBJS := $(patsubst %.cpp,%.o,$(SRCS))

#all:
#	echo $(HDRS)
#	echo $(SRCS)
#	echo $(OBJS)


all : $(LIBS) main.out

main.out: main.cpp
	g++ $< $(OBJS) $(HDRS) -o $@
	@echo "> make $@ done"

$(LIBS):
	make -C ../$@
	@echo "> make $@ done"

.PHONY:clean
clean:
	@echo "> Cleaning"
	rm -rf main.out $(OBJS)




# origin command: 
# g++ main.cpp ../util/str.o ../math/hmath.o ../math/math.o -o main.out -I ../math -I ../util 
# 要点：必须使用.PHONY作为主目标，如果main.out 作为主目标,每次make都重新编译
