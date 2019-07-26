
#include<iostream>
#include<iomanip> 
#include<string>  
#include <cstdlib>
#include <ctime>
#ifndef MATRIZ_CPP
#define MATRIZ_CPP

using namespace std;
class Matriz{
	private:
		int f;
		int c;
		int ** m;
				
	public:		
		// Vacio
		Matriz() {
			
			this->f = 5;
			this->c = 5;
			
			m = new int *[f];
			
			for(int i = 0; i < f; i++){
				m[i] = new int[c];
			}
			
			for (int i = 0; i < f; i++) {
				for (int j = 0; j < c; j++) {
					m[i][j] = (rand()% 99)+ 1;
				}
			}
			// Imprimir la matriz
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					if (m[i][j] < 10) {
						cout << "[0" << m[i][j] << "]";
					}else{
						cout<< "[" << m[i][j] << "]";
					}
				
				}
				cout<<endl;
			}
		}
		
		Matriz(int f, int c) {
			
			this->c = c;
			this->f = f;
			
			
			m = new int *[f];
			
			for(int i = 0; i < f; i++){
				m[i] = new int[c];
			}
			
			for (int i = 0; i < f; i++) {
				for (int j = 0; j < c; j++) {
					m[i][j] = (rand()% 99)+ 1;
				}
			}
			// Imprimir la matriz
			for (int i = 0; i < f; i++) {
				for (int j = 0; j < c; j++) {
					if (m[i][j] < 10) {
						cout << "[0" << m[i][j] << "]";
					}else{
						cout<< "[" << m[i][j] << "]";
					}
				
				}
				cout<<endl;
			}			
		}
		
		void setFilas(int x) {
			f = x;
		}
		
		void setColumnas(int x) {
			c = x;
		}

		int getFilas () {
			return f;
		}
		
		int getColumnas() {
			return c;
		}
		
		int** getMatriz(){
			return m;
		}
		
		bool suma(Matriz n) {
			if (f == n.getFilas() and c == n.getColumnas()) {	
				int r[f][c];
				
				// Imprimir la matriz
				for (int i = 0; i < f; i++) {
					for (int j = 0; j < c; j++) {
						if (m[i][j] < 10) {
							cout << "[0" << m[i][j] << "]";
						}else{
							cout<< "[" << m[i][j] << "]";
						}
					
					}
					cout<<endl;
				}
				
				for (int i = 0; i < f; i++) {
					for (int j = 0; j < c; j++) {
						r[i][j] = m[i][j] + n.getMatriz()[i][j];
					}
				}
				
				cout << "Resultado: " << endl;
				
				// Imprimir la matriz
				for (int i = 0; i < f; i++) {
					for (int j = 0; j < c; j++) {
						if (r[i][j] < 10) {
							cout << "[0" << r[i][j] << "]";
						}else{
							cout<< "[" << r[i][j] << "]";
						}
					
					}
					cout<<endl;
				}	
				
				
				return true;
			}else{
				cout << "NELES" << endl;
				return false;
			}			
		}

		bool resta(Matriz n) {
			if (f == n.getFilas() and c == n.getColumnas()) {	
				int r[f][c];
				// Imprimir la matriz
				for (int i = 0; i < f; i++) {
					for (int j = 0; j < c; j++) {
						if (m[i][j] < 10) {
							cout << "[0" << m[i][j] << "]";
						}else{
							cout<< "[" << m[i][j] << "]";
						}
					
					}
					cout<<endl;
				}
				
				for (int i = 0; i < f; i++) {
					for (int j = 0; j < c; j++) {
						r[i][j] = m[i][j] - n.getMatriz()[i][j];
					}
				}
				
				cout << "Resultado: " << endl;
				
				// Imprimir la matriz
				for (int i = 0; i < f; i++) {
					for (int j = 0; j < c; j++) {
						if (r[i][j] < 10 && r[i][j] > -1) {
							cout << "[0" << r[i][j] << "]";
						}else{
							cout<< "[" << r[i][j] << "]";
						}
					
					}
					cout<<endl;
				}	
				
				
				return true;
			}else{
				cout << "NELES" << endl;
				return false;
			}			
		}	
		
		void multi(int num) {
			
				// Imprimir la matriz
				for (int i = 0; i < f; i++) {
					for (int j = 0; j < c; j++) {
						if (m[i][j] < 10 && m[i][j] > -1) {
							cout << "[0" << m[i][j] << "]";
						}else{
							cout<< "[" << m[i][j] << "]";
						}
					
					}
					cout<<endl;
				}
				
				
				cout << "Resultado: " << endl;
	
				int r[f][c];
				
				for (int i = 0; i < f; i++) {
					for (int j = 0; j < c; j++) {
						r[i][j] = m[i][j] * num;
					}
				}
				
				
				// Imprimir la matriz
				for (int i = 0; i < f; i++) {
					for (int j = 0; j < c; j++) {
						if (r[i][j] < 10 && r[i][j] > -1) {
							cout << "[0" << r[i][j] << "]";
						}else{
							cout<< "[" << r[i][j] << "]";
						}
					
					}
					cout<<endl;
				}	
							
		}	
		
		~Matriz() {};
		
		
		
	
};

#endif
