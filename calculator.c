#include <stdio.h>

int main() {

    float numero1 = 0;
    float numero2 = 0;
    float result = 0;
    int opcion;

    printf("Hola! bienvenido a la calculadora mas cientifica y epica de todas, por favor introduce 2 numeros para hacer las operaciones\n");

    do {
        printf("\nIntroduce el primer numero: ");
        scanf("%f", &numero1);

        printf("Introduce el segundo numero: ");
        scanf("%f", &numero2);

        printf("\nIntroduce la operacion que quieres:\n");
        printf("1. Dividir\n");
        printf("2. Multiplicar\n");
        printf("3. Restar\n");
        printf("4. Sumar\n");
        printf("0. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                result = numero1 / numero2;
                printf("tu resultado es: %.2f\n", result);
                break;
            case 2:
                result = numero1 * numero2;
                printf("tu resultado es: %.2f\n", result);
                break;
            case 3:
                result = numero1 - numero2;
                printf("tu resultado es: %.2f\n", result);
                break;
            case 4:
                result = numero1 + numero2;
                printf("tu resultado es: %.2f\n", result);
                break;
            case 0:
                printf("saliendo de la calculadora :)...\n");
                break;
            default:
                printf("opcion no valida, intentalo de nuevo\n");
        }

    } while (opcion != 0);

    return 0;
}