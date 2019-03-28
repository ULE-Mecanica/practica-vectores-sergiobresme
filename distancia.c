#include <stdio.h>
#include <math.h>
#define TAM 2
void cargar (int v[2]);  //porque el vector tiene 2 posiciones
float distancia (int v1[2], int v2[2]);
int main ()
{
	int v1[2]; int v2[2];
	cargar (v1);
	cargar (v2);
	float de= distancia(v1,v2);
	printf("La distancia es %f", de);
	return 0;
}
void carga (int v[2])
{
int i;
for(i=0;i<TAM;i++)
	{
	scanf("%d", &v[2]);
	}
}
float distancia(int v1[2], int v2[2])
		{
		int resultado;
		int resta1;
		int resta2;
		resta1=v2[0]-v1[0];
		resta2=v2[1]-v1[1];
		resultado=sqrt(pow(resta1,2)+pow(resta2,2));
		return resultado;
		}






















