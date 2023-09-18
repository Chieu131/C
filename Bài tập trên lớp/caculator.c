#include <stdio.h>
int sum(int a , int b);
int multiply(int a , int b);
float division(float a , float b);
int subtraction(int a , int b);
int main(){
    int a , b;
    printf("Number 1 :");
    scanf("%d",&a);
    printf("Number 2 :");
    scanf("%d",&b);
    printf("\nSum : %d", sum(a,b));
    printf("\nMultyply :%d", multiply(a,b));
    printf("\nDivision :%f", division(a,b));
    printf("Subtraction : %d", subtraction(a,b));
}
int sum(int a, int b) {
    printf("\n\n Sum :\n");
    printf("Number a = %d\n", a);
    printf("Number b = %d\n", b);
    return a + b;
}
int multiply(int a , int b){
    printf("\n\n Multiply :\n");
    printf("Number a = %d\n", a);
    printf("Number b = %d\n", b);
    return a*b;
}
float division(float a , float b){
    printf("\n\n Division :\n");
    printf("Number a = %f\n", a);
    printf("Number b = %f\n", b);
    return a/b;
}
int subtraction(int a , int b){
    printf("\n\n Subtraction :\n");
    printf("Number a = %d\n", a);
    printf("Number b = %d\n", b);
    return a-b;
}

