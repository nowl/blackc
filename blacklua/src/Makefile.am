lib_LTLIBRARIES = libblacklua.la

libblacklua_la_SOURCES = \
	kern.c \
	wrap.c

libblacklua_la_CFLAGS = -I../include -I../../black/include @SDL_CFLAGS@
libblacklua_la_LDFLAGS = @SDL_LIBS@ @SDL_MIXER_LIBS@ @SDL_IMAGE_LIBS@ @SDL_TTF_LIBS@
