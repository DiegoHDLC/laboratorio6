#include "lab6ED.h"

int main(int argc, char const *argv[]) {
  FILE *p;
  int tamano = 0;
  p = fopen("textoArbol.txt","r");
  tamano = contadorDatos(p);
  p = fopen("textoArbol.txt","r");
  printf("tamano: %i\n", tamano);
  Dato *arreglo = inicializaArreglo(tamano);
  arreglo = almacenarDatosEnArreglo(p,arreglo);
  frecuenciaDatos(arreglo);
  //almacenarDatosEnArreglo(p,arreglo);
  //printf("%c\n", arreglo->valor);

  //arreglo = almacenarDatosEnArreglo(p);

  imprimirArreglo(arreglo,tamano);
  fclose(p);
  return 0;
}
