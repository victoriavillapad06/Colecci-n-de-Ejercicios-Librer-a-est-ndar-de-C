//
// Created by victo on 25/11/2024.
//

#ifndef MAIN_H
#define MAIN_H

#endif //MAIN_H
#include <stdlib.h>
#include <stdio.h>

int main() {
 // Declarar un número negativo
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

    return 0;
}
 {
    char str[] = "Hola mundo";

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

#include <stdio.h>

     int main() {
         FILE *file = fopen("file.txt", "r");
         if (file == NULL) {
             printf("El archivo no se pudo abrir.\n");
             return 1;
         }

         // Cerrar el archivo al final
         fclose(file);
#include <string.h>
#include <stdio.h>

         int main() {
             char str1[] = "Hola";
             char str2[] = "Mundo";

             int comparison = strcmp(str1, str2);

             if (comparison == 0) {
                 printf("Las cadenas son iguales.\n");
             } else {
                 printf("Las cadenas son diferentes.\n");
             }
