#include "Obra.h"

Obra::Obra(string titulo, string autor, int precio)
{
	this->titulo = titulo;
	this->autor = autor;
	this->precio = precio;

}

Obra::Obra(string titulo)
{
	this->titulo = titulo;
}

Obra::~Obra()
{


}

void Obra::mostrar()
{
	cout << "titulo: " << titulo << endl;
	cout << "autor: " << autor << endl;
	cout << "precio: " << precio << endl;



}

void Obra::mostrarT(Obra* obra)
{

	obra->mostrar();
}

int Obra::getPrecio()
{
	return precio;
}

bool Obra::operator==(Obra* obra)
{
	return titulo==obra->titulo;
}

string Obra::getTitulo()
{
	return titulo;
}

string Obra::getAutor()
{
	return autor;
}

bool Obra::compAutorAsc(Obra* obra1, Obra* obra2)
{
	return obra1->autor>obra2->autor;
}

bool Obra::compAutorDesc(Obra* obra1, Obra* obra2)
{
	return obra1->autor < obra2->autor;
}

bool Obra::compNombreAsc(Obra* obra1, Obra* obra2)
{
	return obra1->getTitulo() > obra2->getTitulo();

}

bool Obra::compNombreDesc(Obra* obra1, Obra* obra2)
{
	return obra1->getTitulo() < obra2->getTitulo();

}
