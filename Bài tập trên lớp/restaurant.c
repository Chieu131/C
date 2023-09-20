#include <stdio.h>
void menu();
void order(char option);
float payment_invoice(char option , int payment);
int quantity;
int main() {
char option;
float p;
float payment;
// vòng lặp điều kiện để chạy trương trình
    do {
        printf("Menu : \n");
        menu();
        printf("Choose my option %c! :");
        scanf(" %c",&option);
        if(option != 'e'){
            printf("Quantity : ");
            scanf("%d",&quantity);
            order(option);
            p = payment_invoice(option,payment);
            printf("payment_invoice : $%.2f\n",payment_invoice(option,payment));
        }
    } while (option !='e');
    return 0;

}
//hàm menu
void menu(){
    printf(" a.Noodle.....2$\n");
    printf(" b.fried chicken.....10$\n");
    printf(" c.Steak......15$\n ");
    printf("d.Pho........10$\n");
}
//hàm chọn option
void order(char option){
    switch (option) {
        case 'a':
            printf("Noodle.....2$\n");
        break;
        case 'b':
            printf("fried chicken.....10$\n");
            break;
        case 'c':
            printf("Steak......15$\n");
            break;
        case 'd':
            printf("Pho........10$\n");
            break;
        default:
            printf("Quit !");


    }
}
// hàm tính tổng hoá đơn
float payment_invoice(char option , int payment){
    int price;
    switch (option) {
        case 'a':
            price = 2.0;
            break;
        case 'b':
            price = 10;
            break;
        case 'c':
            price = 15;
            break;
        case 'd':
            price = 10;
        default:
            price = 0;
    }
    return price * quantity;
}
