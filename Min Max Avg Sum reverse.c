#include <stdio.h>

void main(){
    int arr[5];
    int i,max,sum=0,min;
    float avg;
    for (i = 0; i < 5; i++) {
        printf("write a number %d :", i + 1);
        scanf("%d", &arr[i]);
        sum += ary[i];
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 5; i++) {

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];

    }
    avg=(float )sum/5;
    printf("Max : %d\t",max);
    printf("Sum: %d\n",sum);
    printf("Min : %d\t",min);
    printf("Average : %f",avg);
    for(i=4;i>=0;i--);{
        printf("\n%d",arr[i]);}
}
