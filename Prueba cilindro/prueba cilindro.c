#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    const double Pi = 3.141592654;     double D, R, H, V;
    puts ("Tiempo de llenado para un deposito cilindrico\n");
    printf ("Introduzca el diametro del deposito en metros: ");  scanf ("%lf", &D);
    printf ("Introduzca la altura del deposito en metros: "); scanf ("%lf", &H);

    //Cálculos y resultados
       R = D / 2;     V = Pi * pow (R, 2) * H;
    printf ("El el volumen del cilindro es de %lf \n", V );
    return 0;
}
