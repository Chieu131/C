#include <stdio.h>
int main(){
    int i;
    int arr[10];
    for ( i = 0; i <10 ; i++) {
        printf("Wirte a Number %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Reverse:");
    for (i = 9; i >=0 ; i--) {
        printf("\n%d",arr[i]);
    }
}

