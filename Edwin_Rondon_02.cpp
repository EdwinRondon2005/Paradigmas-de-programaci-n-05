#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 2 de Paradigmas de programaci�n.

int function_limits(int lim1, int lim2)
{
	int n;
	
	scanf("%d", &n);
	
	if((n >= lim1) && (n <= lim2))
	{
		printf("El valor es v�lido y es: %d\n\n", n);
		
		return(n);
	}
	else
	{
	    printf("El valor no es v�lido porque est� fuera del l�mite.\n\n");
			
	    return(n);
	}
}

int main()
{
	setlocale(LC_ALL, "");
	int lim1, lim2, num;
	
	printf("Ingrese el primer l�mite: ");
	scanf("%d", &lim1);
	printf("Ingrese el segundo l�mite: ");
	scanf("%d", &lim2);
	
	if(lim1 == lim2)
	{
	   printf("Los l�mites no pueden ser iguales.\n\n");
	   
	   return (0);
	}
	else
	{
		printf("Ingresar un n�mero: ");
	}
	
	function_limits(lim1, lim2);
	
	getch();
	
	return(0);
}
