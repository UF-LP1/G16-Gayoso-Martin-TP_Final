#include "cHospital.h"
#include "cPacientes.h"
#include "cPersonas.h"
#include "cANPA.h"
#include "Funciones.h"
using namespace std;

int main()
{
	cANPA* ANPA = new cANPA();

	//Creo hospitales y ortopedias y los agrego a las listas del ANPA
	cHospital* Hospital1 = new cHospital("Favaloro", "Av. Belgrano 1746");
	cHospital* Hospital2 = new cHospital("Italiano", "Potosi 4060");
	cHospital* Hospital3 = new cHospital("Aleman", "Av. Pueyrredón 1640");

	ANPA->Agregar_Hosp(*Hospital1);
	ANPA->Agregar_Hosp(*Hospital2);
	ANPA->Agregar_Hosp(*Hospital3);

	cOrtopedia* Ortopedia1 = new cOrtopedia("Frank", "Av.Rivadavia 4380");
	cOrtopedia* Ortopedia2 = new cOrtopedia("9 de julio", "Av.9 de julio 18");
	cOrtopedia* Ortopedia3 = new cOrtopedia("Lacoste", "Av. de Mayo 446");

	ANPA->Agregar_Ortopedias(*Ortopedia1);
	ANPA->Agregar_Ortopedias(*Ortopedia2);
	ANPA->Agregar_Ortopedias(*Ortopedia3);

	//creo fabricantes
	cFabricante* Fabricante1 = new cFabricante("Juan", "Colombres 800");
	cFabricante* Fabricante2 = new cFabricante("Salvador", "Av. Entre rios 3458");
	cFabricante* Fabricante3 = new cFabricante("Alberto", "Av. las heras 3508");
	Fabricante1->set_Nro_Hab(999078);

	//creo protesis y las agrego a las lista de protesis y de stock de cada ortopedia
	cProtesis* protesis1 = new cQuirurgicas(*Fabricante3, cFechass(12, 8, 2022), cFechass(20, 8, 2022));
	cQuirurgicas* CQ1 = dynamic_cast<cQuirurgicas*>(protesis1);
	CQ1->set_Der_Izq(true);
	CQ1->set_Sup_Inf(false);
	CQ1->set_Mat("Tantalio");
	cProtesis* protesis2 = new cQuirurgicas(*Fabricante2, cFechass(6, 4, 2023), cFechass(12, 4, 2023));
	cQuirurgicas* CQ2 = dynamic_cast<cQuirurgicas*>(protesis2);
	CQ2->set_Der_Izq(false);
	CQ2->set_Sup_Inf(false);
	CQ2->set_Mat("Tantalio");
	cProtesis* protesis3 = new cNoQuirurgicas(*Fabricante1, cFechass(10, 7, 2022), cFechass(18, 7, 2022));
	cNoQuirurgicas* CNQ1 = dynamic_cast<cNoQuirurgicas*>(protesis3);
	CNQ1->set_Ancho(23.4);
	CNQ1->set_Largo(60.2);
	CNQ1->set_Radio(11.5);
	CNQ1->set_Der_Izq(true);
	CNQ1->set_Sup_Inf(false);
	cProtesis* protesis4 = new cNoQuirurgicas(*Fabricante3, cFechass(22, 5, 2023), cFechass(30, 5, 2023));
	cNoQuirurgicas* CNQ2 = dynamic_cast<cNoQuirurgicas*>(protesis4);
	CNQ2->set_Ancho(15.3);
	CNQ2->set_Largo(43.2);
	CNQ2->set_Radio(18.5);
	CNQ2->set_Der_Izq(false);
	CNQ2->set_Sup_Inf(false);
	cProtesis* protesis5 = new cQuirurgicas(*Fabricante1, cFechass(15, 9, 2022), cFechass(23, 9, 2022));
	cQuirurgicas* CQ = dynamic_cast<cQuirurgicas*>(protesis5);
	CQ->set_Mat("CobaltoyCromo");
	CQ->set_Der_Izq(false);
	CQ->set_Sup_Inf(true);
	Ortopedia1->agregar_Protesis(*protesis1);
	Ortopedia1->agregar_Protesis(*protesis3);
	Ortopedia2->agregar_Protesis(*protesis2);
	Ortopedia2->agregar_Protesis(*protesis5);
	Ortopedia2->agregar_Protesis(*protesis3);
	Ortopedia3->agregar_Protesis(*protesis4);
	Ortopedia3->agregar_Protesis(*protesis5);
	Ortopedia3->agregar_Protesis(*protesis1);

	Ortopedia3->agregar_Stock(*protesis1);
	Ortopedia3->agregar_Stock(*protesis1);
	Ortopedia3->agregar_Stock(*protesis1);
	Ortopedia3->agregar_Stock(*protesis4);
	Ortopedia3->agregar_Stock(*protesis4);
	Ortopedia2->agregar_Stock(*protesis5);
	Ortopedia2->agregar_Stock(*protesis5);
	Ortopedia2->agregar_Stock(*protesis5);
	Ortopedia2->agregar_Stock(*protesis5);
	Ortopedia1->agregar_Stock(*protesis3);
	Ortopedia1->agregar_Stock(*protesis3);

	//elimino protesis
	*Ortopedia1 - *protesis3;

	//creo medicos y pacientes y los agrego a las listas del Hospital 
	cMedicos* medico1 = crearMedicos();
	cMedicos* medico2 = crearMedicos();
	cMedicos* medico3 = crearMedicos();
	cMedicos* medico4 = crearMedicos(); 
	cMedicos* medico5 = crearMedicos();

	*Hospital1 + *medico1;
	*Hospital1 + *medico2;
	*Hospital2 + *medico3;
	*Hospital3 + *medico4;
	*Hospital3 + *medico5;

	cPacientes* paciente1 = crearPacientes(protesis1);
	cPacientes* paciente2 = crearPacientes(protesis3);
	cPacientes* paciente3 = crearPacientes(protesis5);
	cPacientes* paciente4 = crearPacientes(protesis2);
	cPacientes* paciente5 = crearPacientes(protesis4);
	try
	{
		*Hospital1 + *paciente5;
		*Hospital2 + *paciente1;
		*Hospital2 + *paciente3;
		*Hospital3 + *paciente4;
		*Hospital3 + *paciente2;

	}
	catch (const std::exception & e)
	{
		cout << "Error: " << e.what() << endl;
	}


	//Asignar Protesis
	unsigned int knum= rand() % (4 - 1);
	medico1->AsignarProtesis(*paciente5,knum);
	
	//Paciente va al amapa a buscar su protesis	
		try
		{
			ANPA->BuscarPorOrtopedia(*paciente5);
		}
		catch (const std::exception&e)
		{
			cout << "Error: " << e.what() << endl;

		}

	//Creo Registro
	cRegistro* Registro=new cRegistro(*Hospital1,*medico1,protesis4,*paciente5,cFechass(0,0,0),cFechass(0,0,0));
	//Le ponemos valores en el constructor porque despues en Guardar registro se van a guardar los valore"reales"
	ANPA->Agregar_Registro(*Registro);
	try
	{
		ANPA->Guardar_en_Registro();
	}
	catch (const std::exception&e)
	{
		cout << "Error: " << e.what() << endl;
	}

	//FUNCIONES PARA IMPRIMIR
	medico1->ImprimirM();
	Registro->imprimirR();
	ANPA->Imprimir_Hospitales();
	ANPA->Imprimir_Ortopedias();
	Fabricante1->Imprimir();
	Hospital1->ImprimirH();
	Hospital1->Imprimir_Pac();
	CNQ1->imprimirP();
	Ortopedia1->Imprimir_Prot();
	Ortopedia1->Imprimir_Prot_Stock();
	CQ1->imprimirP();

	delete Hospital1;
	delete Hospital2;
	delete Hospital3;
	delete Ortopedia1;
	delete Ortopedia2;
	delete Ortopedia3;
	delete Fabricante1;
	delete Fabricante2;
	delete Fabricante3;
	delete protesis1;
	delete protesis2;
	delete protesis3;
	delete protesis4;
	delete protesis5;
	delete medico1;
	delete medico2;
	delete medico3;
	delete medico4;
	delete medico5;
	delete paciente1;
	delete paciente2;
	delete paciente3;
	delete paciente4;
	delete paciente5;
	delete ANPA;
	delete Registro;

	return 0;
}