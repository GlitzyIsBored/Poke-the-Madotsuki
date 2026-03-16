#ifndef BUTTON.H
#define BUTTON.H

#define Mado "../images/DAME.png"
#define Mado2 "../images/MURI.png"
#define Outline "../images/PinkHalo.png"

typedef struct Button {
    Texture2D madoDAME, madoMURI, Pinkish
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