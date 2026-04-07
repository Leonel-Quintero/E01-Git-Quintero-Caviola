#include <stdio.h>

void primero();
void segundo();
void iguales();

int main() {
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        primero();
    } else if (num2 > num1) {
        segundo();
    } else {
        iguales();
    }

    return 0;
}

void primero() {
    printf("El primer número ingresado es el mayor.\n");
}

void segundo() {
    printf("El segundo número ingresado es el mayor.\n");
}

void iguales() {
    printf("Ambos números son iguales.\n");
}
