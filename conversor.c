#include <stdio.h>

int main() {
    int option;
    float quantity, result;
    
    // Tasas de cambio exactas
    const float change_rate_usd_quetzal = 7.7024; // USD a GTQ
    const float change_rate_euro_quetzal = 8.406; // EUR a GTQ 
    const float change_rate_usd_euro = 0.9167; // USD a EUR
    const float change_rate_quetzal_usd = 0.1298; // GTQ a USD
    const float change_rate_quetzal_euro = 0.119; // GTQ a EUR
    const float change_rate_euro_usd = 1.0908; // EUR a USD

    while (1) {  // Bucle infinito para seguir haciendo conversiones
        printf("\nConvertidor de divisas\n");
        printf("\n1. Convertir de USD a GTQ\n");
        printf("2. Convertir de GTQ a USD\n");
        printf("3. Convertir de EUR a GTQ\n");
        printf("4. Convertir de GTQ a EUR\n");
        printf("5. Convertir de USD a EUR\n");
        printf("6. Convertir de EUR a USD\n");
        printf("7. Salir\n");  // Opción para salir
        printf("\nSeleccione una opción: ");
        scanf("%d", &option);

        if(option == 1) {  // Convertir USD a GTQ
            printf("Ingrese la cantidad en dolares: ");
            scanf("%f", &quantity);  
            result = quantity * change_rate_usd_quetzal;
            printf("%.2f dolares son %.2f quetzales.\n", quantity, result);  
        }
        else if(option == 2) {  // Convertir GTQ a USD
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &quantity);
            result = quantity * change_rate_quetzal_usd;
            printf("%.2f quetzales son %.2f dolares.\n", quantity, result);
        }
        else if(option == 3) {  // Convertir EUR a GTQ
            printf("Ingrese la cantidad en euros: ");
            scanf("%f", &quantity);
            result = quantity * change_rate_euro_quetzal;
            printf("%.2f euros son %.2f quetzales.\n", quantity, result);
        }
        else if(option == 4) {  // Convertir GTQ a EUR
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &quantity);
            result = quantity * change_rate_quetzal_euro;
            printf("%.2f quetzales son %.2f euros.\n", quantity, result);
        }
        else if(option == 5) {  // Convertir USD a EUR
            printf("Ingrese la cantidad en dolares: ");
            scanf("%f", &quantity);
            result = quantity * change_rate_usd_euro;
            printf("%.2f dolares son %.2f euros.\n", quantity, result);
        }
        else if(option == 6) {  // Convertir EUR a USD
            printf("Ingrese la cantidad en euros: ");
            scanf("%f", &quantity);
            result = quantity * change_rate_euro_usd;
            printf("%.2f euros son %.2f dolares.\n", quantity, result);
        }
        else if(option == 7) {  // Salir
            printf("Gracias por usar mi convertidor de divisas\n");
            break;  // Salir del bucle
        }
        else {
            printf("Intente de nuevo\n");
        }
    }

    return 0;
}
