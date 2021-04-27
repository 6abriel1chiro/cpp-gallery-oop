#pragma once
#include "ArrayGenerico.h"
#include "Obra.h"
#include "SingletonObra.h"
class Exposicion
{


private: 

	//TODO
	int codExpo;
	ArrayGenerico<Obra> obras;
	long fechaIncicio;
	long fechaFin;
	long ganancias;
	int cantMax;




public:

	Exposicion(int cantMax,int codExpo,long fechaIncicio, long fechaFin);
	Exposicion(int codExpo);
	~Exposicion();
	void mostrar();
	static void mostrarT(Exposicion* e);

	void registrar();
	void vender();


	bool operator==(Exposicion* e);


	static bool compCodAsc(Exposicion* e1, Exposicion* e2);
	static bool compCodDesc(Exposicion* e1, Exposicion* e2);



};

