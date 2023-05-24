#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 1 de Paradigmas de programación.

void function_intercambio(int numA, int numB)
{
	int aux;
	
	aux == numA;
	numA == numB;
	numB == aux;
	
	printf("\n|-------------------------------|\n");
	printf("          Intercambio:\n");
	printf("\nAhora el primer número es %d.\n", numB);
	printf("Ahora el segundo número es %d.\n\n", numA);
}

int main()
{
	setlocale(LC_ALL, "");
	int num1, num2;
	
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	
	function_intercambio(num1, num2);
	
	getch();
	
	return(0);
}
