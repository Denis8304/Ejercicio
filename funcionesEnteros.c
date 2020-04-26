#include <stdio.h>
#include <stdlib.h>

int CargarNumero(char mje[])
{
    int numero;

    printf("%s", mje);
    scanf("%d", &numero);

    return numero;
}

void cargarArray(int arrayNum[], int cantidad)
{
    int i;

    for(i = 0; i < cantidad; i++)
    {
        arrayNum[i] = CargarNumero("Ingrese numero: ");
    }
}

void mostrarArray(int arrayNum[], int cantidad)
{
    int i;

    for(i = 0; i < cantidad; i++)
    {
        printf("Numero ingresado: %d\n", arrayNum[i]);
    }
}


int buscarMayor(int arrayNum[], int cantidad)
{
    int i;
    int mayor;
    for(i = 0; i < cantidad; i++)
    {
        if(arrayNum[i] > mayor || i == 0)
        {
            mayor = arrayNum[i];
        }
    }

    return mayor;
}

void OrdenarAcendente(int arrayNum[], int cantidad)
{
    int i;
    int j;
    int aux;

    for(i = 0; i < cantidad; i++)
    {
        for(j = 0; j < cantidad-1;j++)
        {
            if(arrayNum[j+1] < arrayNum[j])
            {
                aux = arrayNum[j];
                arrayNum[j] = arrayNum[j+1];
                arrayNum[j+1] = aux;
            }
        }

    }
}

void MostrarArrayAscendente(int arrayNum[], int cantidad)
{
    int i;

    printf("\nOrdenado ascendente:\n\n");
    for(i = 0; i < cantidad; i++)
    {
        printf("Numero: %d\n", arrayNum[i]);
    }
}

int SumaArray(int arrayNum[], int cantidad)
{
    int i;
    int sumaTotal = 0;

    for(i = 0; i < cantidad;i++)
    {
        sumaTotal = arrayNum[i] + sumaTotal;
    }

    return sumaTotal;
}

int BuscarPosicionNumero(int arrayNum[], int cantidad)
{
    int i;
    int num;
    int posicion;

    mostrarArray(arrayNum, cantidad);
    num = CargarNumero("\nIngrese numero que desea buscar: ");

    for(i = 0; i < cantidad; i++)
    {
        if(num == arrayNum[i])
        {
            posicion = i;
        }
    }

    return posicion;
}


