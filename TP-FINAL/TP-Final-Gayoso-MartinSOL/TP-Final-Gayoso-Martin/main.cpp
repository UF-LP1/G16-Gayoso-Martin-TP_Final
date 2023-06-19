#include "cHospital.h"
#include "cPacientes.h"
#include "cPersonas.h"
#include "cANPA.h"
#include "Funciones.h"
using namespace std;

void main()
{
	cANPA* ANPA = new cANPA();

	cHospital* Hospital1 = new cHospital("Favaloro", "Belgrano1200");

	cPacientes* paciente1;
	string tel, nomb, app, ID;
	int dia, mes, anio;
	cFechass* fecha_nac;

	float Radio;
	cout << "Telefono: " << endl;
	cin >> tel;
	cout << "Radio: " << endl;
	cin >> Radio;
	cout << "Alergias: " << endl<<"1:Acero, 2:CobaltoyCromo, 3:Titanio, 4:Tantalio, 5:Ceramica";
	unsigned int Al, prot, Miembro;
	cin >> Al;
	Alergias Ale = switch1(Al);
	cout << "Miembro amputado: " << endl << "1: Brazo, 2:Pierna, 3: Mano, 4:Pie";
	cin >> Miembro;
	Miembros Mie = switch2(Miembro);
	cout << "Nombre: " << endl;
	cin >> nomb;
	cout << "Apellido: " << endl;
	cin >> app;
	cout << "ID" << endl;
	cin >> ID;
	cout << "Dia Fecha Naciemiento: " << endl;
	cin >> dia;
	cout << "Mes Fecha Naciemiento: " << endl;
	cin >> mes;
	cout << "Anio Fecha Naciemiento: " << endl;
	cin >> anio;
	fecha_nac = new cFechass(dia, mes, anio);
	cout << "La protesis es: " << endl<<"1:Quirurjica"<<endl<<"2:No quirurjica"<<endl;
	cin >> prot;

	cFabricante *fabricante=new cFabricante("Juan", "Callao 2.500");
	cProtesis* protesis = nullptr;
	while (prot < 1 || prot>2)
	{
		switch (prot)
		{

		case 1:
			protesis = new cQuirurgicas(*fabricante);
			cQuirurgicas * cQ = dynamic_cast<cQuirurgicas*>(protesis);
			paciente1 = new cPacientes(ID, nomb, app, *cQ , Ale, Mie, fecha_nac);

			break;

		case 2:
			protesis = new cNoQuirurgicas();
			cNoQuirurgicas * cNQ = dynamic_cast<cNoQuirurgicas*>(protesis);
			break;
		}
	}
	
	paciente1->CrearPac(tel, Hospital1->get_Nombre(), Radio);
}