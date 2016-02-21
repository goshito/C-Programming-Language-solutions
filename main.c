//20, Ex. 1-8 write a program to count blanks, tabs and new lines

#include <stdio.h>

int main() {
    int c, nt, nb, nl;
    
    nb = 0;
    nt = 0;
    nl = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    }
    printf("%d %d %d\n", nb, nt, nl);
    return 0;
}


