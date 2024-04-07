



#ifndef __metodos__
#define __metodos__


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <list>
#include <map>
#include <deque>
#include <fstream>
using namespace std;

void codificacion(){

        vector<int>datos;

        for(int i=0; i<20; i++){

                datos.push_back(i);
        }

        for(int i=0; i< datos.size(); i++){

                cout<<datos[i]<<"|";
        }

        cout<<endl;

        /*eliminar el datos de un array en el vector */

        datos.pop_back();

        for(int i=0; i<datos.size(); i++){

                cout<<datos[i]<<"|";


void elimina_posiciones(){


	vector<int>numero;
	/*ingresar los numeros al vector*/

	for(int i=0; i<10; i++){

		numero.push_back(i);
	}

	/*mostrar los datos de los vectores*/
	cout<<"\n\n";

	numero.erase(numero.begin()+1,numero.begin()+3);

	for(int i=0; i<numero.size();i++){


		cout<<numero[i]<<"|";
	}
}


#endif
