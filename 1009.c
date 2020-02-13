#include<stdio.h>
int main(){
    char nome[20];
    double vlr1, vlr2,total;
    scanf("%s", &nome);
    scanf("%lf", &vlr1);
    scanf("%lf", &vlr2);
    total = vlr1 + (0.15*vlr2);
    printf("TOTAL = R$ %.2lf\n", total);

return 0;
}

