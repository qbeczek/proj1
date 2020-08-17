all: shifter.exe
	@echo done

shifter.exe: main.o shifter.o file_manager.o
	gcc -o shifter.exe -Wall main.o shifter.o file_manager.o 

main.o: main.c shifter.o file_manager.o
	gcc -c -Wall main.c 

shifter.o: shifter.c
	gcc -c -Wall shifter.c

file_manager.o: file_manager.c
	gcc -c -Wall file_manager.c

clean:
	@echo project clean
	del shifter.o main.o shifter.exe file_manager.o
	@echo succes