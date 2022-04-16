#include <stdio.h>
#include <stdlib.h>

void MostrarMenu(){
	printf("*** MENU DE OPCIONES. *** \n\n");
	printf("1. Ingrese kilometros. (km = x)\n");
	printf("2. Ingrese precio de vuelo. (Aerolineas=y, Latam=z)\n");
	printf("3. Calcular costos: \n");
	printf("	a) Tarjeta de debito: (descuento del 10) \n");
	printf("	b) Tarjeta de credito: (interés del 25) \n");
	printf("	c) Bitcoin: (1BTC -> 4606954.55 Pesos Argentinos)\n");
	printf("	d) Mostrar precio por km (precio unitario)\n");
	printf("	e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n");
	printf("4. Informar resultados: \n");
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
	printf("5. Carga Forzada. \n");
	printf("6. Salir. \n");
}

/// @param opcion
/// @param bandera
/// @return

float PedirEntero(char* mensaje){
	float numero;

	printf("%s", mensaje);
	scanf("%f", & numero);

	return numero;
}

/// @param bandera
/// @return
int ValidarIngresoAnterior(int bandera){

	int numero=0;

	if(bandera == 0){
		numero=1;
	}

	return numero;

	}


/// @param numero
float ValidarPositivos(float numero){

	float aux;

	while(numero<0){

		printf("Ingrese un rango valido (positivo) \n");
		scanf("%f", &numero);
	}

	aux=numero;
	return aux;

}

void MostrarResultados(float num1, float num2, float num3, float num4, float num5, float num6, float num7, float num8, float num9){

	printf("“Latam: \n");
	printf("a) Precio con tarjeta de débito: %.2f\n", num1);
	printf("b) Precio con tarjeta de crédito: %.2f\n", num2);
	printf("c) Precio pagando con bitcoin: %f\n", num3);
	printf("d) Precio unitario: %.2f\n\n", num4);
	printf("Aerolíneas: \n");
	printf("a) Precio con tarjeta de débito: %.2f\n", num5);
	printf("b) Precio con tarjeta de crédito: %.2f\n", num6);
	printf("c) Precio pagando con bitcoin : %f\n", num7);
	printf("d) Precio unitario: %.2f\n", num8);
	printf(" La diferencia de precio es: %.2f\n", num9);
}

