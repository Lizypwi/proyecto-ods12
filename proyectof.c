
#include <stdio.h>
#include "Funciones_proyecto_final.h"

#define MATERIALES 4
#define DIAS 7

int main() {
    float precios[MATERIALES] = {0};
    float kg[MATERIALES][DIAS] = {{0}};
    int opcion;
    int preciosCapturados = 0;
    int resultado;

    printf("\tConsola del centro de acopio de Ecopuntos Tapachula (ODS 12)\n");

    do {
        printf("\n.....MENU PRINCIPAL.....\n");
        printf("1) Capturar precios por kilo\n");
        printf("2) Capturar kilos por material y dia\n");
        printf("3) Generar reporte\n");
        printf("4) Salir\n");
        printf("Selecciona una opcion: ");
        
        resultado = scanf("%d", &opcion);

        if (resultado != 1) {
            printf("Error: Ingrese solo numeros, no letras.\n");
            opcion = 0; 
            scanf("%*s"); 
        }

        if (opcion < 1 || opcion > 4) {
            if (opcion != 0)
                printf("Error, opcion no valida, intente de nuevo.\n");
            continue;
        }

        switch (opcion) {
            case 1: 
                capturarPrecios(precios);
                preciosCapturados = 1;
                break;
            case 2: 
                if (preciosCapturados) {
                    capturarKg(kg);
                } else {
                    printf("ERROR: Primero debe capturar los precios (opcion 1).\n");
                }
                break;
            case 3: 
                if (preciosCapturados) {
                    mostrarReportes(precios, kg);
                } else {
                    printf("ERROR: Primero debe capturar los precios (opcion 1).\n");
                }
                break;
            case 4: 
                printf("Saliendo del sistema...\n"); 
                break;
        }

    } while (opcion != 4);

    return 0;
}