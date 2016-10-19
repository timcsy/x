x: x.o
	g++ -o x x.o
x.o: x.cpp
	g++ -c x.cpp
clear:
	rm x.exe *.o