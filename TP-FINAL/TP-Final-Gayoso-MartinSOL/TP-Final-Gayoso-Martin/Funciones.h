#include "cPacientes.h" 
#include "cNoQuirurgicas.h"
#include "cQuirurgicas.h"
#include "cMedicos.h"
float randf(float a, float b);
void Switch(cPacientes pac,unsigned int k,cNoQuirurgicas CQN );
Alergias switch1(unsigned int opcion);
Miembros switch2(unsigned int op);
cProtesis* ProtesisNecesitada(unsigned int p);
cPacientes* crearPacientes(cProtesis* prot);
cMedicos* crearMedicos();
cFechass* crearFechas();

