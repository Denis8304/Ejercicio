/*
Realizar un programa que trabaje con un vector de 15 enteros y por medio de funciones me permita:
 Cargar el vector
 Obtener el mayor elemento
 Ordenarlo en forma ascendente
 Imprimirlo
 Obtener la suma de los elementos del vector
 Buscar un número dentro del vector e indicar su posición
*/


#include <stdio.h>
#include <stdlib.h>
#include "funcionesEnteros.h"

#define CANT 6

int main()
{
    int arrayNumeros[CANT];
    int numMayor;
    int sumaNumerosArray;
    int posicionNumero;

    cargarArray(arrayNumeros, CANT);

    numMayor = buscarMayor(arrayNumeros,CANT);
    printf("\nEl numero mayor es: %d\n\n", numMayor);

    mostrarArray(arrayNumeros, CANT);

    OrdenarAcendente(arrayNumeros, CANT);

    MostrarArrayAscendente(arrayNumeros, CANT);

    sumaNumerosArray = SumaArray(arrayNumeros, CANT);

    printf("\nLa suma de los numeros del array es: %d\n\n", sumaNumerosArray);

    posicionNumero = BuscarPosicionNumero(arrayNumeros, CANT);

    printf("\nEl nuermo ingresado se encuentra en la posicion %d\n\n", posicionNumero);

    return 0;
}
