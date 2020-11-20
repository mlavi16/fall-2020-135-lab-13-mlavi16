OBJECTS = recursion.h
HFILES = recursion.cpp

main: main.o ${OBJECTS}
	g++ -o main main.o ${OBJECTS}

tests: tests.o ${OBJECTS}
	g++ -o tests tests.o ${OBJECTS}

main.o: main.cpp ${HFILES}

tests.o: tests.cpp doctest.h ${HFILES}

recursion.o: recursion.cpp recursion.h

clean:
	rm -f main.o tests.o ${OBJECTS}
	rm -f main tests

help:
	@echo  make main : make executable named main
	@echo make tests : make test suite named tests