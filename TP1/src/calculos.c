#include <stdio.h>
#include <stdlib.h>

float CalcularDiezPorcientoDescuento(float numero){

	float aux;
	aux = numero- (10*numero/100);
	return aux;
}

float CalcularVeinticincoPorcientoInteres(float numero){

	float aux=0;
	aux= numero+(25*numero/100);
	return aux;
}

float CalcularBitcoin(float numero){

	float aux;
	float bitcoin;

	bitcoin=4651018.94;

	aux=(float)numero/bitcoin;
	return aux;
}

float PrecioUnitario(float num1, float num2){
	float numero;
	numero= (float) num1/num2;
	return numero;
}

void MostrarPrecioUnitario(float num1, float num2){
	printf("\nprecio unitario Aerolineas=$ %f\n", num1);
	printf("\nprecio unitario Latam=$ %f\n", num2);
}

float CalcularMayorPrecio(float num1, float num2){

	int numero;

	if(num1>num2){
		numero=num1;
	}else{
		numero=num2;
	}
	return numero;
}

float CalcularMenorPrecio(float num1, float num2){

	float numero;
		if(num1<num2){
			numero=num1;
		}else{
			numero=num2;
		}
	return numero;
}
float CalcularDiferenciaPrecio(float num1, float num2){

	float numero;
	numero=num1-num2;
	return numero;

}

void MostrarCalculoDebito(float num1, float num2){

	printf("El calculo con debito Aerolineas es: %f\n", num1);
	printf("El calculo con debito Latam es: %f\n", num2);
}
