#include <stdio.h>
char grade(int a);
char g;
int main(){
    int point;
    printf("Write a point : \n");
    scanf("%d",&point);
    printf("%c ", grade(point));
}
char grade(int a){
    if(a >= 90)
        g='A';
    else if (a < 90 && a >= 75)
        g = 'B';
    else if(a < 75 && a >=60)
        g = 'C';
    else
        g = 'F';
    return g;
}