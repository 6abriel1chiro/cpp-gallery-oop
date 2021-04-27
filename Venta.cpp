#include "Venta.h"

Venta::Venta(int codVenta, long monto, long fecha, Obra* obra, Cliente* cliente)
{
	this->codVenta = codVenta;
	this->monto = monto;
	this->fecha = fecha;
	this->obra = obra;
	this->cliente = cliente;
}

Venta::~Venta()
{
}

void Venta::mostrar()
{
	cout << "venta : " << codVenta << endl;
	cout << "monto: "<< monto << endl;
	cout << "fecha : " << fecha << endl;
	cout << "Obra : "  << endl;
	obra->mostrar();
	cout << "comprador : " << endl;
	cliente->mostrar();
}

void Venta::mostrarT(Venta* v)
{
	v->mostrar();
}
