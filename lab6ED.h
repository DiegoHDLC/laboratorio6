#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _structArreglo{
  char *texto;
}Dato;
//prototipos
int contadorDatos(FILE *);
Dato *inicializaArreglo(int);
void imprimirArreglo(Dato *, int);
Dato *almacenarDatosEnArreglo(FILE *, Dato *);

int contadorDatos(FILE *p){
  int i=0;
  while(fgetc(p)){
    if(feof(p)){ break; }
    i++;
  }
  return i;
}

Dato * inicializaArreglo(int tamano){
  Dato * nuevoArreglo = malloc(sizeof(Dato)*tamano);
  for(int i = 0; i < tamano; i++){
    nuevoArreglo->texto[i] = '\0';
  }
  return nuevoArreglo;
}

Dato *almacenarDatosEnArreglo(FILE *p, Dato* arreglo){
  for(int i = 0; arreglo->texto[i] = fgetc(p); i++){
    if(feof(p)){ break;}
  }
  return arreglo;
}

void imprimirArreglo(Dato *arreglo,int tamano){
  for(int i = 0; i < tamano; i++){
    printf("arreglo[%i] = %c\n", i,arreglo->texto[i]);
  }
}
