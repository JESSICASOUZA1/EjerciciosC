/*
 ============================================================================
 Name        : Profesorexplicacion.c
 Author      : jessica
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 pedir dos numeros, sumarlos e imprimir resultado.

 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	setbuf(stdout,NULL); // PONER SIEMPRE, EN WINDOWS , por conta do printf

	int a;
	int b;
	int resultado;

	printf("\nIngrese primero numero: ");
	scanf("%d",&a);

	printf("\nIngrese segundo numero: ");
	scanf("%d",&b);
	resultado=a+b;

	printf("\nEl resultado es: %d \n",resultado);

	system("pause");

	return 0;
}
