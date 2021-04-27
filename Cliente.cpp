#include "Cliente.h"

Cliente::Cliente(string nombre, int ci)
{
	this->nombre = nombre;
	this->ci = ci;
}

Cliente::Cliente(int ci)
{
	this->ci = ci;

}

Cliente::~Cliente()
{
}

void Cliente::mostrar()
{
	cout << "nombre: "<<nombre << endl;
	cout << "ci: "<<ci << endl;
}

void Cliente::mostrarT(Cliente* p)
{
	p->mostrar();
}

bool Cliente::operator==(Cliente* p)
{
	return ci==p->ci;
}

bool Cliente::compNombreoAsc(Cliente* p1, Cliente* p2)
{
	return p1->nombre>p2->nombre;
}

bool Cliente::compNombreDesc(Cliente* p1, Cliente* p2)
{
	return p1->nombre < p2->nombre;
}

bool Cliente::compCiAsc(Cliente* p1, Cliente* p2)
{
	return p1->ci > p2->ci;
}

bool Cliente::compCiDesc(Cliente* p1, Cliente* p2)
{
	return p1->ci < p2->ci;
}
