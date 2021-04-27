#pragma once
#define MAX_VENTAS 100
#define MAX_CLIENTES 100
#define MAX_ARTISTAS 100
#include "ArrayGenerico.h"
#include "Salon.h"
#include "Venta.h"
#include "Cliente.h"
#include "Artista.h"


class Galeria
{
private:

	//SALONES
	ArrayGenerico<Salon>* salones;
	ArrayGenerico<Venta> ventas;
	ArrayGenerico<Cliente> clientes;
	ArrayGenerico<Artista> artistas;
	int cantSalones;

public:

	Galeria(int cantSalones);
	~Galeria();
	ArrayGenerico<Salon>* getSalones();
	ArrayGenerico<Venta>& getVentas();
	ArrayGenerico<Cliente>& getClientes();
	ArrayGenerico<Artista>& getArtistas();


};

