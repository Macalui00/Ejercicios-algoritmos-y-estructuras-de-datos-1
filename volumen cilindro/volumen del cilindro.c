#include <stdio.h>

int main(){
float base;
float altura;
#define PI 3.14;

float area;
float volumen;

printf("ingrese la base del cilindro\n");

scanf("%f",&base);

printf("la base del cilindro es: %f\n", base);

printf("ingrese la altura del cilindro\n");

scanf("%f",&altura);

printf("la altura del cilindro es: %f\n", altura);

area = (PI*base);
volumen = area*altura;

printf("el volumen del cilindro es: %d\n", volumen);
}
