#include <stdio.h>

int main(){

    int b3, b2, b1, b0;
    int d, oc1, oc0;
    char h;
    printf("Qual o valor em binario? ");
    scanf("%d %d %d %d", &b3, &b2, &b1, &b0);

    d = b3*2*2*2 + b2*2*2 + b1*2 + b0;
    oc1 = b3;
    oc0 = b2*2*2 + b1*2 + b0;

    if(d<10) h = '0' + d;
    else h = 'A'+d-10;

    printf("O valor na base decimal: %d\n", d);
    printf("O valor na base octal: %d%d\n", oc1, oc0);
    printf("O valor na base hexadecimal: %c\n", h);

    return 0;
}
