#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 3 de Paradigmas de programación.

int function_absolute_value(int n)
{
	int abs;
	
	if(n >= 0)
	{
		abs = n;
	}
	else
	{
		abs = n * (-1);
	}

	printf("\n*Valor absoluto*");
	printf("\n\n|x| --> x // |-x| --> x\n\n");
	printf("El valor absoluto es %d.\n\n", abs);
	
	return(n);
}

int main()
{
	setlocale(LC_ALL, "");
	int num;
	
	printf("Ingrese un número: ");
	scanf("%d", &num);
	
	function_absolute_value(num);
	
	getch();
	
	return(0);
}
