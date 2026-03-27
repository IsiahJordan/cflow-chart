#ifndef CORE_H
#define CORE_H

// OBJECTIVE OF THIS FILE
// 
// core.h and core.c delegates the
// task of managing the life cycle

#include <SDL2/SDL.h>

typedef struct {
  SDL_Window *window;
  SDL_Renderer *render;
} GUI_Core;

static GUI_Core *m_core; // main core where all components reside only once

#endif
