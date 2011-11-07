CC = gcc
CFLAGS = -Wall -g -fPIC -shared
INCLUDES = -I../include -I../../black/include $(shell sdl-config --cflags)
LDFLAGS =
LIBS =

SRCS = \
	kern.c \
	wrap.c

OBJS = $(SRCS:.c=.o)

MAIN = libblacklua.so

.SUFFIXES: .c .o .i

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

.PHONY: depend clean

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LDFLAGS) $(LIBS)

clean:
	rm -f *.o *~ $(MAIN)

depend: $(SRCS)
	$(CC) -M $(CFLAGS) $(INCLUDES) $^ > $@

include depend
