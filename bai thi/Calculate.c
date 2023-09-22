#include <stdio.h>
int sum(int a , int b);
int multiply(int a , int b);
float division(int a , int b);
int subtraction(int a , int b);
int Menu();
int main(){
    int a , b;
    int option;
    printf("Number 1 :");
    scanf("%d",&a);
    printf("Number 2 :");
    scanf("%d",&b);
    Menu();
    printf("Choose a operator  : ");
    scanf("%d",&option);
    switch (option) {
        case 1:
            printf("Sum : %d", sum(a,b));
            break;
        case 2:
            printf("Subtraction : %d", subtraction(a,b));
            break;
        case 3:
            printf("Multuply :%d", multiply(a,b));
            break;
        case 4:
            printf("Division :%f", division(a,b));
        default:
            printf("Quit !");

    }

}
int sum(int a, int b) {
    printf("\n\n Sum :\n");
    return a + b;
}
int multiply(int a , int b){
    printf("\n\n Multiply :\n");
    return a*b;
}
float division(int a , int b){
    printf("\n\n Division :\n");
    return (float)a/b;
}
int subtraction(int a , int b){
    printf("\n\n Subtraction :\n");
    return a-b;
}
int Menu(){
    printf("1. sum\n");
    printf("2. subtraction\n");
    printf("3. multiply\n");
    printf("4. division\n");
}