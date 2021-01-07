all: compile link

1:
	clean test

test: compile link run

compile:
	g++ -c *cpp

link:
	g++ *.o -o main -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

clean:
	del *.o

run:
	main.exe

