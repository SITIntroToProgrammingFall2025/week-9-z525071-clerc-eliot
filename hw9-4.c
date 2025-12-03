#include <stdio.h>

void compute_hexa(int c, char hexa[16]) {
    //R compute
    float div_r = c / 16.;
    int r_int1 = (int) div_r;
    printf("%c", hexa[r_int1]);

    float remainder = div_r - r_int1;
    int r_int2 = (int) (remainder * 16);
    printf("%c", hexa[r_int2]);
}

int main() {
    int r, g, b;

    char hexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);
    
    printf("The hex code is #");
    compute_hexa(r, hexa);
    compute_hexa(g, hexa);
    compute_hexa(b, hexa);
}
