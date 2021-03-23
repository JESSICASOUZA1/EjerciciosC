/*
 ============================================================================
 Name        : Ejercicio4_PrimerClase.c
 Author      : jessica
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Escribir un programa que realice las siguientes acciones:

- Solicite al usuario 10 números
- Calcule cuántos son negativos y cuantos son positivos
- Muestre por pantalla la cantidad de negativos y la cantidad de positivos

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	setbuf(stdout,NULL);

	int numeroIngresado;
	int positivo = 0; //contadores
	int negativo = 0;

	int i;

	for(i=0; i<10; i++)
	{

		printf("Ingrese numero ");
	    scanf("%d",&numeroIngresado);

		if(numeroIngresado>0)
		{
			positivo++;
		}
		else if(numeroIngresado<0)
		{
			negativo++;
		}

	}

	printf("La cantidad de numeros positivos es: %d \n",positivo);
	printf("La cantidad de numeros negativos es: %d \n",negativo);

	return 0;
}
