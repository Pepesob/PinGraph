#include <SDL2/SDL.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include "types.hpp"
#include "graph/GraphAbsolute.hpp"


void testGraphAbsolute(){
    std::vector<AbsolutePoint> v;

    GraphAbsolute g;
    g.readGraph(v.begin());
    // g.test();
 
    for (auto it = v.begin(); it != v.end(); it++){
        std::cout << *it << std::endl;
    }
    
}


int main(int argc, char* argv[]){
    testGraphAbsolute();
  
}






// int main(int argc, char *argv[])
// {

//   hello();
//   SDL_Init(SDL_INIT_VIDEO);

//   SDL_Window *window = SDL_CreateWindow(
//     "SDL2Test",
//     SDL_WINDOWPOS_UNDEFINED,
//     SDL_WINDOWPOS_UNDEFINED,
//     640,
//     480,
//     0
//   );

//   SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
//   SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
//   SDL_RenderClear(renderer);
//   SDL_RenderPresent(renderer);

//   SDL_Delay(3000);

//   SDL_DestroyWindow(window);
//   SDL_Quit();

//   return 0;
// }