#include <stdio.h>

int Fibonacci(int num) {
    int a = 0, b = 1, c = 0;

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == num)
        return 1; 
    else
        return 0; 
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (Fibonacci(num))
        printf("%d pertence a sequencia de Fibonacci.\n", num);
    else
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);

    return 0;
}