main: main.o Node.o List.o IntNode.o OList.o
	g++ -o main main.o Node.o List.o IntNode.o OList.o

main.o: main.cpp Node.h
List.o: List.h Node.h
Node.o: Node.h
OList.o: OList.h
IntNode.o: IntNode.h

clean:
	rm -f *.o

