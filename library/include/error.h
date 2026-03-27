#ifndef ERROR_H
#define ERROR_H

// OBJECTIVE OF THIS FILE
// 
// this is designed for reusable
// error handling

#include <stdbool.h>
#include <SDL2/SDL.h>

typedef enum {
  CORE,
  SDL
} ErrorType;

// this is used to handle errors
// comp: used to determine error
// message: custom message if error occurs
// type: what type of component is being check
void GUI_Error(bool comp, const char* message, ErrorType type);

#endif
