#include <stdio.h>

void convertirMoneda(float cantidad, int opcionOrigen, int opcionDestino) {
    float tasa[3][3] = {
        {1.0, 0.13, 0.12},  // Quetzal a Quetzal, Dólar, Euro
        {7.8, 1.0, 0.91},   // Dólar a Quetzal, Dólar, Euro
        {8.6, 1.10, 1.0}    // Euro a Quetzal, Dólar, Euro
    };
    
    float resultado = cantidad * tasa[opcionOrigen - 1][opcionDestino - 1];
    printf("Resultado: %.2f\n", resultado);
}

int main() {
    int opcionOrigen, opcionDestino;
    float cantidad;
    
    printf("Conversor de Monedas\n");
    printf("1. Quetzales\n2. Dólares\n3. Euros\n");
    
    printf("Seleccione la moneda de origen (1-3): ");
    scanf("%d", &opcionOrigen);
    
    printf("Seleccione la moneda de destino (1-3): ");
    scanf("%d", &opcionDestino);
    
    if (opcionOrigen < 1 || opcionOrigen > 3 || opcionDestino < 1 || opcionDestino > 3) {
        printf("Opción no válida.\n");
        return 1;
    }
    
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);
    
    convertirMoneda(cantidad, opcionOrigen, opcionDestino);
    
    return 0;
}