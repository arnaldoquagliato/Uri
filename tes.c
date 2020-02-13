#include <stdio.h>

int main() {
    int input, nota100 = 0, nota50= 0, nota20= 0, nota10= 0,nota5= 0, nota2= 0, nota1= 0;
    scanf("%d", &input);
    do{
        if(input >= 100){
            input -=100;
            nota100++;
        }else if(input >= 50){
            input -=50;
            nota50++;
        }else if(input >= 20){
            input -=20;
            nota20++;
        }else if(input >= 10){
            input -=10;
            nota10++;
        }else if(input >= 5){
            input -=5;
            nota5++;
        }else if(input >= 2){
            input -=2;
            nota2++;
        }else if(input >= 1){
            input -=1;
            nota1++;
        }
    }while(input != 0);
        printf("%d nota(s) de R$ 100,00\n", nota100);
        printf("%d nota(s) de R$ 50,00\n", nota50);
        printf("%d nota(s) de R$ 20,00\n", nota20);
        printf("%d nota(s) de R$ 10,00\n", nota10);
        printf("%d nota(s) de R$ 5,00\n", nota5);
        printf("%d nota(s) de R$ 2,00\n", nota2);
        printf("%d nota(s) de R$ 1,00\n", nota1);
    return 0;
}
