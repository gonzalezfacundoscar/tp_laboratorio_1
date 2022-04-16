/*
 ============================================================================
 FACUNDO GONZALEZ TP1
 Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.  El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:

1. Ingresar Kilómetros: ( km=x)

2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:

3. Calcular todos los costos:
 a) Tarjeta de débito (descuento 10%)
 b) Tarjeta de crédito (interés 25%)
 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
 d) Mostrar precio por km (precio unitario)
 e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
 a) Precio con tarjeta de débito: r
 b) Precio con tarjeta de crédito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 Aerolíneas:
 a) Precio con tarjeta de débito: r
 b) Precio con tarjeta de crédito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "calculos.h"

int main() {
	setbuf(stdout, NULL);

	int opcionIngresada;
	int kilometroIngresado=0;
	char salir ='n' ;
	int flagOpcUno=0;
	int flagOpcDos=0;
	int flagOpcTres=0;
	float precioAerolineas=0;
	float precioLatam=0;
	float debitoAerolineas;
	float debitoLatam;
	float creditoAerolineas;
	float creditoLatam;
	float bitcoinAerolineas;
	float bitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float mayorPrecio;
	float menorPrecio;
	float diferenciaDePrecio;


	do{
		system("cls");
		MostrarMenu();

	opcionIngresada=PedirEntero("\nIngrese una opcion: ");

		switch(opcionIngresada){
			case 1:
				kilometroIngresado=PedirFlotante("ingrese kilometros=");
				kilometroIngresado=ValidarPositivos(kilometroIngresado);
				system("pause");
				flagOpcUno=1;
				break;
			case 2:
					ValidarIngresoAnterior(flagOpcUno);
					if(ValidarIngresoAnterior(flagOpcUno)==1){
						printf("No ingreso la opcion anterior, Por favor empiece devuelta: \n");
						system("pause");
						break;
					}

					precioAerolineas=PedirEntero("Ingrese precio de Aerolineas=");
					precioAerolineas=ValidarPositivos(precioAerolineas);
					precioLatam=PedirEntero("Ingrese precio Latam=");
					precioLatam = ValidarPositivos(precioLatam);
					system("pause");
					flagOpcDos=1;
				break;
			case 3:
				ValidarIngresoAnterior(flagOpcDos);
				if(ValidarIngresoAnterior(flagOpcDos)==1){
					printf("No ingreso la opcion anterior, Por favor vuelva al menu:\n");
					system("pause");
					break;
				}
					debitoAerolineas=CalcularDiezPorcientoDescuento(precioAerolineas);
					debitoLatam=CalcularDiezPorcientoDescuento(precioLatam);
					creditoAerolineas=CalcularVeinticincoPorcientoInteres(precioAerolineas);
					creditoLatam=CalcularVeinticincoPorcientoInteres(precioLatam);
					bitcoinAerolineas=CalcularBitcoin(precioAerolineas);
					bitcoinLatam=CalcularBitcoin(precioLatam);
					precioUnitarioAerolineas=PrecioUnitario(precioAerolineas,kilometroIngresado);
					precioUnitarioLatam=PrecioUnitario(precioLatam,kilometroIngresado);
					mayorPrecio=CalcularMayorPrecio(precioAerolineas, precioLatam);
					menorPrecio=CalcularMenorPrecio(precioAerolineas, precioLatam);
					diferenciaDePrecio=CalcularDiferenciaPrecio(mayorPrecio,menorPrecio);
					printf("\n Datos calculados correctamente. \n");
					system("pause");

				flagOpcTres=1;
				break;
			case 4:
				ValidarIngresoAnterior(flagOpcTres);
				if(ValidarIngresoAnterior(flagOpcUno)==1){
					printf("No ingreso la opcion anterior, Por favor vuelva al menu:\n");
					system("pause");
					break;
				}
				MostrarResultados(debitoLatam, creditoLatam, bitcoinLatam, precioUnitarioLatam, debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioUnitarioAerolineas, diferenciaDePrecio);
				system("pause");
				break;
			case 5:
				kilometroIngresado=7090;
				precioAerolineas=162965;
				precioLatam=159339;
				debitoAerolineas=CalcularDiezPorcientoDescuento(precioAerolineas);
				debitoLatam=CalcularDiezPorcientoDescuento(precioLatam);
				creditoAerolineas=CalcularVeinticincoPorcientoInteres(precioAerolineas);
				creditoLatam=CalcularVeinticincoPorcientoInteres(precioLatam);
				bitcoinAerolineas=CalcularBitcoin(precioAerolineas);
				bitcoinLatam=CalcularBitcoin(precioLatam);
				precioUnitarioAerolineas=PrecioUnitario(precioAerolineas,kilometroIngresado);
				precioUnitarioLatam=PrecioUnitario(precioLatam,kilometroIngresado);
				mayorPrecio=CalcularMayorPrecio(precioAerolineas, precioLatam);
				menorPrecio=CalcularMenorPrecio(precioAerolineas, precioLatam);
				diferenciaDePrecio=CalcularDiferenciaPrecio(mayorPrecio,menorPrecio);
				MostrarResultados(debitoLatam, creditoLatam, bitcoinLatam, precioUnitarioLatam, debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioUnitarioAerolineas, diferenciaDePrecio);
				system("pause");
				break;
			case 6:
				salir='s';
				break;
			default:
				printf("Ingrese una opcion valida.\n");
				system("pause");
				salir='s';
				break;
		}
	}while(salir != 's');

	return 0;
}
