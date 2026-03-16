#define SCREEN_HEIGHT 300
#define SCREEN_WIDTH 300

#include <raylib.h>
#include "button.c"

Button button;

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Omg Mado");
    
    setButton();
    
    SetTargetFPS(30);
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        
            ClearBackground(RAYWHITE);
            DrawText("Omgsss", 0, 0, 20, RED);
            drawButton();
            
        EndDrawing();
    }
    unloadButton();
    CloseWindow();
    
    return 0;
}