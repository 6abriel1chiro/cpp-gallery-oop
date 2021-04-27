#pragma once
#include "Obra.h"
class Escultura :
    public Obra
{

private:

    int peso;



public:

    Escultura(string titulo, string autor, int precio, int peso);
    ~Escultura();





};

