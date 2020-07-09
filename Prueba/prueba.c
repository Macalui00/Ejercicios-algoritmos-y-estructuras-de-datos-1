#include <stdio.h>
#include <string.h>
int main()
{
 FILE *fp;
 char line[150];
 char token = NULL;

 fp = fopen("ventas por exportador.csv", "r");
 token = strtok(line, ",");

 if(fp == NULL);
 {
 perror("Error opening file");
 return(-1);
 }
 int i = 0;
 while (1) {
 if (fgets(line,150, fp) == NULL) break;
 i++;
 printf("%3d: %s", i, line);
 while ( token ) {
  printf("%s\n", token);
token = strtok(NULL, ",");
 }
 printf("%d\n",i);
 int fclose(fp);
 return(0);
}
