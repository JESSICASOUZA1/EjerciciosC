/*
 - Limpie la pantalla
- Solicite dos valores numéricos al usuario distintos de cero *
- Asigne a las variables numero1 y numero2 los valores obtenidos
- Realice la resta de dichas variables
- Muestre el resultado por pantalla
- Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor *
- Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero *
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int a;
	int b;
	int resultado;

	do{
	printf("\nIngrese primero numero: ");
	scanf("%d",&a);
	}while(a == 0);

	printf("\nIngrese segundo numero: ");
	scanf("%d",&b);
	resultado=a-b;

	printf("\nEl resultado es: %d \n",resultado);

	if(resultado>0){
        printf("\nResultado positivo \n");
	}

	if(resultado<0){
        printf("\nResultado negativo \n");
	}


	system("pause");
	return 0;
}
