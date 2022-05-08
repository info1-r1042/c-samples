/*!
 * @file   main.c
 * @brief  09. Funciones - Argumentos por Referencia - 02. Intercambiar el
 * contenido de dos variables
 * @author Javier Balloffet <javier.balloffet@gmail.com>
 * @date   Sep 7, 2018
 */
#include <stdio.h>

void swap(int* number1_ptr, int* number2_ptr);

int main(void)
{
    int number1 = 5, number2 = 10;

    // Invoco a "swap", función que intercambia el contenido de dos variables.
    printf("Valor de \"number1\" antes del intercambio = %d\n", number1);
    printf("Valor de \"number2\" antes del intercambio = %d\n", number2);
    swap(&number1, &number2);
    printf("Valor de \"number1\" despues del intercambio = %d\n", number1);
    printf("Valor de \"number2\" despues del intercambio = %d\n", number2);

    return 0;
}

void swap(int* number1_ptr, int* number2_ptr)
{
    // Intercambio el contenido de las variables usando punteros a las mismas.
    int aux;
    aux = *number1_ptr;
    *number1_ptr = *number2_ptr;
    *number2_ptr = aux;
}
