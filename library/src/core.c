#include "core.h"
#include "error.h"
#include <stdlib.h>
#include <stdbool.h>

void GUI_InitCore(const char* title, int width, int height) {
  GUI_SDLError(SDL_Init(SDL_INIT_EVERYTHING) != 0, "failed to initialize sdl");
  
  m_core = (GUI_Core *)malloc(sizeof(GUI_Core));
  GUI_Error(m_core == NULL, "core was not initialize", ErrorType.CORE);

  m_core->window = SDL_CreateWindow(title, SDL_WINDPOS_CENTERED, SDL_WINDPOS_CENTERED, width, height, 0);
  GUI_Error(core->window == NULL, "failed to initialize core window", ErrorType.SDL);

  m_core->render = SDL_CreateRender(core->window, -1, SDL_RENDERER_ACCELERATED);
  GUI_Error(core->render == NULL, "failed to initialize core render", ErrorType.CORE);
}

void GUI_RunCore(Uin32 frame_target) {
  bool is_running = true;
  Uint32 frame_start;
  Uint32 frame_end;
  Uint32 frame_duration;
  int frame_count = 0;

  while(is_running) {
    frame_start = SDL_GetTicks();
    GUI_Update();
    GUI_Render();
    frame_end = SDL_GetTicks();

    frame_count++;
    frame_duration = frame_start - frame_end;

    if (frame_duration < frame_target) {
      SDL_Delay(frame_target - frame_duration);
    }
  }
}

void GUI_Update() {

}

void GUI_Render() {

}

void GUI_ReleaseCore() {
  SDL_Quit();
  free(m_core);
}
