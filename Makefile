CC=gcc

bclear:
	rm -rf bin

prepare:
	mkdir bin/

compile: prepare
	gcc src/main.c -Wall -o bin/runnable.out

run:
	./bin/runnable.out

all: bclear compile run