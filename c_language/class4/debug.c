#include <stdio.h>

int main() {
    int state = 0;    
    char c;
    int upper = 0;      
    int lower = 0;      
    int other = 0;      

    while ((c = getchar()) != EOF ) {
        if (c == ' '  || c == '\t'||c =='\n') {
            state = 0;   
        } else if (state == 0) {
            if (c >= 'A' && c <= 'Z')
                ++upper;
            else if (c >= 'a' && c <= 'z')
                ++lower;
            else
                ++other;

            state = 1;  
        }
    }

    printf("%d\n%d\n%d\n", upper, lower, other);
    return 0;
}
