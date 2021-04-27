#include "Pintura.h"

Pintura::Pintura(string titulo, string autor, int precio, int alto, int ancho) : Obra(titulo, autor, precio)
{

	this->alto = alto;
	this->ancho = ancho;
}

Pintura::~Pintura()
{
}
