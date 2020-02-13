#include<stdio.h>
int main(){
    int numfunc, hrstrabalhadas;
    double salario,vlrtrab;
    scanf("%d", &numfunc);
    scanf("%d", &hrstrabalhadas);
    scanf("%lf", &vlrtrab);
    salario=vlrtrab*hrstrabalhadas;
    printf("NUMBER = %d\n", numfunc);
    printf("SALARY = U$ %.2lf\n", salario);
return 0;
}
