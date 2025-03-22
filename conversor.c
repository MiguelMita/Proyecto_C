#include <stdio.h>

// Definir las tasas de cambio (pueden modificarse según la tasa actual)
#define USD_TO_GTZ 7.7   // 1 USD = 7.7 Quetzales (aproximadamente)
#define EUR_TO_GTZ 8.6   // 1 EUR = 8.6 Quetzales (aproximadamente)
#define GTZ_TO_USD 0.13  // 1 Quetzal = 0.13 USD (aproximadamente)
#define GTZ_TO_EUR 0.12  // 1 Quetzal = 0.12 EUR (aproximadamente)

void convertirQuetzales();
void convertirDolares();
void convertirEuros();

int main() {
    int opcion;

    do {
        printf("\n--- Conversor de Monedas ---\n");
        printf("1. Convertir de Quetzales (GTQ)\n");
        printf("2. Convertir de Dolares (USD)\n");
        printf("3. Convertir de Euros (EUR)\n");
        printf("4. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                convertirQuetzales();
                break;
            case 2:
                convertirDolares();
                break;
            case 3:
                convertirEuros();
                break;
            case 4:
                printf("¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida, intenta de nuevo.\n");
        }
    } while(opcion != 4);

    return 0;
}

// Función para convertir de quetzales a otras monedas
void convertirQuetzales() {
    int opcion;
    float cantidad;

    printf("\n--- Conversión de Quetzales ---\n");
    printf("Ingresa la cantidad en Quetzales (GTQ): ");
    scanf("%f", &cantidad);

    printf("Selecciona a qué moneda deseas convertir:\n");
    printf("1. A Dólares (USD)\n");
    printf("2. A Euros (EUR)\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("%.2f Quetzales son equivalentes a %.2f Dólares estadounidenses.\n", cantidad, cantidad * GTZ_TO_USD);
            break;
        case 2:
            printf("%.2f Quetzales son equivalentes a %.2f Euros.\n", cantidad, cantidad * GTZ_TO_EUR);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

// Función para convertir de dólares a otras monedas
void convertirDolares() {
    int opcion;
    float cantidad;

    printf("\n--- Conversión de Dólares ---\n");
    printf("Ingresa la cantidad en Dólares (USD): ");
    scanf("%f", &cantidad);

    printf("Selecciona a qué moneda deseas convertir:\n");
    printf("1. A Quetzales (GTQ)\n");
    printf("2. A Euros (EUR)\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("%.2f Dólares son equivalentes a %.2f Quetzales.\n", cantidad, cantidad * USD_TO_GTZ);
            break;
        case 2:
            printf("%.2f Dólares son equivalentes a %.2f Euros.\n", cantidad, cantidad * USD_TO_GTZ / EUR_TO_GTZ);  // Conversion de USD a EUR usando las tasas intermedias
            break;
        default:
            printf("Opción no válida.\n");
    }
}

// Función para convertir de euros a otras monedas
void convertirEuros() {
    int opcion;
    float cantidad;

    printf("\n--- Conversión de Euros ---\n");
    printf("Ingresa la cantidad en Euros (EUR): ");
    scanf("%f", &cantidad);

    printf("Selecciona a qué moneda deseas convertir:\n");
    printf("1. A Quetzales (GTQ)\n");
    printf("2. A Dólares (USD)\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("%.2f Euros son equivalentes a %.2f Quetzales.\n", cantidad, cantidad * EUR_TO_GTZ);
            break;
        case 2:
            printf("%.2f Euros son equivalentes a %.2f Dólares estadounidenses.\n", cantidad, cantidad * EUR_TO_GTZ / USD_TO_GTZ);  // Conversion de EUR a USD usando las tasas intermedias
            break;
        default:
            printf("Opción no válida.\n");
    }
}
