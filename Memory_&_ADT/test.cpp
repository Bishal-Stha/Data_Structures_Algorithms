#include <stdio.h>

void fun(int n, int depth) {
    // Print entering the function
    for (int i = 0; i < depth; i++)
        printf("  ");
    printf("fun(%d) called\n", n);

    if (n <= 1)
        return;

    fun(n - 1, depth + 1);
    fun(n - 1, depth + 1);

    // Print exiting the function
    for (int i = 0; i < depth; i++)
        printf("  ");
    printf("fun(%d) returns\n", n);
}

int main() {
    fun(3, 0);
    return 0;
}
