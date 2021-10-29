#include <SDL.h>
#include"Game.h"


const int WINDOW_X = 640;
const int WINDOW_Y = 480;
  
int main(int argc, char* args[])
{
  if(Game::Instance()->init("MidTerm",100,100,WINDOW_X,WINDOW_Y,0)){

    while(Game::Instance()->running()){
      Game::Instance()->handleEvents();
      Game::Instance()->update();
      Game::Instance()->render();
      SDL_Delay(20);
    }
  }
  else{
    std::cout<<"game init fail"<<SDL_GetError()<<"\n";
    return -1;
  }
  Game::Instance()->clean();
  return 0;

}
