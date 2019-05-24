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
//int *frecuenciaDatos(Dato *, int);
int verificaRepeticion(char *,char , int );

/*int *frecuenciaDatos(Dato *arreglo, int tamano){
  char *arregloAux = malloc(sizeof(char)*tamano);
  for(int i = 0; i < tamano; i++){
    arregloAux[i] = '\0';
    printf("arregloAux[%i]: %c\n", i, arregloAux[i]);
  }
  int *arregloFrecuencias = malloc(sizeof(char)*tamano);
  for(int i = 0; i < tamano; i++){
    arregloFrecuencias[i] = '\0';
    printf("arregloFrecuencias[%i]: %i\n", i, arregloFrecuencias[i]);
  }
  char terminoAux;
  int frecuencia = 0;
  printf("\nentra\n");
  for(int i = 0; i < tamano; i++){
    printf("\nentra\n");
    frecuencia = 0;
    terminoAux = arreglo->texto[i];
    arregloAux[i] = arreglo->texto[i];
    if(verificaRepeticion(arregloAux, terminoAux, tamano)){
      for(int j = 0; j < tamano; j++){
        if(arreglo->texto[j] == terminoAux){
          frecuencia++;
        }
      }
      arregloFrecuencias[i] = frecuencia;
    }
  }
  return arregloFrecuencias;
}*/

/*int verificaRepeticion(char *arregloAux, char terminoAux, int tamano){
  int i = 0;
  while(i < tamano){
    if(arregloAux[i] == terminoAux){
      return 0;
    }
    i++;
  }
  return 1;
}*/


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
