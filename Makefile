LIBS=
CFLAGS= -lstdc++
BINARIES=ril

ril: main.cpp
	$(CC) $(CFLAGS) -o $(BINARIES) main.cpp $(LIBS)

clean:
	rm -f $(BINARIES) *.o

