/*
 ============================================================================
 Name        : PrimerParcial_Prog1G.c
 Author      : Sofia Belucci
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


typedef struct{

int id;
char nombre[20];
char tipo;
float efectividad;

}eVacuna;

int aplicarAumento(float precioProducto);

int main(void) {
	setbuf(stdout, NULL);

	char cadena[5] = "Hola";



aplicarAumento(10);


	return 0;
}


int aplicarAumento(float precioProducto)
{

	int todoOk = 0;
	int aumento = 5;
	int precioAAumentar;
	float precioAumentado;

	if(precioProducto > 0)
	{

		precioAAumentar = (float) (precioProducto * aumento) / 100;
		precioAumentado = precioProducto + precioAAumentar;

		printf("%.2f", precioAumentado);

		todoOk = 1;


	}

	return todoOk;
}


int reemplazarCaracteres(char caracteres[], char car1, char ca2)
{
  int todoOk = 0;

  if(caracteres != NULL)
  {
	  for(int i = 0; i< sizeof(caracteres); i++)
	  {




	  }



  }
}








