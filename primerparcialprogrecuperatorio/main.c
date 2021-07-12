#include <stdio.h>
#include <stdlib.h>

typedef struct
    {
        int id;
        char procesador[100];
        char marca[100];
        float precio;
    } eNotebook;


float aplicarDescuento (float precio);
int contarCaracteres (char cadena[], char caracter);
void ordenarPorMarca(eNotebook notes,)

int main()
{
   // Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita
   //ordenar un array de dicha estructura por marca.
   //Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main. *
   float salchicha=100;
    aplicarDescuento(salchicha);
    char nombre[]= "mica";
    contarCaracteres(nombre, i);

    return 0;
}
float aplicarDescuento (float precio)
{
    float nuevoPrecio;
    nuevoPrecio= 95 * precio / 100;
    return nuevoPrecio;
}

int contarCaracteres (char cadena[], char caracter)
{
    int i=0;
    int contador=0;
     while(cadena[i]!="\0")
        {
            if(cadena[i]==caracter)
            {
                contador++;
            }
            i++;
        }
        return contador;
}
