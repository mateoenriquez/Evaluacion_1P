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

//Agregamos la funcion principal main
int main() {
    int numero; 

    //Variable numero inicializada, se pide numero entero y se asigna lo ingresado a "numero"
    printf("Ingrese un numero entero: ");
    //Con while se limita que la resultante exceda de dos digitos
    scanf("%d", &numero);
        while (numero >= 10) {
        numero = sumarDigitos(numero);
        //Se asigna la variable numero la funcion sumarDigitos
    }
    
    //Resultado
    printf("El numero de un digito resultante es: %d\n", numero);
    
    return 0;
}



