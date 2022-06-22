OBJS=main.o 
CC=gcc
CFLAGS += -c -Wall -g

main: $(OBJS) 
	$(CC) $^ -o $@

%.o:%.c
	$(CC) $^ $(CFLAGS)  -o $@

clean:
	$(RM) *.o main -r
