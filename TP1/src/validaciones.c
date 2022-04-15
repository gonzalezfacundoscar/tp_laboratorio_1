#include <stdio.h>
#include <stdlib.h>

void MostrarMenu(){
	printf("*** MENU DE OPCIONES. *** \n\n");
	printf("1. Ingrese kilometros. (km = x)\n\n");
	printf("2. Ingrese precio de vuelo. (Aerolineas=y, Latam=z)\n\n");
	printf("3. Calcular costos: \n\n");
	printf("	a) Tarjeta de debito: (descuento del 10) \n");
	printf("	b) Tarjeta de credito: (interés del 25) \n");
	printf("	c) Bitcoin: (1BTC -> 4606954.55 Pesos Argentinos)\n");
	printf("	d) Mostrar precio por km (precio unitario)\n");
	printf("	e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n");
	printf("4. Informar resultados: \n\n");
	printf("“Latam: \n");
	printf("	a) Precio con tarjeta de débito: \n");
	printf("	b) Precio con tarjeta de crédito: \n");
	printf("	c) Precio pagando con bitcoin: \n");
	printf("	d) Precio unitario: \n\n");
	printf("Aerolíneas: \n");
	printf("	a) Precio con tarjeta de débito:\n");
	printf("	b) Precio con tarjeta de crédito:\n");
	printf("	c) Precio pagando con bitcoin :\n");
	printf("	d) Precio unitario: \n");
	printf("	La diferencia de precio es: \n\n");
	printf("5. Carga Forzada. \n\n");
	printf("6. Salir. \n");
}
/// @param opcion
/// @param bandera
/// @return

int PedirEntero(char* mensaje){
	int numero;

	printf("%s", mensaje);
	scanf("%d", & numero);

	return numero;
}

int ValidarIngresoAnterior(int bandera){

	int numero=0;

	if(bandera == 0){
		numero=1;
	}

	return numero;

	}


/// @param numero
float ValidarPositivos(float numero){

	int aux;

	while(numero<0){

		printf("Ingrese un rango valido (positivo) \n");
		scanf("%f", &numero);
	}

	aux=numero;
	return aux;

}

void MostrarResultados(int num1, int num2, int num3, int num4){

	printf("“Latam: \n");
	printf("a) Precio con tarjeta de débito: \n");
	printf("b) Precio con tarjeta de crédito: \n");
	printf("c) Precio pagando con bitcoin: \n");
	printf("d) Precio unitario: \n\n");
	printf("Aerolíneas: \n");
	printf("a) Precio con tarjeta de débito:\n");
	printf("b) Precio con tarjeta de crédito:\n");
	printf("c) Precio pagando con bitcoin :\n");
	printf("d) Precio unitario: \n");
	printf(" La diferencia de precio es: ");
}

