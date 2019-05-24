#include "lab6ED.h"

int main(int argc, char const *argv[]) {
  FILE *p;
  int tamano = 0;
  p = fopen("textoArbol.txt","r");
  tamano = contadorDatos(p);
  p = fopen("textoArbol.txt","r");
  printf("tamano: %i\n", tamano);
  Dato *arreglo = inicializaArreglo(tamano);
  /*imprimirArreglo(arreglo,tamano);
  int *arregloFrecuencias = malloc(sizeof(char)*tamano);
  for(int i = 0; i < tamano; i++){
    arregloFrecuencias[i] = '\0';
  }
*/
  arreglo = almacenarDatosEnArreglo(p,arreglo);
  imprimirArreglo(arreglo,tamano);
  /*arregloFrecuencias = frecuenciaDatos(arreglo,tamano);

  imprimirArreglo(arreglo,tamano);*/
  fclose(p);
  return 0;
}
