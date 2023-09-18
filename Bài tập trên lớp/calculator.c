#include <stdio.h>
int add(int a , int b);
int main(){
    int result = add(5,3);
    printf("Sum :  %d\n");

    int result2 = add(4 ,3);
    printf("Sum : %d",result2);

    int num1 , num2;
    printf("Number 1 :");
    scanf("%d",&num1);
    printf("Number 2 :");
    scanf("%d",&num2);

    int result3 = add(num1,num2);
    printf("Sum : %d\n",result3);
    return 0;

}
int add(int a, int b) {
    printf("\n\n Sum :\n");
    printf("Number a = %d\n", a);
    printf("Number b = %d\n", b);
    return a + b;
}