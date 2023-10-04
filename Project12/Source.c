#include <stdio.h>
int main() {
    int x1, x2, x3,x4;
    printf("enter x1, x2, x3,x4  ");
    scanf_s("%d %d %d %d", &x1, &x2, &x3, &x4);
    if ((x2 == x3) && (x2 == x4)) {
        printf("\n  1" );
    }
    else if ((x1 == x3) && (x3 == x4))
    {
        printf("\n  2");
    }
    else if ((x1 == x2) && (x2 == x4))
    {
        printf("\n  3" );
    }
    else 
    {
        printf("\n   4");
    }
   

    return 0;
}