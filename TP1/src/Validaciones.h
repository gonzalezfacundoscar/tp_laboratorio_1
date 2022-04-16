#include <stdio.h>
#include <stdlib.h>

/// @brief Funcion para mostrar el menu completo.

void MostrarMenu();

/// @brief Funcion para pedir un numero entero.
///
/// @param mensaje.
/// @return numero.
int PedirEntero(char* mensaje);

/// @brief funcion para pedir un flotante.
///
/// @param mensaje
/// @return numero
int PedirFlotante(char* mensaje);

/// @brief funcion para validar que el usuario haya ingresado anteriormente un valor.
///
/// @param bandera
/// @return numero
int ValidarIngresoAnterior(int bandera);

/// @brief funcion para validar que el numero sea positivo.
///
/// @param numero
/// @return numero.
float ValidarPositivos(float numero);

/// @brief funcion para mostrar los resultados
///
/// @param num1
/// @param num2
/// @param num3
/// @param num4
/// @param num5
/// @param num6
/// @param num7
/// @param num8
/// @param num9
void MostrarResultados(float num1, float num2, float num3, float num4, float num5, float num6, float num7, float num8, float num9);
