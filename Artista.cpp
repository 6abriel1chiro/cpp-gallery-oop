#include "Artista.h"

Artista::Artista(string nombre, string tecnica):obras(MAX_OBRAS)
{
	this->nombre = nombre;
	this->tecnica = tecnica;
	ganancias = 0;

}

Artista::Artista(string nombre) :obras(MAX_OBRAS)
{
	this->nombre = nombre;

}

Artista::~Artista()
{
}

void Artista::mostrar()
{
	cout << "nombre artista : " << nombre << endl;
	cout << "tecnica artistica : " << tecnica << endl;
	cout << "obras: " << endl;
	obras.mostrar(Obra::mostrarT);
	cout << "ganancias : " <<ganancias<< endl;

}

void Artista::registrarObra(Obra* o)
{
	obras.registrar(o);
}



int Artista::getGanancias()
{
	return ganancias;
}

void Artista::setGanancias(int monto)
{
	ganancias = ganancias + monto;
}

void Artista::mostrarT(Artista* a)
{
	a->mostrar();
}

bool Artista::operator==(Artista* a)
{
	return nombre == a->nombre;
}

bool Artista::compNombreAsc(Artista* a1, Artista* a2)
{
	return a1->nombre>a2->nombre;
}

bool Artista::compNombreDesc(Artista* a1, Artista* a2)
{
	return a1->nombre < a2->nombre;
}

bool Artista::compTecnicaAsc(Artista* a1, Artista* a2)
{
	return a1->tecnica > a2->tecnica;
}

bool Artista::compTecnicaDesc(Artista* a1, Artista* a2)
{
	return a1->tecnica < a2->tecnica;
}
