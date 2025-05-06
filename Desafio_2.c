#include <stdio.h>

int main(){
    
    int seg;

    printf("insira o valor em segundos: ");
    scanf("%i", &seg);

    int horas;
    int min;
    int seg_resto;

    horas = seg / 3600;
    min = (seg - (horas * 3600)) / 60;
    seg_resto = (seg - (horas * 3600)) - (min * 60);
    printf("%i horas ", horas);
    printf("%i min ", min);
    printf("%i seg_resto ", seg_resto);
