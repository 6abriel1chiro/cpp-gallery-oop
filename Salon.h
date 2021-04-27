#pragma once
#include "Exposicion.h"
class Salon
{

private:


	//TODO
	//EXPOSICIONES
	ArrayGenerico<Exposicion>* expos;
	int codSalon;
	int tam;



public:

	Salon(int codSalon, int tam);
	Salon(int codSalon);
	~Salon();

	ArrayGenerico<Exposicion>* getExpos();
	void mostrar();
	static void mostrarT(Salon* s);


	bool operator==(Salon* p);


	static bool compCodAsc(Salon* s1, Salon* s2);
	static bool compCodDesc(Salon* s1, Salon* s2);











};

