#include <SDL.h>
#include"Game.h"


const int WINDOW_X = 640;
const int WINDOW_Y = 480;

Game* g_game = nullptr;

  int main(int argc, char* args[])
  {
  g_game = new Game();
  g_game->init("Setting up SDL 10/22",100,100,WINDOW_X,WINDOW_Y,0);

  while(g_game->running()){
    g_game->handleEvents();
    g_game->update();
    g_game->render();
    SDL_Delay(100);
  }
  g_game->clean();
  return 0;

}
