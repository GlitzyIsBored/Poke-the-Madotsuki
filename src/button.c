#include "raylib.h"
#include "button.h" 

Button button;

void setButton(void) {
    button.madoDAME = LoadTexture(Mado);
   // button.madoMURI = LoadTexture(Mado2);
    button.Pinkish = LoadTexture(Outline); // I need to com e up with a better naming scheme lol
    button.btnState = 0;
    button.btnAction = false;
    button.mousePos = (Vector2){ 0.0f, 0.0f };
    button.btnHeight = (float)button.madoDAME.height / 3;
    button.btnBounds = (Rectangle){ 300 / 2.0f - button.madoDAME.width/2.0f, 300 / 2.0f - (float)button.madoDAME.height / 3 /2.0f, (float)button.madoDAME.width, button.btnHeight };
}

void drawButton(void) {
    button.mousePos = GetMousePosition();
    
    if (CheckCollisionPointRec(button.mousePos, button.btnBounds)) {
        DrawTexture(button.Pinkish, 0, 0, WHITE);      
    }
    DrawTexture(button.madoDAME, 0, 0, WHITE);
}

void unloadButton(void) {
    UnloadTexture(button.madoDAME);
    UnloadTexture(button.Pinkish);
}