#define FUNCIONES_PROYECTO_FINAL_H

#include <stdio.h>

#define MATERIALES 4
#define DIAS 7

void capturarPrecios(float precios[]) {
    const char nombres[MATERIALES][20] = {"PET", "Carton", "Vidrio", "Aluminio"};
    int resultado;

    for (int i = 0; i < MATERIALES; i++) {
        do {
            printf("Precio por kilo de %s: ", nombres[i]);
            resultado = scanf("%f", &precios[i]);

            if (resultado != 1) {
                printf("ERROR: Ingrese solo numeros\n");
                precios[i] = -1;
                scanf("%*s"); // limpia el dato incorrecto
            } 
            else if (precios[i] <= 0) {
                printf("Error: el precio debe ser mayor que 0.\n");
            }
        } while (precios[i] <= 0);
    }
    printf("Precios capturados con exito\n");
}

void capturarKg(float kg[MATERIALES][DIAS]) {
    const char nombres[MATERIALES][20] = {"PET", "Carton", "Vidrio", "Aluminio"};
    const char dias[DIAS][20] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    int opcionMaterial;
    int dia;
    int resultado;

    do {
        printf("\n.....Elige el material que deseas vender.....\n");
        printf("1. PET\n");
        printf("2. Carton\n");
        printf("3. Vidrio\n");
        printf("4. Aluminio\n");
        printf("5. Terminar captura y regresar al menu principal\n");
        printf("Opcion: ");
        resultado = scanf("%d", &opcionMaterial);

        if (resultado != 1) {
            printf("ERROR: Ingrese solo numeros.\n");
            opcionMaterial = 0;
            scanf("%*s");
        }

        if (opcionMaterial >= 1 && opcionMaterial <= 4) {
            int materialIndex = opcionMaterial - 1;

            printf("\n----- ¿PARA QUÉ DÍA ES LA VENTA? -----\n");
            printf("1) Lunes\n2) Martes\n3) Miercoles\n4) Jueves\n5) Viernes\n6) Sabado\n7) Domingo\n");
            printf("Opcion: ");
            resultado = scanf("%d", &dia);

            if (resultado != 1) {
                printf("ERROR: Ingrese solo numeros.\n");
                dia = 0;
                scanf("%*s");
            }

            if (dia >= 1 && dia <= 7) {
                int diaIndex = dia - 1;
                printf("Ingrese los kilos de %s que trae para vender: ", nombres[materialIndex]);
                resultado = scanf("%f", &kg[materialIndex][diaIndex]);

                if (resultado != 1) {
                    printf("ERROR: Ingrese solo numeros.\n");
                    scanf("%*s");
                } 
                else if (kg[materialIndex][diaIndex] < 0 || kg[materialIndex][diaIndex] > 1000) {
                    printf("ERROR: valor fuera de rango (0 - 1000).\n");
                } 
                else {
                    printf("¡Venta registrada exitosamente!\n");
                    printf("Se registraron %.2f kg de %s.\n", kg[materialIndex][diaIndex], nombres[materialIndex]);
                }

            } else {
                if (dia != 0)
                    printf("Dia no valido.\n");
            }

        } else if (opcionMaterial != 5 && opcionMaterial != 0) {
            printf("Opcion no valida.\n");
        }

    } while (opcionMaterial != 5);

    printf("Regresando al menu principal...\n");
}

void mostrarReportes(float precios[], float kg[MATERIALES][DIAS]) {
    const char nombres[MATERIALES][20] = {"PET", "Carton", "Vidrio", "Aluminio"};
    float totalMaterial, totalGeneral = 0;

    printf("\n===== REPORTE DE INGRESOS ESTIMADOS =====\n");
    for (int i = 0; i < MATERIALES; i++) {
        totalMaterial = 0;
        for (int j = 0; j < DIAS; j++) {
            totalMaterial += kg[i][j];
        }
        float ingreso = totalMaterial * precios[i];
        totalGeneral += ingreso;
        printf("%s: %.2f kg — $%.2f de ingreso\n", nombres[i], totalMaterial, ingreso);
    }
    printf("------------------------------------------\n");
    printf("TOTAL SEMANAL ESTIMADO: $%.2f\n", totalGeneral);
}