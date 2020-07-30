
#include <iostream>
#include<stdio.h>
#include<string>
#include<sstream>
#include <math.h>
#include <cmath>

using namespace std;

std::string toString(double i) {
	std::stringstream ss;
	ss << i;
	return ss.str();
}

int main()
{
	system("color 9");
	cout << "Bienvendido, seleccione una opcion.";
	int respuesta;
	bool continuar = true;
	int cantidad = 1;
	double pi = 3.14159265358979323846;
	do {
		if (cantidad != 1) {
			cout << "Vuelva a seleccionar una opcion.";
		}

		cantidad++;
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
		cout << "10. Calcular el equivalene en grados Celsius de un valor de temperatura dado en Fahrenheit\n";
		cout << "0. Salir.";
		cout << "\n----------------------------------------------------------------------------------------------------------------\n\n";
		cout << "Cual opcion desea seleccionar? ";
		scanf_s("%d", &respuesta);
		string resultado;
		switch (respuesta)
		{

		case 1: {
			system("cls");
			double numero = 0;
			cout << "1. Escribir un numero y sera dividido entre 2.\n";
			cout << "Escriba un numero.\n";
			cin >> numero;

			numero /= 2;
			resultado = "El resultado es " + toString(numero);

			cout << resultado << '\n';
			system("pause");
			break;
		}

		case 2:
		{
			system("cls");
			double numero = 0;
			cout << "2. Algoritmo que lea un numero entero, lo multiplica por dos.\n";
			cout << "Escriba un numero.\n";
			cin >> numero;

			numero *= 2;
			resultado = "El resultado es " + toString(numero);

			cout << resultado << '\n';
			system("pause");
			break;
		}

		case 3:
		{
			system("cls");
			double numero1 = 0, numero2 = 0;
			cout << "3. Programa que suma, resta, multiplica y divide dos numeros y muestre los resultados.\n";
			cout << "Escriba el primer numero.\n";
			cin >> numero1;
			cout << "Escriba el segundo numero.\n";
			cin >> numero2;

			double suma = numero1 + numero2,
				resta = numero1 - numero2,
				multi = numero1 * numero2,
				divi = numero1 / numero2;

			cout << "El resultado de la suma es: " + toString(suma) + '\n';
			cout << "El resultado de la resta es: " + toString(resta) + '\n';
			cout << "El resultado de la multiplicacion es: " + toString(multi) + '\n';
			cout << "El resultado de la division es: " + toString(divi) + '\n';

			system("pause");
			break;
		}

		case 4:
		{
			system("cls");
			int totalAlumnos = 0, n_h = 0, n_m = 0;
			double p_h, p_m;
			cout << "4. Un profesor desea saber que porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.\n";
			cout << "Ingrese el total de hombres.\n";
			cin >> n_h;
			cout << "Escriba el total de mujeres.\n";
			cin >> n_m;
			totalAlumnos = n_h + n_m;

			p_h = n_h * 100 / totalAlumnos;
			p_m = n_m * 100 / totalAlumnos;

			cout << "Porcentaje de Hombres: " + toString(p_h) + "%" + '\n';
			cout << "Porcentaje de Mujeres: " + toString(p_m) + "%" + '\n';

			system("pause");
			break;
		}

		case 5:
		{
			system("cls");
			double base = 0, altura = 0, respuesta = 0;
			cout << "5. Algoritmo que calcula el area de un rectangulo.\n";
			cout << "Ingrese la base.\n";
			cin >> base;
			cout << "Ingrese la altura.\n";
			cin >> altura;

			respuesta = (base * altura);

			cout << "El area del rectangulo es: " + toString(respuesta) + '\n';

			system("pause");
			break;
		}

		case 6:
		{
			system("cls");
			double base = 0, altura = 0, respuesta = 0;
			cout << "6. Algoritmo que calcula el area de un triangulo.\n";
			cout << "Ingrese la base.\n";
			cin >> base;
			cout << "Ingrese la altura.\n";
			cin >> altura;

			respuesta = (base * altura) / 2;

			cout << "El area del triangulo es: " + toString(respuesta) + '\n';

			system("pause");
			break;
		}

		case 7:
		{
			system("cls");
			double radio = 0, area = 0, longitud = 0;
			cout << "7. Calcular la longitud y el area de una circunferencia dado el radio.\n";
			cout << "Ingrese el radio.\n";
			cin >> radio;

			longitud = 2 * pi * radio;
			area = pi * pow(radio, 2);

			cout << "La longitud es: " + toString(longitud) + '\n';
			cout << "La circunferencia es: " + toString(area) + '\n';

			system("pause");
			break;
		}

		case 8:
		{
			system("cls");
			double radio = 0, volumenEsfera = 0;
			cout << "8. Calcular el volumen de una esfera.\n";
			cout << "Ingrese el radio.\n";
			cin >> radio;

			volumenEsfera = (4 * pi * pow(radio, 3)) / 3;

			cout << "El area del triangulo es: " + toString(volumenEsfera) + '\n';

			system("pause");
			break;
		}

		case 9:
		{
			system("cls");
			double celsius = 0, fahrenheit = 0;
			cout << "9. Calcular el equivalene en grados Fahrenheit de un valor de temperatura dado en Celsius.\n";
			cout << "Ingrese los grados Celsius.\n";
			cin >> celsius;

			fahrenheit = (celsius * 9) / 5 + 32;

			cout << "La conversion en grados Fahrenheit es: " + toString(fahrenheit) + '\n';

			system("pause");
			break;
		}
		case 10:
		{
			system("cls");
			double celsius, fahrenheit;
			cout << "10. Calcular el equivalene en grados Celsius de un valor de temperatura dado en Fahrenheit.";
			cout << "Ingrese los grados Fahrenheit.\n";
			cin >> fahrenheit;

			celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
			cout << "La conversion en grados Celsius es: " + toString(celsius) + '\n';

			system("pause");
			break;
		}
		case 0:
			cout << "Hasta luego. ";
			continuar = false;
			break;
		default:
			cout << "Opción no encontrada incorrecto.\n";
			system("pause");
			break;
		}
		system("cls");
		resultado = "";
	} while (continuar);
}

