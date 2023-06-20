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

Alergias switch1(unsigned int opcion)
{
	Alergias Al; 
	while (opcion < 1 || opcion>5)
	{
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
		}


	}
	return Al;
}

Miembros switch2(unsigned int op)
{
	Miembros M;
	while (op < 1 || op>4)
	{
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
		}


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
