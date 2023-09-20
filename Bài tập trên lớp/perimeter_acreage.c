
#include <stdio.h>
int perimeter(int a , int b);
int acreage(int a , int b);
int a, b;
int main(){
    printf("Write a Length : ");
    scanf("%d",&a);
    printf("Write a width : ");
    scanf("%d",&b);
    printf("%d\n",perimeter(a,b));
    printf("%d", acreage(a,b));

}
int perimeter(int a , int b){
    printf("Perimeter of a rectangle : ");
    return (a+b)*2;

}
int acreage(int a , int b){
    printf(" Acreage of a rectangle : ");
    return a*b;
}