#include "stdio.h"

int add(int a, int b);
int sub(int a, int b);

int main(){
    int m = add(5, 2);
    int n = sub(5, 2);
    printf("5+2=%d\n", m);
    printf("5-2=%d\n", n);
    return 0;
}
