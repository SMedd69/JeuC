#include <stdlib.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include "init.h"

int main(int argc, char *argv[])
{
    init();
    atexit(fermeture);
    while(1)
    {

    }
    return 0;
}