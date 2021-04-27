#include "Obra.h"
#include "Pintura.h"
#include "Escultura.h"
#include "ArrayGenerico.h"
#include "Cliente.h"
#include "Artista.h"
#include "Galeria.h"
#include "Venta.h"



void testObras() {



	Pintura* grito;
	grito = new Pintura("el grito", "gabriel", 200, 25, 25);
	Pintura* ave;
	ave = new Pintura("un pajaro", "pepe", 200, 25, 25);
	Escultura* hombre;
	hombre = new Escultura("el hombre", "Dios", 500, 50);

	Escultura* mujer;
	mujer = new Escultura("la mujer", "Dios", 500, 50);

	ArrayGenerico<Obra> obras(4);

	obras.registrar(grito);
	obras.registrar(ave);
	obras.registrar(hombre);
	obras.registrar(mujer);
	cout << " ---- - - -- - - -- -- - - --   " << endl;

	//obras.ordenar(Obra::compAutorAsc);
	obras.ordenar(Obra::compNombreAsc);
	obras.mostrar(Obra::mostrarT);




}
void testClienteArtista() {


	Cliente* pepe;
	pepe = new Cliente("pepe", 1);
	Cliente* jose;
	jose = new Cliente("jose", 2);

	Artista* gabriel;
	gabriel = new Artista("1chiro", "realismo sucio");

	Artista* sofia;
	sofia = new Artista("acidLife","surrealismo");




	ArrayGenerico<Artista> artistas(2);
	ArrayGenerico<Cliente> clientes(2);

	artistas.registrar(gabriel);
	artistas.registrar(sofia);


	clientes.registrar(pepe);
	clientes.registrar(jose);

	artistas.ordenar(Artista::compTecnicaAsc);
	artistas.mostrar(Artista::mostrarT);
	cout << " ---- - - -- - - -- -- - - --   " << endl;
	clientes.ordenar(Cliente::compNombreDesc);
	clientes.mostrar(Cliente::mostrarT);

	cout << " ---- - - -- - - -- -- - - --   " << endl;





}

void testSalonesExpos()
{

	SingletonObra::getInstancia().getObras().registrar(new Pintura("grito", "gabriel", 200, 25, 25));
	SingletonObra::getInstancia().getObras().registrar(new Pintura("pajaro", "pepe", 200, 25, 25));
	SingletonObra::getInstancia().getObras().registrar(new Escultura("hombre", "Dios", 500, 50));
	SingletonObra::getInstancia().getObras().registrar(new Escultura("mujer", "Dios", 500, 50));



	Salon* s1;
	Salon* aux;
	s1 = new Salon(1,5);
	aux = new Salon(1);
	Galeria g1(1);
	g1.getSalones()->registrar(s1);
	g1.getSalones()->mostrar(Salon::mostrarT);
	cout << "   - - - - - - - - - - - - - " << endl;
	Exposicion* expo1;
	Exposicion* expo2;
	expo1 = new Exposicion(4,  1,  2020101, 2020103);
	expo2 = new Exposicion(4,  2,  2020401, 2020403);
	g1.getSalones()->buscar(aux)->getExpos()->registrar(expo1);
	g1.getSalones()->buscar(aux)->getExpos()->registrar(expo2);
	Exposicion* expoAux;
	Exposicion* expoAux2;
	expoAux = new Exposicion(1);
	expoAux2 = new Exposicion(2);

	g1.getSalones()->buscar(aux)->getExpos()->buscar(expoAux)->registrar();
	g1.getSalones()->buscar(aux)->getExpos()->buscar(expoAux2)->registrar();
	cout << "---- - -- --  -- - - - - - " << endl;

	g1.getSalones()->buscar(aux)->getExpos()->buscar(expoAux)->mostrar();
	cout << "---- - -- --  -- - - - - - " << endl;
	g1.getSalones()->buscar(aux)->getExpos()->buscar(expoAux2)->mostrar();


	g1.getSalones()->buscar(aux)->getExpos()->buscar(expoAux2)->mostrar();
	g1.getSalones()->buscar(aux)->getExpos()->buscar(expoAux2)->vender();
	g1.getSalones()->buscar(aux)->getExpos()->buscar(expoAux2)->mostrar();











}

void testGanancias()
{

	Galeria g1(1);

	SingletonObra::getInstancia().getObras().registrar(new Pintura("el grito", "gabriel", 200, 25, 25));
	SingletonObra::getInstancia().getObras().registrar(new Pintura("un pajaro", "pepe", 200, 25, 25));
	SingletonObra::getInstancia().getObras().registrar(new Escultura("el hombre", "Dios", 500, 50));
	SingletonObra::getInstancia().getObras().registrar(new Escultura("la mujer", "Dios", 500, 50));

	Obra* obra1;
	Obra* obra2;
	Obra* obra3;
	Obra* obra4;
	obra1 = new Obra("el grito");
	obra2 = new Obra("un pajaro");
	obra3 = new Obra("el hombre");
	obra4 = new Obra("la mujer");




	/// <summary>
	/// ///////////////
	/// </summary>
	Cliente* pepe;
	pepe = new Cliente("pepe", 1);
	Cliente* ita;
	ita = new Cliente("Itamar", 2);

	g1.getClientes().registrar(pepe);
	g1.getClientes().registrar(ita);

		Cliente* aux;
		aux = new Cliente(1);
		Cliente* aux2;
		aux2 = new Cliente(2);





	Venta* v1;
	v1 = new Venta(1, 1000, 20200101, SingletonObra::getInstancia().getObras().buscar(obra1), g1.getClientes().buscar(aux));
	Venta* v2;
	v2 = new Venta(2, 2000, 20200201, SingletonObra::getInstancia().getObras().buscar(obra2), g1.getClientes().buscar(aux2));


	g1.getVentas().registrar(v1);
	g1.getVentas().registrar(v2);
	g1.getVentas().mostrar(Venta::mostrarT);


	SingletonObra::getInstancia().getObras().mostrar(Obra::mostrarT);
cout<<"   - - - - --- - - - - - "<<endl;
cin.get();

	SingletonObra::getInstancia().getObras().quitar(obra1);
	SingletonObra::getInstancia().getObras().mostrar(Obra::mostrarT);





}


void TEST_DEFENSA()
{

		Artista* gabriel;
		Artista* aux;
		gabriel = new Artista("1chiro", "realismo - Acuarela");
		aux = new Artista("1chiro");
		
		/// /////////////////////
	
		Pintura* grito;
		grito = new Pintura("grito", "gabriel", 200, 25, 25);
		Pintura* ave;
		ave = new Pintura("pajaro", "gabriel", 200, 25, 25);
		Escultura* hombre;
		hombre = new Escultura("hombre", "gabriel", 500, 50);

		Escultura* mujer;
		mujer = new Escultura("mujer", "gabriel", 500, 50);

		Escultura* perro;
		perro = new Escultura("perro", "gabriel", 400, 200);

		cout << " ---- - - -- - - -- -- - - --   " << endl;

		///////////////
		Galeria G1(1);
		G1.getArtistas().registrar(gabriel);
		cout << " ARTISTA REGISTRADO    " << endl;

		G1.getArtistas().buscar(aux)->mostrar();

		
		G1.getArtistas().buscar(aux)->registrarObra(grito);
		G1.getArtistas().buscar(aux)->registrarObra(ave);
		G1.getArtistas().buscar(aux)->registrarObra(hombre);
		G1.getArtistas().buscar(aux)->registrarObra(mujer);
		G1.getArtistas().buscar(aux)->registrarObra(perro);


		G1.getArtistas().buscar(aux)->mostrar();
		



		cout << " ---- - - -- - - -- -- - - --   " << endl;

		G1.getArtistas().ordenar(Artista::compTecnicaAsc);
		G1.getArtistas().mostrar(Artista::mostrarT);
	

		cout << " ---- - - -- - - -- -- - - --   " << endl;








}

int main()
{





	//testObras();
	//testClienteArtista();
	//testSalonesExpos();
	//testGanancias();
	// 
	// 
	// 
	//gabriel ichiro balderrama vargas
	TEST_DEFENSA();

}
