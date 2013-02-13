#include "SDL/SDL.h"
#include "SDL/SDL_gfxPrimitives.h"

class Star
{
    public:
    Star(float x=0, float y=0)
    {
        pos_x = x;
        pos_y = y;
    }

    float pos_x;
    float pos_y;
};

class Starfield
{
    public:
    Starfield(SDL_Surface *screen);
    ~Starfield();
    void SetStars(int star_anzahl, int xw, int yw, Uint32 color, float xspeed, float yspeed);
    void DrawStars(float frame_time,int x, int y);

    private:
    SDL_Surface *Screen;
    Uint16 StarAnzahl;
    Uint32 StarColor;
    Star **StarBuffer;
    float XSpeed;
    float YSpeed;

    short int XW,YW;
};
