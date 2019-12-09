#ifdef __unix__
    #define OS_WINDOWS 0
#elif defined(_WIN32) || defined(WIN32)
    #define OS_WINDOWS 1
#endif

#include <iostream>
#include "hangman_game.h"

int main() {
    Game myGame;
    myGame.play();

    if(OS_WINDOWS) {
        system("PAUSE");
    }
    
    return 0;
}
