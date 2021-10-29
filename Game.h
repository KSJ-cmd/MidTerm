#ifndef __GAME_H__
#define __GAME_H__

#include"SDL.h"

class Game{
public:
  Game(){}
  ~Game(){}

  bool init(const char* title, int xpos,int ypos, int height, int width,int flags);
  void render();
  void update();
  bool running();
  void handleEvents();
  void clean();

  private:
  SDL_Window* m_pWindow;
  SDL_Renderer* m_pRenderer;
  bool m_bRunning;
};


#endif