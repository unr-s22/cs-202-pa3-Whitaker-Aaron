
driver: main.o Money.o Account.o
	g++ -o pa3 main.o Money.o Account.o

main: main.cpp
	g++ -c main.cpp

Money: Money.cpp
	g++ -c Money.cpp

Account: Account.cpp
	g++ -c Account.cpp
