CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g

OBJS = lox.o scanner.o token.o

lox: $(OBJS)
	$(CXX) $(CXXFLAGS) -o lox $(OBJS)

lox.o: lox.cc scanner.h token.h token_type.h
scanner.o: scanner.cc scanner.h token.h token_type.h
token.o: token.cpp token.h token_type.h

clean:
	rm -f *.o lox

