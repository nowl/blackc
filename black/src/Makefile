CC = gcc
CFLAGS = -Wall -g -fPIC -shared
INCLUDES = -I../include $(shell sdl-config --cflags)
LDFLAGS =
LIBS =

SRCS = \
	astar.c \
	game_manager.c \
	image_render_set.c \
	sdl_font.c \
	collide.c \
	game_object.c \
	mainloop.c \
	sdl_graphics_context.c \
	event_queue.c \
	game_state.c \
	sdl_sound.c \
	font.c \
	image_loader.c \
	message.c \
	utils.c

OBJS = $(SRCS:.c=.o)

MAIN = libblack.so

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
