#include "Funciones.h"

float randf(float a, float b)
{
	float Var = float(rand() % int((b - a) * 100 + 1)) / 100.0f + a;
	return Var;
}

void Switch(cPacientes pac, unsigned int k, cNoQuirurgicas CQN)
{
	//acordarnos de imprimir en el main el pedir la extrmidad que falta, le pasomos un menu con las opciones de extremidades

	while (k < 1 || k>4)
	{
		switch (k)
		{
			//son valores estimativos 
		case 1:
			pac.set_Miembro(Brazo);
			CQN.set_Largo(randf(14.9, 65.9));
			CQN.set_Ancho(randf(12.5, 40.7));
			break;
		case 2:
			pac.set_Miembro(Pierna);
			CQN.set_Largo(randf(15.3, 80.3));
			CQN.set_Ancho(randf(12.5, 40.7));
			break;
		case 3:
			pac.set_Miembro(Mano);
			CQN.set_Largo(randf(5.3, 17.5));
			CQN.set_Ancho(randf(12.5, 40.7));
			break;
		case 4:
			pac.set_Miembro(Pie);
			CQN.set_Largo(randf(5.3, 20.5));
			CQN.set_Ancho(randf(12.5, 40.7));
			break;

		}


	}
}

Alergias switch1( int opcion)
{
	Alergias Al=NOt;   
		switch (opcion)
		{
			 
		case 1:
			Al = Acero;
			break;
		case 2:
			Al = CobaltoyCromo;
			break;
		case 3:
			Al = Titanio;
			break;
		case 4:
			Al = Tantalio;
			break;
		case 5:
			Al = Ceramica;
			break;
		case 6:
			Al = NOt;
			break;
		default:
			Al = NOt;
		}

	return Al;
}

Miembros switch2( int op)
{
	Miembros M=NOHay;
	
		switch (op)
		{

		case 1:
			M=Brazo;
			break;
		case 2:
			M=Pierna;
			break;
		case 3:
			M=Mano;
			break;
		case 4:
			M=Pie;
			break;
		case 5:
			M = NOHay;
			break;
		default:
			M = NOHay;
		}
	return M;
}

cProtesis* ProtesisNecesitada(unsigned int p)
{
	cProtesis* protesis= nullptr;
	cQuirurgicas* cQ = nullptr;
	cNoQuirurgicas* cNQ = nullptr;
	while (p < 1 || p>2)
	{
		switch (p)
		{

		case 1:
			 cQ = dynamic_cast<cQuirurgicas*>(protesis);
			return cQ;

		case 2:
			cNQ = dynamic_cast<cNoQuirurgicas*>(protesis);
			return cNQ;
		}
	}
	return nullptr;
}

cPacientes* crearPacientes(cProtesis *prot)
{
	srand(time(NULL));
		int k= rand() % 6 + 1;
		int randMiembro = rand() % (5 +1);
		string arrayName[5] = { "Camila", "Valentina", "Sol", "Mateo", "Matias" };
		string arrayApp[5] = { "Martin", "Gayoso", "Fiterman", "Picolomini", "Salvi" };
		string arrayId[5] = { "7428", "9732", "2693", "1426", "97639" };
		int posN = rand() % (4 - 0);
		int posA = rand() % (4 - 0);
		int id = rand() % (4 - 0);

		Alergias  Aler=switch1(k);
		Miembros Miemb;
		Miemb = switch2(randMiembro);
		cFechass* fechaN = crearFechas();
		cPacientes *paciente = new cPacientes(arrayId[id], arrayName[posN], arrayApp[posA],*prot,Aler ,Miemb , *fechaN);
		string arrayTEL[5] = { "748438728", "970493432", "269849393", "1494483926", "99437639" };
		int TEL = rand() % (4 - 0);
		paciente->set_Tel(arrayTEL[TEL]);
		return paciente;
	
	
}

cMedicos* crearMedicos()
{
	string arrayName[5] = { "Camila", "Valentina", "Sol", "Mateo", "Matias" };
	string arrayApp[5] = { "Martin", "Gayoso", "Fiterman", "Picolomini", "Salvi" };
	string arrayId[10] = { "7428", "9732", "2693", "1426", "97639", "92462", "87521", "7921", "205456","06563" };// los primeros 5 son para el id y los otros 5 para las matriculas
	int posN = rand() % (4 - 0);
	int posA = rand() % (4 - 0);
	int id = rand() % (4 - 0);
	int mat = rand() % (9 - 5);
	cMedicos* medico1 = new cMedicos(arrayId[id], arrayName[posN], arrayApp[posA]);
	medico1->set_Matricula(arrayId[mat]);

	return medico1;
}

cFechass* crearFechas()
{
	int dia = rand() % (31 - 1);
	int mes = rand() % (12 - 1);
	int anio = rand() % (2023 - 1960);
	if (dia == 29 || dia == 30||  dia == 31)
	{
		while (mes == 2)
		{
			mes = rand() % (12 - 1);
		}
	}
	cFechass* fecha = new cFechass(dia, mes, anio);
	return fecha;
}


	
