main: main.o Node.o List.o IntNode.o OList.o
	g++ -o main main.o Node.o List.o IntNode.o OList.o
tests: tests.o Node.o List.o IntNode.o OList.o doctest.h
	g++ -o tests -g tests.o Node.o List.o IntNode.o OList.o

main.o: main.cpp Node.h List.h OList.h IntNode.h
tests.o: tests.cpp Node.h List.h OList.h IntNode.h
List.o: List.cpp List.h Node.h
Node.o: Node.cpp Node.h
OList.o: OList.cpp OList.h IntNode.h
IntNode.o: IntNode.cpp IntNode.h

clean:
	rm -f *.o

