            #include <stdio.h>

int main() {
    int x;
    char i , ans;
    i='y';
    do {
        x = 0;
        ans = 'y';
        printf("\n Enter sequence of character : ");
        do {
            i = getchar();
            x++;

        } while (i != '\n');
        i = 'y';
        printf("\nNumber of characters entered is : %d", --x);
        printf("\nMore sequences (Y/N)?");
    } while (ans == 'Y'|| ans == 'y');
    }

