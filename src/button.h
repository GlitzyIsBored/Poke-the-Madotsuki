#ifndef BUTTON_H
#define BUTTON_H

#define Mado "../images/DAME.png"
#define Mado2 "../images/MURI.png"
#define Outline "../images/PinkHalo.png"

#define Voice1 "../images/DAME.png"
#define Voice2 "../audios/MURI.WAV"

typedef struct Button {
    Texture2D madoDAME, madoMURI, Pinkish;
    Sound DAME, MURI;
    
    Rectangle btnBounds;
    Vector2 mousePos;
    bool btnAction;
    int btnState;
    float btnHeight;
} Button;

extern Button buttonState;
extern Sound DAMEMURI;

#ifdef __cplusplus
extern "C" {
    #endif
#ifdef __cplusplus
}
#endif

#endif