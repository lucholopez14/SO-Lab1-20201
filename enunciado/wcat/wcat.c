#include <stdio.h> // libreria estandar de cabecera para hacer operaciones imput output 
#include <stdlib.h> // libreria estandar de proposito general de memoria dinamica
#include <time.h> // Libreria para dar formato de hora y fecha

int main(int argc, char *argv[]) {
  
  char line[1000];
  
  FILE *iF;// Condicional para validar si hay un archivo
  while(--argc >0){
    iF = fopen(*++argv, "r");
  
  if (iF == NULL) {
    printf("wcat: cannot open file\n");
    exit(1);
  }

  while(fgets(line, 1000, iF)!=NULL) {
   
    printf("%s",line);
  } 
  fclose(iF);
  }
  exit(0);
}
