#include <SDL2/SDL.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include "types.hpp"
// #include "graph/GraphAbsolute.hpp"
#include "screen/SDLScreen.hpp"
#include "screen/Screen.hpp"
#include "graph/GraphValues2D.hpp"
#include "drawable/Graph2DDrawer.hpp"


// void testGraphAbsolute(){
//     std::vector<AbsolutePoint> v;

//     GraphAbsolute g;
//     g.readGraph(v.begin());
//     // g.test();
 
//     for (auto it = v.begin(); it != v.end(); it++){
//         std::cout << *it << std::endl;
//     }
    
// }


// void testSDLScreen() {
//     Screen<SDL_Renderer>* screen = new SDLScreen(100, 100);


//     std::cout << screen->getSurface() << std::endl;
// }

// void testGraph2D(){
//     GraphValues2D graph;

//     std::vector<Point2D> v {{1,1}, {2,2}, {3,3}, {4,4}};
//     std::vector<Point2D> v2;

//     graph.setPoints(v.begin(), v.end());

//     graph.getPoints(std::back_inserter(v2));

//     for (auto it=v2.begin(); it!=v2.end(); it++){
//         std::cout << (*it).x << " " << (*it).y << std::endl;
//     }

// }



int main(int argc, char* argv[]){
    Screen<SDL_Renderer>* screen = new SDLScreen(720, 520);
    Graph2DDrawer* g2d = new Graph2DDrawer(); 


    while (1) {
        screen->clear();
        screen->pollEvents();

        g2d->draw(screen->getSurface());

        screen->display();

        SDL_Delay(15);
    }

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