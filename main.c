//17, Exercise 1-6. Verify that the expression qetchar () I= EOFis 0 or 1.

#include <stdio.h>

int main() {
    int c;
    
    while ((c = getchar()) != EOF)
            printf("%d\n", c);
    printf("%d - at EOF\n", c);
    return 0;
}


