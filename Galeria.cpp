#include "Galeria.h"



Galeria::Galeria(int cantSalones) : ventas(MAX_VENTAS), clientes(MAX_CLIENTES),artistas(MAX_ARTISTAS)
{
	this->cantSalones = cantSalones;
	salones = new ArrayGenerico<Salon>(cantSalones);
}

Galeria::~Galeria()
{
}

ArrayGenerico<Salon>* Galeria::getSalones()
{
	return salones;
}

ArrayGenerico<Venta>& Galeria::getVentas() 
{
	return ventas;
	// TODO: insert return statement here
}

ArrayGenerico<Cliente>& Galeria::getClientes()
{
	return clientes;
	// TODO: insert return statement here
}

ArrayGenerico<Artista>& Galeria::getArtistas()
{
	// TODO: insert return statement here
	return artistas;
}
