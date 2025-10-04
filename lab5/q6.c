#include <stdio.h>

int main() {
    int a = 5, b;


    b = ++a; 
    printf("After pre-increment:\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b); 

    
    a = 5;
    b = a++;
    printf("After post-increment:\n");
    printf("a = %d\n", a);
    printf("c = %d\n", b); 

    return 0;
}
