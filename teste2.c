#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int horas = x/365;
    x -=horas*365;
    int min = x/30;
    x -=min*30;
    printf("%d ano(s)\n", horas);
    printf("%d mes(es)\n", min);
    printf("%d dia(s)\n", x);
    return 0;
}
