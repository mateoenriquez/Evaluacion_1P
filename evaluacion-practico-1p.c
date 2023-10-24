#include <stdio.h>

    /*Diseñe un programa que reciba como dato un número entero y a partir de 
    este genere un número de un dígito (entre 0 y 9) sumando los dígitos tantas 
    veces como sea necesario.*/

//Inicializamos una funcion para la suma y descomposicion de los digitos con la ayuda de un while
int sumarDigitos(int num) {
    int suma = 0;
    while (num > 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}
