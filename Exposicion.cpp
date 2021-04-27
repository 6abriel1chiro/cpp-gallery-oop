#include "Exposicion.h"

Exposicion::Exposicion(int cantMax,int codExpo,long fechaIncicio, long fechaFin) : obras(MAX_OBRAS)
{
	this->cantMax = cantMax;
	this->codExpo = codExpo;
	this->fechaIncicio = fechaIncicio;
	this->fechaFin = fechaFin;
	ganancias = 0;
}

Exposicion::Exposicion(int codExpo) : obras(MAX_OBRAS)
{
	this->codExpo = codExpo;
}

Exposicion::~Exposicion()
{
}

void Exposicion::mostrar()
{
	cout << "fecha inicio: " << fechaIncicio << endl;
	cout << "fecha fin: " << fechaFin << endl;
	cout << "obras: " << endl;
	obras.mostrar(Obra::mostrarT);
	cout << "ganancias: " <<ganancias<< endl;



}

void Exposicion::mostrarT(Exposicion* e)
{
	e->mostrar();
}

void Exposicion::registrar()
{
	string titulo;
	cout << "ingrese el titulo de una obra a registrar : "; cin >> titulo;
	Obra* obraBuscada;
	obraBuscada = new Obra(titulo);
	Obra* obra = SingletonObra::getInstancia().getObras().buscar(obraBuscada);
	obras.registrar(obra);

}

void Exposicion::vender()
{
	string titulo;
	cout << "ingrese el titulo de una obra a registrar : "; cin >> titulo;
	Obra* obraBuscada;
	obraBuscada = new Obra(titulo);
	Obra* obra = SingletonObra::getInstancia().getObras().buscar(obraBuscada);
	obras.quitar(obra);
	ganancias = ganancias + obra->getPrecio();
}

bool Exposicion::operator==(Exposicion* e)
{
	return codExpo==e->codExpo;
}

bool Exposicion::compCodAsc(Exposicion* e1, Exposicion* e2)
{
	return e1->fechaIncicio > e2->fechaIncicio;;
}

bool Exposicion::compCodDesc(Exposicion* e1, Exposicion* e2)
{
	return e1->fechaIncicio < e2->fechaIncicio;;

}
