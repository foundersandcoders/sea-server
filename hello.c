#include <stdio.h>

int repeat(int x,  char *yup);

int main (void) {
    char *word = "Hello, World";
    int number = 3;
    
    repeat(number, word);
    
    return 0;
}

int repeat(int x, char *yup) {
    int z;
    for (z = 0; z < x; z ++) {
         puts(yup);
    }
    return 0;
}
