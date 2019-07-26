
#include<iostream>
#include<iomanip> 
#include<string>  
#include <cstdlib>
#include <ctime>
#include <vector>
#include <bits/stdc++.h> 
#ifndef BITACORA_CPP
#define BITACORA_CPP

using namespace std;

class Bitacora{
	private:
		//declaracion
		vector<string> lista1;
		vector<bool> lista2;
				
	public:
		void add(string op, bool ex) {
			lista1.push_back(op);
			lista2.push_back(ex);
		}
		
		void print() {
			cout << "Bitacora: " << endl;
			
			for(int q=0; q<lista1.size(); q++){ //.size
				if (lista2.at(q)) {
					cout<<lista1.at(q)<< ":" << "Exito"<<endl; // equivalente al .get de java
				}else{
					cout<<lista1.at(q)<< ":" << "Fallido"<<endl; // equivalente al .get de java
				}
			}
		}

};


#endif
