/*
Graphics Computer 2018.2
Federal University of Ceará

Team: Leandro Almeida de Carvalho (Leader)
      Letícia Fernandes
      Levi Tavares
      Karen
      Kayron Melo

Professor: Creto Vidal
Work: Build a RayTracer to render a snowman with a image background.
*/

#ifndef _LIGHT_H
#define _LIGHT_H

#include "Vect.h"
#include "Source.h"
#include "Color.h"


//Light is made of vector position and color of the light

class Light: public Source {
    Vect position;
    Color color;

    public:

    //general constructor
    Light ();

    //another instance
    Light (Vect,Color);

    //method functions

    //Gets (using virtual values)
    virtual Vect getLightPosition() {
        return position;
    }
    virtual Color getLightColor() {
        return color;
    }
};

// default position and color
Light::Light () {
    position = Vect(0,0,0);
    color = Color(1,1,1, 0);
}

// not default position and color
Light::Light (Vect p, Color c) {
    position = p;
    color = c;
}

#endif