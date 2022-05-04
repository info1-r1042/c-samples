/*!
 * @file   main.c
 * @brief  06. Funciones - Argumentos por Valor - 03. Variables locales
 * @author Javier Balloffet <javier.balloffet@gmail.com>
 * @date   Sep 7, 2018
 */
#include <stdio.h>

void increment();

int main(void)
{
    // Declaro una variable "number" local a la función main().
    int number = 1;

    // Invoco a "increment" y muestro el valor de "number" antes y después de
    // llamar a la función.
    printf("Valor de \"number\" en main() antes de incrementar = %d\n", number);
    increment();
    printf("Valor de \"number\" en main() despues de incrementar = %d\n",
           number);

    return 0;
}

void increment()
{
    // Declaro una variable "number" local a la funcion increment().
    int number = 1;

    // Muestro el valor de "number" antes y después de incrementar.
    printf("Valor de \"number\" en increment() antes de incrementar = %d\n",
           number);
    number++;
    printf("Valor de \"number\" en increment() despues de incrementar = %d\n",
           number);
}
