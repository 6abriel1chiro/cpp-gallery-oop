#include "Salon.h"

Salon::Salon(int codSalon, int tam)
{

	this->codSalon = codSalon;
	this->tam = tam;
	expos = new ArrayGenerico<Exposicion>(tam);

}

Salon::Salon(int codSalon)
{
	this->codSalon = codSalon;


}

Salon::~Salon()
{


}

ArrayGenerico<Exposicion>* Salon::getExpos()
{
	return expos;
}

void Salon::mostrar()
{
	cout << "salon : " << codSalon << endl;
	cout << "capavidad max  : " << tam << endl;
}

void Salon::mostrarT(Salon* s)
{
	s->mostrar();
}

bool Salon::operator==(Salon* p)
{
	return codSalon==p->codSalon;
}

bool Salon::compCodAsc(Salon* s1, Salon* s2)
{
	return s1->codSalon > s2->codSalon;
}

bool Salon::compCodDesc(Salon* s1, Salon* s2)
{
	return s1->codSalon < s2->codSalon;
}
