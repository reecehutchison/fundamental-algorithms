all:
	gcc ./src/main.c -o ./build/main_program 

run: all 
	./build/main_program

clean: 
	rm ./build/main_program
