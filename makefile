main: main.o Node.o List.o
	g++ -o main main.o Node.o List.o

main.o: main.cpp Node.h
List.o: List.h Node.h
Node.o: Node.h
clean:
	rm -f *.o

