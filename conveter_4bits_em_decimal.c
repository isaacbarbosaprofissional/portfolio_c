#include <stdio.h>

void main(void)
{
    char bin4[4];
    int A = 0, B = 0, C = 0, D = 0, final;
    scanf("%4s", bin4);
    
    if (bin4[0] == '1') {
        A = 8;
    }
    if (bin4[1] == '1') {
        B = 4;
    }
    if (bin4[2] == '1') {
        C = 2;
    }
    if (bin4[3] == '1') {
        D = 1;
    }
    
    final = A+B+C+D;
    printf("%d", final);
}
