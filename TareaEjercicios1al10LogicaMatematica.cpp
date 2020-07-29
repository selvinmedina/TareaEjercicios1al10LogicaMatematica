// TareaEjercicios1al10LogicaMatematica.cpp : Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi.
//

#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	system("color 9");
    cout << "Bienvendido, seleccione una opcion.\n";
	int respuesta;
	do {

		cout << "\n\n----------------------------------------------------------------------------------------------------------------\n";
		cout << "1. Escribir un numero y sera dividido entre 2.\n";
		cout << "2. Algoritmo que lea un numero entero, lo multiplica por dos.\n";
		cout << "3. Programa que suma, resta, multiplica y divide dos numeros y muestre los resultados.\n";
		cout << "4. Un profesor desea saber que porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.\n";
		cout << "5. Algoritmo que calcula el area de un rectangulo.\n";
		cout << "6. Algoritmo que calcula el area de un triangulo.\n";
		cout << "7. Calcular la longitud y el area de una circunferencia dado el radio.\n";
		cout << "8. Calcular el volumen de una esfera.\n";
		cout << "9. Calcular el equivalene en grados Fahrenheit de un valor de temperatura dado en Celsius.\n";
		cout << "10. Calcular el equivalene en grados Celsius de un valor de temperatura dado en Fahrenheit.";
		cout << "\n----------------------------------------------------------------------------------------------------------------\n\n";
		cout << "Cual opcion desea seleccionar? ";
		cin >> respuesta;

		
	} while (true);
}

