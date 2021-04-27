#pragma once
#include <iostream>
using namespace std;
class Cliente
{
private:

	string nombre;
	int ci;

public:
	Cliente(string nombre, int ci);
	Cliente(int ci);
	~Cliente();
	void mostrar();
	static void mostrarT(Cliente* p);


	bool operator==(Cliente* p);


	static bool compNombreoAsc(Cliente* p1, Cliente* p2);
	static bool compNombreDesc(Cliente* p1, Cliente* p2);
	static bool compCiAsc(Cliente* p1, Cliente* p2);
	static bool compCiDesc(Cliente* p1, Cliente* p2);



};

