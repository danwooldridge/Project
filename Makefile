
output: test.o Dice.o
	g++ test.o Dice.o -o run

test.o: test.cpp
	g++ -c test.cpp

Dice.o: Dice.cpp
	g++ -c Dice.cpp

clean:
	rm *.o run