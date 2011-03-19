lib_LTLIBRARIES = libblack.la

libblack_la_SOURCES = \
	astar.c \
	collide.c \
	event_queue.c \
	font.c \
	game_manager.c \
	game_object.c \
	game_state.c \
	image_loader.c \
	image_render_set.c \
	mainloop.c \
	message.c \
	sdl_font.c \
	sdl_graphics_context.c \
	sdl_sound.c \
	utils.c

libblack_la_CFLAGS = -I../include @SDL_CFLAGS@
libblack_la_LDFLAGS = @SDL_LIBS@ @SDL_MIXER_LIBS@ @SDL_IMAGE_LIBS@ @SDL_TTF_LIBS@
