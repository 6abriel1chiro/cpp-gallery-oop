#pragma once
#include "ArrayGenerico.h"
#include "Obra.h"
#define MAX_OBRAS 100
class SingletonObra
{

	ArrayGenerico<Obra> obras;
	SingletonObra();



public:
	static SingletonObra& getInstancia();
	~SingletonObra();

	ArrayGenerico<Obra>& getObras();


};

