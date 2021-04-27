#pragma once

#include <iostream>
using namespace std;
class Obra
{
	

protected:
	string titulo;
	string autor;
	int precio;



public:

	Obra(string titulo, string autor, int precio);
	Obra(string titulo);
	~Obra();

	virtual void mostrar();


	static void mostrarT(Obra* obra);

	int getPrecio();

	bool operator==(Obra* obra);
	string getTitulo();
	string getAutor();

	static bool compAutorAsc(Obra* obra1, Obra* obra2);
	static bool compAutorDesc(Obra* obra1, Obra* obra2);
	static bool compNombreAsc(Obra* obra1, Obra* obra2);
	static bool compNombreDesc(Obra* obra1, Obra* obra2);






};

