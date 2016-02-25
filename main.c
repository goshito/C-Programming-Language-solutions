/* 20, Exercise 1-10, Write e program to copy its input to output, replacing each tab by \t,
 each backspace by \b, and each backslash by \\. This makes tabs and 
 backspaces visible in an unambiguous way*/

#include <stdio.h>

int main() {
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
        if (c != '\b')
            if (c != '\t')
                if (c != '\\')
                    putchar(c);
    }
}