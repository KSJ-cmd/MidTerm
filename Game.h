#ifndef __GAME_H__
#define __GAME_H__

#include<vector>
#include"SDL.h"
#include"SDL_image.h"
#include"GameObject.h"
#include"Player.h"
#include"TextureManager.h"

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

  std::vector<GameObject*> m_gameObjects;
  
  
  int m_currentFrame;

};


#endif