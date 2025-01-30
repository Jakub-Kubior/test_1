#include <stdio.h>

int Policz(int a, int b)
{
    return a*b;
}

int main(void)
{
    printf("2. BRANCH\n");
    printf("W drugim rachunku 3 * 5: %d",Policz(3,5));
    return 0;
}
