#include<stdio.h>
int main(){
    double pi = 3.14159;
    double a,b,c;
    scanf("%lf %lf %lf",&a, &b, &c);
    double tri = (a*c)/2;
    double cir = pi*(c*c);
    double trap = (((a+b)*c)/2);
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", b*b);
    printf("RETANGULO: %.3lf\n", a*b);
return 0;
}


