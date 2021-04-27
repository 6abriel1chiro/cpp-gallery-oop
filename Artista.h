#pragma once
#include "ArrayGenerico.h"
#include "SingletonObra.h"
#include <iostream>
using namespace std;

class Artista
{

private:
	string nombre;
	string tecnica;
	ArrayGenerico<Obra> obras;
	int ganancias;


public:
	Artista(string nombre, string tecnica);
	Artista(string nombre);
	~Artista();
	void mostrar();
	void registrarObra(Obra* o);
	int getGanancias();
	void setGanancias(int monto);

	static void mostrarT(Artista* p);


	bool operator==(Artista* p);


	static bool compNombreAsc(Artista* a1, Artista* a2);
	static bool compNombreDesc(Artista* a1, Artista* a2);
	static bool compTecnicaAsc(Artista* a1, Artista* a2);
	static bool compTecnicaDesc(Artista* a1, Artista* a2);



};

