#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    typedef struct sPersona{ //Estructura de persona, segun nuestro archivo de entrada
      char Nroventa;
      int exportador;
      int destino;
      int articulo;
      int cantidad;
      float preciounitario;
      float costounitario;
      char fecha;
}tPersona;
int main(){

FILE *fp;

 char informacion [1000]
 char line[150];
 tPersona miPersona[300];
 char vector[200];
char vectorAuxiliar[100];

      memset (vector, '\0', 200); //Llenamos todo el vector con \0
      memset (vectorAuxiliar, '\0', 100); //Llenamos todo el vectorAuxiliar con \0
 fp = fopen("ventas por exportador.csv" , "r");
 if(fp == NULL)
 {
 perror("Error opening file");
 return(-1);
 }
 char *token;
 int i = 0;

 while (1) {
 if (fgets(line,150, fp) == NULL) break;
                strcpy (vectorAuxiliar, strtok (NULL, ",")); //Leemos el vector hasta el ; obteniendo la Edad
                  miPersona[i].Nroventa = atoi (vectorAuxiliar);
                   //Leemos el vector hasta el ; obteniendo el Apellido
                  strcpy (vectorAuxiliar, strtok (NULL, ","));
                  miPersona[i].exportador = atoi (vectorAuxiliar); //Leemos el vector hasta el ; obteniendo el Telefono
                  strcpy (vectorAuxiliar, strtok (NULL, ","));
                  miPersona[i].destino = atoi (vectorAuxiliar);//Leemos el vector hasta el ; obteniendo la Edad
                  strcpy(vectorAuxiliar, strtok (NULL, ","));
                  miPersona[i].articulo = atoi (vectorAuxiliar);//Transformamos el vectorAuxiliar a int para guardarlo como tal
                  strcpy (vectorAuxiliar, strtok (NULL, ","));
                  miPersona[i].cantidad = atoi (vectorAuxiliar); //Leemos el vector hasta el ; obteniendo el Apodo
                  strcpy (vectorAuxiliar, strtok (NULL, ","));
                  miPersona[i].preciounitario = atof (vectorAuxiliar);
                  strcpy (vectorAuxiliar, strtok (NULL, ","));
                  miPersona[i].costounitario = atof (vectorAuxiliar);
                  strcpy (miPersona[i].fecha, strtok (NULL, ","));
                  printf ("Nroventa: %d\nexportador: %d\ndestino: %d\narticulo: %d\ncantidad: %d\n", miPersona[i].Nroventa, miPersona[i].exportador, miPersona[i].destino, miPersona[i].articulo, miPersona[i].cantidad);
                  //Imprimimos por pantalla todos los datos necesarios
 i++;
 printf("%3d: %s \n", i, line);
 token = strtok(line, ",");
 int j = 1;
 memset (vector, '\0', 200); //Llenamos todo el vector con \0
 memset (vectorAuxiliar, '\0', 100); //Llenamos todo el vectorAuxiliar con \0
 while( token != NULL )
 {
 printf( " %s\n", token );
 token = strtok(NULL, ",");
 j++;
 }
 }
 printf("%d\n",i);
 fclose(fp);
 return(0);
}
