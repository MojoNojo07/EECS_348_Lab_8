EXEC1 = task1
EXEC2 = task2

all: $(EXEC1) $(EXEC2)

$(EXEC1): Task1.o
	gcc Task1.o -o $(EXEC1).exe

$(EXEC2): Task2.o
	gcc Task2.o -o $(EXEC2).exe

Task1.o: Task1.c
	gcc -c Task1.c

Task2.o: Task2.c
	gcc -c Task2.c

clean:
	rm -rf *.o
	rm -rf *.exe