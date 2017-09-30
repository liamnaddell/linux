PROGNAME=story
CFLAGS=-Wall -g
OBJS=main
all: compile

compile: $(OBJS).o
	gcc $^ -o $(PROGNAME)
	rm *.o
		
$(OBJS).o: $(OBJS).c
	gcc -c $(CFLAGS) $^
