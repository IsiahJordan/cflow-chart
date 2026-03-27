#include "error.h"
#include <stdio.h>
#include <stdlib.h>

void GUI_SDLError(bool comp, const char* message){
  if (comp) {
    exit(EXIT_FAILURE);
  }
}

void GUI_Error(bool comp, const char* message, ErrorType type){
  if (comp) {
    switch(type) {
      case ErrorType.CORE:
        fprintf(stderr, "Core failed: %s", message);
        break;
      case ErrorType.SDL:
        fprintf(stderr, "SDL failed: [%s] - [%s]", message, SDL_GetError());
        break;
      default:
        fprintf(stderr, "Execution failed: %s", message);
    }
    exit(EXIT_FAILURE);
  }
}
