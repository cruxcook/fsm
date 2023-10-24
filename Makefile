OBJS = main.o
CC = g++

FSM: $(OBJS)
	g++ -o FSM $(OBJS)
	rm -f $(OBJS)	# Remove *.o files

main.o:	
	$(CC) -c ./main.cpp

clean:	
	rm -f core FSM $(OBJS)
