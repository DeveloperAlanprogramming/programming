
#ifndef __metodos__
#define __metodos__

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <list>
#include <deque>
#include <set>
#include <map>
//#include <windows.h>
using namespace std;

void eliminar_posiciones(){


	vector<int> numeros;
	/*metodos para ingresar*/

	for(int i=0; i<20; i++){

		numeros.push_back(i);
	}

	/*impresion de los datos*/
	for(int i=0; i< numeros.size();i++){

		cout<<numeros[i]<<"|";
	}

	cout<<endl;

	numeros.erase(numeros.begin() + 1, numeros.begin() + 3);
	for (int i = 0; i < numeros.size(); i++) {

		cout << numeros[i] << "|";
	}

	cout<<"\n";
}

void contenedor_cola(){

	deque<char> letra;

	letra.push_back('A');
	letra.push_back('B');
	letra.push_back('C');
	letra.push_back('D');
	letra.push_back('E');
	letra.push_back('F');
	letra.push_back('G');

	for(int i=0; i<letra.size();i++){

		cout<<letra[i]<<"|";
	}

	cout<<endl;

	letra.pop_front();
	letra.pop_back();

	for(int i=0; i<letra.size();i++){

                cout<<letra[i]<<"|";
        }

        cout<<endl;

}


void contenedor_lista() {

	list<int> data;
	list<int> dato;
	list<int> orden;


	for (int i = 0; i < 40; i++) {


		data.push_front(i);
	}

	cout << "\n\nMostrar los elementos de la lista\n\n";

	list<int>::iterator i;
	i = data.begin();

	while (i != data.end()) {


		cout << *i << "|";
		i++;
	}

	cout << endl;

	for(int i=0; i<30; i++){


		dato.push_back(i);
	}

	list<int>::iterator j;
	j=dato.begin();

	while(j!=dato.end()){

		cout<<*j<<"|";
		j++;
	}

	cout<<"\n\n";


	/*ordenamiento de datos*/


	orden.push_front(-100); 
	orden.push_front(-200);
	orden.push_front(90);
	orden.push_front(-1000);
	orden.push_front(30);
	orden.push_front(200);

	orden.sort();
	list<int>::iterator k;
	k=orden.begin();
	while(k!=orden.end()){


		cout<<*k<<"|";
		k++;
	}

	cout<<endl;
}

#endif
