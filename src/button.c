#include "raylib.h"
#include "button.h" 

Button button;

void setButton(void) {
    button.madoDAME = LoadTexture(Mado);
    button.madoMURI = LoadTexture(Mado2);
    button.Pinkish = LoadTexture(Outline); // I need to com e up with a better naming scheme lol
    
    button.DAME = LoadSound(Voice1);
    button.MURI = LoadSound(Voice2);
    
    button.btnState = 0;
    button.btnAction = false;
    button.mousePos = (Vector2){ 0.0f, 0.0f };
    button.btnHeight = (float)button.madoDAME.height / 3;
    button.btnBounds = (Rectangle){ 300 / 2.0f - button.madoDAME.width/2.0f, 300 / 2.0f - (float)button.madoDAME.height / 3 /2.0f, (float)button.madoDAME.width, button.btnHeight };
}

void drawButton(void) {
    button.mousePos = GetMousePosition();
    button.btnAction = false;
    int random = rand() % 2;
    
    if (CheckCollisionPointRec(button.mousePos, button.btnBounds)) {
        DrawTexture(button.Pinkish, 0, 0, WHITE);
        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) button.btnState = 2;
        else button.btnState = 1;
        
        if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) button.btnAction = true;
    }
    else button.btnState = 0;
    DrawTexture(button.madoDAME, 0, 0, WHITE);
    
    if (button.btnState == 2) {
        DrawTexture(button.madoMURI, 0, 0, WHITE);
    }
    
    if (button.btnAction) {
        (random == 1 ? PlaySound(button.DAME) : PlaySound(button.MURI));
    }
}

void unloadButton(void) {
    UnloadTexture(button.madoDAME);
    UnloadTexture(button.madoMURI);
    UnloadTexture(button.Pinkish);
    UnloadSound(button.DAME);
}