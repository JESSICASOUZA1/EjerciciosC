/*
 ============================================================================
 Name        : ClaseDos_PedirNumeros_Promedio.c
 Author      : jessica
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
  Realizar un programa que solicite cinco números e imprima por pantalla el promedio, el máximo y el mínimo.

*/

#include <stdio.h>

//#include <limits.h>   //Existen constantes que poseen los números más grandes y pequeños que pueden almacenarse
                     //en cada tipo de dato, para poder usar estas constantes deberemos incluir la biblioteca
                    //“limits.h”

int main(void)
{

	setbuf(stdout,NULL);

	int numero;
	float promedio;
	int acumulador = 0;
	int maximo;
	int minimo;
	int i;

	for(i=0; i<5; i++)
	{
		printf("Ingrese numero ");
		scanf("%d",&numero);

		if(i == 0)
		{
			maximo = numero;
			minimo = numero;
		}

		if(numero>maximo)
		{
			maximo = numero;
		}
		if(numero<minimo)
		{
			minimo = numero;
		}

		acumulador = acumulador + numero;
	}

	promedio = acumulador/i;                                //acumulador dividiendo por contador

	printf("El promedio es: %.2f \n",promedio);     //%.2f para mostrar com 2 decimales o usar: %f, da igual
	printf("El numero maximo es: %d \n",maximo);
	printf("El numero minimo es: %d \n",minimo);

	return 0;
}
