#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 4 de Paradigmas de programación.

void function_division_sin_dividir(int div, int dis, int coc, int res)
{
	if((div > 0) && (dis > 0))
	{
		coc = 0;
		res = div;
		
		while(res >= dis)
		{
			res -= dis;
			coc++;
		}
		
		printf("\n*División sin dividir*\n");
		printf("\n%d div %d = %d\n\n", div, dis, coc);
		printf("Resto = %d\n\n", res);
	}
	else
	{
		printf("\nLos números introducidos deben ser mayores que 0.\n\n");
	}
}

int main()
{
	setlocale(LC_ALL, "");
	int div, dis, coc, res;
	
	printf("Ingresar primer valor: ");
	scanf("%d", &div);
	printf("Ingresar segundo valor: ");
	scanf("%d", &dis);
	
	function_division_sin_dividir(div, dis, coc, res);
	
	getch();
	
	return(0);
}
