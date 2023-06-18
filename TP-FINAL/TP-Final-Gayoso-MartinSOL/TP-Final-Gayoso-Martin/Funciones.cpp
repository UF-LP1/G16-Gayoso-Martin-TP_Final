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
