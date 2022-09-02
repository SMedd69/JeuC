#include <stdlib.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include "init.h"

void init()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
        exit(1);
    }
    jeu.gWindow = SDL_CreateWindow(" Jeu Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1824, 768, SDL_WINDOW_SHOWN);
    if(jeu.gWindow == NULL)
    {
        printf("Erreur creation fenetre : %s\n", SDL_GetError());
        exit(1);
    }
    jeu.gRenderer = SDL_CreateRenderer(jeu.gWindow, -1, SDL_RENDERER_ACCELERATED);
    if(jeu.gRenderer == NULL)
    {
        printf(" Erreur de creation du renderer ; %s\n", SDL_GetError);
        exit(1);
    }
}

void fermeture()
{
    if(jeu.gRenderer != NULL){
        SDL_DestroyRenderer(jeu.gRenderer);
    }
    if(jeu.gWindow != NULL){
        SDL_DestroyWindow(jeu.gWindow);
    }
    SDL_Quit();
}