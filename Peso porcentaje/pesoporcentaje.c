#include <stdio.h>

main(){
float pesoi;
float pesof;
float porcenfinal;
float varporcentaje;

printf("ingrese peso inicial");
pesoi=getchar();
printf("ingrese peso final");
pesof=getchar();

porcenfinal = (pesof * 100) / pesoi;
varporcentaje = 100 - porcenfinal;

printf("el porcentaje de variacion de peso es:", varporcentaje);

}
