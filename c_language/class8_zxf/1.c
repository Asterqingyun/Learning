#include <stdio.h>
unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
    int shift = p - n;
    unsigned int mask = ~(~0U << n);
    unsigned int y_right = y & mask;
    unsigned int y_shifted = y_right << shift;
    unsigned int x_11011 = ~(mask << shift);
    unsigned int x_cleared = x & x_11011;
    return x_cleared | y_shifted;
}

int main() {
    unsigned int x, y;
    int p, n;
    while (scanf("%u,%d,%d,%u",&x,&p,&n,&y)==4) {
	printf("I got x:%d",x);
        unsigned int result = setbits(x, p, n, y);
        printf("%d",result);
    }

    return 0;
}
