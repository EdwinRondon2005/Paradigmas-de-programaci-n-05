#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 5 de Paradigmas de programación.

void polar_a_cartesiano(double radio, double angulo)
{
    int X, Y;
	
	X = radio * cos(angulo);
    Y = radio * sin(angulo);
	
	printf("X = %d\n", X);
	printf("Y = %d\n", Y);
}

int main()
{
	setlocale(LC_ALL, "");
	float radio, angulo;
	
	printf("Ingresar el radio: ");
	scanf("%f", &radio);
	printf("Ingresar el ángulo: ");
	scanf("%f", &angulo);
	
	polar_a_cartesiano(radio, angulo);
	
	getch();
	
	return(0);
}
