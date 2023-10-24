OBJS = main.o state_manager.o state.o
CC = g++

#---------------Executable---------------#
FSM: $(OBJS)
	g++ -o FSM $(OBJS)
	rm -f $(OBJS)	# Remove *.o files

#---------------Object Files---------------#
main.o:	
	$(CC) -c ./main.cpp

state_manager.o:
	$(CC) -c ./src/state_manager.cpp

state.o:
	$(CC) -c ./src/state.cpp


#---------------Commands---------------#
clean:	
	rm -f core FSM $(OBJS)

run:
	./FSM

rebuild:
	make clean; make
