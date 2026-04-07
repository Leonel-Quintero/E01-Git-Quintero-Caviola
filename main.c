#include <stdio.h>

void primero();
void segundo();
void iguales();

int main() {
    int num1, num2;
if (num1 > num2) {
        primero();
    } else if (num2 > num1) {
        segundo();
    } else {
        iguales();
    }

    return 0;
}
