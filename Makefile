LIBS=
CFLAGS= -lstdc++
BINARIES=ril

fizzbuzz: main.c
	$(CC) $(CFLAGS) -o $(BINARIES) main.cpp $(LIBS)

run:
	$(CC) $(CFLAGS) -o $(BINARIES) main.cpp $(LIBS)
	./$(BINARIES)

clean:
	rm -f $(BINARIES) *.o

