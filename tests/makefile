SOURCES := $(wildcard ./*.cpp)
OBJECTS := $(patsubst ./%.cpp, ./%.o, $(SOURCES))
DEPENDS := $(patsubst ./%.cpp, ./%.dep, $(SOURCES))
LIBS := ./list.o ./node.o
INCLUDES := -I./../src

./test : $(OBJECTS) $(LIBS)
	g++ -std=c++11 $^ -o $@
	@./test > ../test_results.txt
	   
./%.o : ./%.cpp 
	@echo $(INCLUDES)
	@mkdir -p ./obj
	g++ -std=c++11 -c $< $(INCLUDES) -o $@

./list.o : ../src/list.cpp
	g++ -std=c++11 -c $< $(INCLUDES) -o $@

./node.o : ../src/node.cpp
	g++ -std=c++11 -c $< $(INCLUDES) -o $@

./%.dep : ./%.cpp
	@g++ -MM $< -MT "$@ $(subst %.dep, %.o, $@)" -o $@ $(INCLUDES)

./list.dep : ../src/list.cpp
	 @g++ -MM $< -MT "$@ $(subst %.dep, %.o, $@)" -o $@ $(INCLUDES)

./node.dep : ../src/node.cpp
	 @g++ -MM $< -MT "$@ $(subst %.dep, %.o, $@)" -o $@ $(INCLUDES)

-include $(DEPENDS)

.PHONY : clean
clean :
	@echo "cleaning up"
	@rm -rf  *.o *.dep test
