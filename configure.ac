AC_INIT([blackc], [1.0])
AM_INIT_AUTOMAKE
AM_PROG_LIBTOOL
AC_PROG_CC

dnl Check for SDL
SDL_VERSION=1.2.0
AM_PATH_SDL($SDL_VERSION,
            :,
            AC_MSG_ERROR([*** SDL version $SDL_VERSION not found!])
)

dnl Check for SDL_mixer
SDL_MIXER_LIBS=-lSDL_mixer
AC_CHECK_LIB(SDL_mixer, Mix_Init, AC_SUBST(SDL_MIXER_LIBS), AC_MSG_ERROR([*** SDL_mixer library not found!]))

dnl Check for SDL_image
SDL_IMAGE_LIBS=-lSDL_image
AC_CHECK_LIB(SDL_image, IMG_Init, AC_SUBST(SDL_IMAGE_LIBS), AC_MSG_ERROR([*** SDL_image library not found!]))

dnl Check for SDL_ttf
SDL_TTF_LIBS=-lSDL_ttf
AC_CHECK_LIB(SDL_ttf, TTF_Init, AC_SUBST(SDL_TTF_LIBS), AC_MSG_ERROR([*** SDL_ttf library not found!]))

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([black/src/mainloop.c])
AC_CONFIG_FILES([Makefile
                 black/src/Makefile
                 blacklua/src/Makefile])
AC_OUTPUT
