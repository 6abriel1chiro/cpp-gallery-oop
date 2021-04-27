#include "Escultura.h"

Escultura::Escultura(string titulo, string autor, int precio, int peso):Obra(titulo, autor,precio)
{

	this->peso = peso;
}

Escultura::~Escultura()
{
}
