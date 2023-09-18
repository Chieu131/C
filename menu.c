#include <stdio.h>
void food();
void drinks();
int main() {
    printf("Menu : ");
    food();
    printf("\n");
    drinks();
    return 0;
}
void food(){
    printf("Noodle.....2$\n");
    printf("fried chicken.....10$\n");
    printf("Steak......15$\n ");
    printf("Pho........10$\n");
}
void drinks(){
    printf("Apple juice....2$\n");
    printf("Orange juice...3$\n");
    printf("Milk tea........1.5$\n");
    printf("Ice tea........0.5$");
}
