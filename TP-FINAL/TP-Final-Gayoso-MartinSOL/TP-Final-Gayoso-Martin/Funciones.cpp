#include "Funciones.h"

float randf(float a, float b)
{
	float Var = float(rand() % int((b - a) * 100 + 1)) / 100.0f + a;
	return Var;
}

void Switch(cPacientes pac, unsigned int k, cNoQuirurgicas CQN)
{

	while (k < 1 || k>4)
	{
		switch(k)
		{
		case 1:
			pac.set_Miembro(Brazo);
			CQN.set_Largo(randf(14.9,65.9));
			CQN.set_Ancho(randf(12.5,40.7 ));
			break;
		case 2:

		
		}

	
}
