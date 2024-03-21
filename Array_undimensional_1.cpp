#include <iostream>
using namespace std;
int main() {


//    int notas[4]={80,65,65,75};
	int tam=0,suma=0,promedio=0;
	cout<<"Cuantos notas desea ingresar";
	cin >> tam; // 5
	int notas[tam];
	 for(int i=0;i<tam;i++){
		cout<<"Ingrese Nota"<<i<<":";
		cin >> notas[i];		
	}
	for(int i=0;i<tam;i++){
		suma+= notas[i];
	}
	promedio = suma/ tam;
		cout<<"El promedioes: " <<promedio <<endl;
    
/*
--- ejempl for
	notas[0] = 80; // Nota
    notas[1] = 65; // Nota
    notas[2] = 65; // Nota
    notas[3] = 75; // Nota

	for(int i=0;i<4;i++){
		cout <<i <<":"<< notas[i] <<endl;
	}
	
--- primer ejemplo	
    cout << notas[0] <<endl;
	cout << notas[1] <<endl;
    cout << notas[2] <<endl;
    cout << notas[3] <<endl;


    notas[2] = 75; // Nota
    cout <<"Valor Modificado (2) " <<notas[2] <<endl;
 */   
    
system("pause");

    }
