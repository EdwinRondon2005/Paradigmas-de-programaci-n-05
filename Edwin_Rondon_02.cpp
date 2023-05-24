#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 2 de Paradigmas de programación.

int function_limits(int lim1, int lim2)
{
	int n;
	
	scanf("%d", &n);
	
	if((n >= lim1) && (n <= lim2))
	{
		printf("El valor es válido y es: %d\n\n", n);
		
		return(n);
	}
	else
	{
	    printf("El valor no es válido porque está fuera del límite.\n\n");
			
	    return(n);
	}
}

int main()
{
	setlocale(LC_ALL, "");
	int lim1, lim2, num;
	
	printf("Ingrese el primer límite: ");
	scanf("%d", &lim1);
	printf("Ingrese el segundo límite: ");
	scanf("%d", &lim2);
	
	if(lim1 == lim2)
	{
	   printf("Los límites no pueden ser iguales.\n\n");
	   
	   return (0);
	}
	else
	{
		printf("Ingresar un número: ");
	}
	
	function_limits(lim1, lim2);
	
	getch();
	
	return(0);
}
