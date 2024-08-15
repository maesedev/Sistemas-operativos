#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1;
    double num2;
    printf("Ingresa el primer numero: ");
    scanf("%lf", &num1);
    
    printf("Ingresa el segundo numero: ");
    scanf("%lf", &num2);


    if(num1 > num2){
        printf("%lf es mayor a %lf \n" , num1, num2);
    }
    else if(num1 < num2){
        printf("%lf es mayor a %lf \n" , num2, num1);
    }else{
        printf("%lf es igual a %lf \n" , num2, num1);

    }


}