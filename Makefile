
output: main.o Dice.o
	g++ main.o Dice.o -o run

main.o: main.cpp
	g++ -c main.cpp

Dice.o: Dice.cpp
	g++ -c Dice.cpp

clean:
	rm *.o run