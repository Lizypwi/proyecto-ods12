# 💻 Título del Proyecto

## 📄 Introducción

[**El proyecto esta creado para ayudar a resolver la ODS 12 que es Produccion y consumo responsable. tiene como tarea tener el registro de las ventas en un centro de acopio de materiales
reciclables donde el
programa ayuda con el buen manejo de residuos desechables, se tiene el registro de materiales
cuales son PET, cartón, vidrio y aluminio..**]

---

## ▶️ Cómo Compilar y Ejecutar

A continuación se detalla el proceso para compilar y ejecutar el proyecto.

### **Requisitos**
* [**compilador C (ej: GCC) .**]

### **Pasos para la Compilación**

1.  Abre una terminal o símbolo del sistema.
2.  Navega hasta el directorio donde se encuentran los archivos `[proyectof].c` y `[Funciones_proyecto_final].h`.
3.  Utiliza el siguiente comando para compilar el código fuente, incluyendo la librería:
    ```bash
    gcc -o [proyectof.h].c -Wall
    ```
   

### **Pasos para la Ejecución**

Una vez compilado, puedes ejecutar el programa con el siguiente comando:

```bash
./proyectof
   ```
### Casos de prueba
## 🧪 Casos de Prueba

A continuación, se presentan **3 casos de prueba** para verificar el correcto funcionamiento de las principales funcionalidades del sistema.

| Caso | Entrada (Input) | Resultado Esperado (Output) |
| :--- | :--- | :--- |
| **Caso 1:Capturar precios.** | Se ingresan los precios en el siguiente orden: PET: -5.0 (Entrada no válida) PET: 2.50Cartón: 0.0 (Entrada no válida)  Cartón: 1.80Vidrio: 2.00Aluminio: 10.00| El sistema debe mostrar el mensaje de error: "Error: el precio debe ser mayor que 0." dos veces (para -5.0 y 0.0). La función capturarPrecios debe terminar con éxito, y los precios finales guardados deben ser: PET = 2.50, Cartón = 1.80, Vidrio = 2.00, Aluminio = 10.00. |
| **Caso 2: Secuencia de Menú y Precondición** |Iniciar el programa. En el menú principal, seleccionar Opción 2 ("Capturar kilos") sin antes seleccionar la Opción 1. Seleccionar Opción 3 ("Generar reporte") sin antes seleccionar la Opción 1.| Al intentar la Opción 2, el programa debe mostrar: "ERROR: Primero debe capturar los precios (opcion 1)." Al intentar la Opción 3, el programa debe mostrar: "ERROR: Primero debe capturar los precios (opcion 1)." El programa debe continuar mostrando el menú principal' |
| **Caso 3: Cálculo de Reporte (Flujo Completo)** | Opción 1 (Precios): PET = 1.00, Cartón = 2.00, Vidrio = 3.00, Aluminio = 4.00. Opción 2 (Kilos):PET (1): Lunes (1): 10 kg. Cartón (2): Sábado (6): 5 kg.Vidrio (3): Lunes (1): 2 kg.Aluminio (4): (No se ingresa nada, 0 kg). | El reporte final debe mostrar: PET: 10.00 kg — $10.00 de ingreso (10 kg x $1.00)Cartón: 5.00 kg — $10.00 de ingreso (5 kg x $2.00)Vidrio: 2.00 kg — $6.00 de ingreso (2 kg x $3.00)Aluminio: 0.00 kg — $0.00 de ingresoTOTAL SEMANAL ESTIMADO: $26.00|

## 🗂️ División de Tareas

La distribución de responsabilidades y la contribución de cada integrante al proyecto se detalla a continuación.

| Integrantes | Tareas Asignadas |
| :--- | :--- |
| **Arturo Hernández Velázquez** | **Código:** Implementación de las siguientes funciones: [**CapturarPrecios**]. |
| **Natasha Yamileth Pinzón Molina** | **Código:** [**MostrarReporte**]. **Manual de Usuario:** Documentación sobre cómo usar la aplicación. |
| **José Emilio Cajas Ochoa** | **Video:** Creación del video de demostración/presentación. **Código:** [**CapturarKg**]. |
| **Elizabeth Valeria Sánchez Pérez** | **Código:** Implementación del **`main`** (función principal). **Manual Técnico:** Documentación de arquitectura y diseño interno. |
