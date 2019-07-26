// Aqui es el main

// Importar
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "Matriz.cpp"
#include "Bitacora.cpp"

// Profundizar
using namespace std;

int main() {
	srand((int)time(0));
	int op = 0;
	Matriz * m;
	Bitacora bit;
	
	// Menu	
	cout << "Antes de empezar! Como desea su matriz?" << endl;
	cout << "1. 5x5 aleatorio" << endl;
	cout << "2. Dar dimensiones" << endl;
	cout << "Opcion: " << endl;
	cin >> op;
	
			
	if (op == 1) {			
		m = new Matriz();
	}
	
	if (op == 2) {
		int f, c;
		cout << "Ingrese las filas: ";
		cin >> f;
		cout << "Ingrese las columnas: ";
		cin >> c;
		m = new Matriz(f,c);		
	}
	
	op = 0;
	
	cout << endl;
	
	while (op != 5) {	
		cout << "Menu: " << endl;
		cout << "1. Sumar con otra matriz" << endl;
		cout << "2. Restar con otra matriz" << endl;
		cout << "3. Multiplicar por un numero" << endl;
		cout << "4. Imprimir bitacora" << endl;
		cout << "5. Salir" << endl;
		cout << "Opcion: ";
		cin >> op;
		
		cout << endl;
		
		if (op == 1) {
			cout << "Sumar" << endl;
			int f, c;
			cout << "Ingrese las filas: ";
			cin >> f;
			cout << "Ingrese las columnas: ";
			cin >> c;
			
			Matriz * n = new Matriz(f,c);
			
			cout << " + " << endl;
			
			bool t = m->suma(*n);
						
			bit.add("Suma",t);
			
		}
		
		if (op == 2) {
			cout << "Resta" << endl;
			int f, c;
			cout << "Ingrese las filas: ";
			cin >> f;
			cout << "Ingrese las columnas: ";
			cin >> c;
			
			Matriz * n = new Matriz(f,c);
			
			cout << " - " << endl;
			
			bool t = m->resta(*n);
			
			bit.add("Resta",t);
		}
		
		if (op == 3) {
			int num;
			cout << "Multiplicamos" << endl;
			cout << "Ingrese el numero: ";
			cin >> num;
			
			m->multi(num);
			
			bit.add("Multiplicacion",true);
			
		}
		
		if (op == 4) {
			bit.print();
		}
		
		
		cout<<endl;
		
	
	}	
	
	return 0;
}


