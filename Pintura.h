#pragma once
#include "Obra.h"
class Pintura :
    public Obra
{

private:

    int alto;
    int ancho;



public:

    Pintura(string titulo, string autor, int precio, int alto, int ancho);
    ~Pintura();


};

