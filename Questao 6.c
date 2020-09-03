#include<stdio.h>
#include<math.h>

int main(void){
    float segundos1, segundos2, minutos1, horas1;


    printf("Digite o tempo sem segundos");
    scanf("%f", &segundos1);

    segundos2 = fmod(segundos1,60);

    minutos1 = fmod(segundos1,60);

    horas1 = (segundos1/60)/60;

    printf("%.0f horas > %.0f minutos > %.02f segundos",horas1, minutos1, segundos2);

}
