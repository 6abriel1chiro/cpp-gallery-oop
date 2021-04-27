#pragma once
#include "Obra.h"
#include "Cliente.h"
class Venta
{

private: 
	int codVenta;
	long monto;
	long fecha;
	Obra* obra;
	Cliente* cliente;


public:
	Venta(int codVenta,long monto,long fecha, Obra* obra, Cliente* cliente);

	~Venta();

	void mostrar();
	static void mostrarT(Venta* v);





};

