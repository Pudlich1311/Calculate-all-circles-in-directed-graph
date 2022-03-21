kompilator=g++
standard=-std=c++20
optymalizacja=-O3
errors=-pedantic-errors

# debug=-g
debug=

__ : main
	./main
	./main -g text.txt -c output 

#	valgrind --leak-check=yes ./main

Cycl.o : Cycl.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
Cycle.o : Cycle.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
functions.o : functions.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^
Graph.o : Graph.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -c -o $@ $^

main : Cycl.o Cycle.o functions.o Graph.o 
	$(kompilator) $(standard) $(debug) $(optymalizacja) $(errors) -o $@ $^

