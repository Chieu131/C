#include <stdio.h>

void main(){
    int ary[5];
    int i,max,sum=0,min;
    float avg;
    for (i = 0; i < 5; i++) {
        printf("write a number %d :", i + 1);
        scanf("%d", &ary[i]);
        sum += ary[i];
    }
    max = ary[0];
    min = ary[0];
    for (i = 1; i < 5; i++) {

        if (ary[i] > max)
            max = ary[i];
        if (ary[i] < min)
            min = ary[i];

    }
    avg=(float )sum/5;
    printf("Max : %d\t",max);
    printf("Sum: %d\n",sum);
    printf("Min : %d\t",min);
    printf("Average : %f",avg);
}