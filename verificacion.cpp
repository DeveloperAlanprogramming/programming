
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
	}

	cout<<endl;


}



int main(){


	codificacion();


	return 0;
}

