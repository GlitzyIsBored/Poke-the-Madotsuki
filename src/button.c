#include "raylib.h"
#include "button.h" 

Button button;

void setButton(void) {
    button.madoDAME = LoadTexture(Mado);
   // button.madoMURI = LoadTexture(Mado2);
   // button.Pinkish = LoadTexture(Outline); // I need to com e up with a better naming scheme lol
}

void drawButton(void) {
    DrawTexture(button.madoDAME, 0, 0, WHITE);
}

void unloadButton(void) {
    UnloadTexture(button.madoDAME);
}