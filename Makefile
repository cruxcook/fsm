OBJS = main.o state_manager.o
CC = g++

FSM: $(OBJS)
	g++ -o FSM $(OBJS)
	rm -f $(OBJS)	# Remove *.o files

main.o:	
	$(CC) -c ./main.cpp

state_manager.o:	
	$(CC) -c ./src/state_manager.cpp

clean:	
	rm -f core FSM $(OBJS)
