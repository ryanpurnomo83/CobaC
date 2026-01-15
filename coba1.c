#include <stdio.h>

int recursive(int a, int b);

int main() {
    int x = 10;
    int y = 5;

    printf("Hasilnya adalah :");
    recursive(x, y);
    return 0;
}

int recursive(int a, int b) {
    if (a == 0) {
        return b; // base case
    }

    printf("a = %d, b = %d\n", a, b);

    return recursive(a - 1, b);
}
