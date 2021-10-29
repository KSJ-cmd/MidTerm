#include <SDL.h>

SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;
bool g_bRunning = false;

const int WINDOW_X = 640;
const int WINDOW_Y = 480;

int main(int argc, char* args[])
{

   if (Init("Setting up SDL 10/22",
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            WINDOW_X, WINDOW_Y, SDL_WINDOW_SHOWN)) {
      g_bRunning = true;
  }else{
    return 1;
  }
        
    
    while(g_bRunning){
      render();
    }

    
    SDL_Delay(5000);
    SDL_Quit();

    return 0;
}

bool Init(const char* title, int xpos, int ypos, int height, int width, int flags){
  if(SDL_Init(SDL_INIT_EVERYTHING)>=0){
    g_pWindow = SDL_CreateWindow(title,xpos,ypos,height,width,flags);

    if(g_pWindow != 0){
      g_pRenderer = SDL_CreateRenderer(g_pWindow,-1,0);
    }
  }
  else{
    return false;
  }

  SDL_SetRenderDrawColor(g_pRenderer,0,0,0,255);

  return true;
}

void render(){
  SDL_RenderClear(g_pRenderer);
  SDL_RenderPresent(g_pRenderer);
}