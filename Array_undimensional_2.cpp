#include <iostream>
using namespace std;
int main() {
	int tam=0, suma=0, promedio=0;
	int notas[tam];
	char res;
	do{
		
		tam++;
		cout<<"Ingrese nota " <<tam<<":";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota (s/n):?";
		cin>>res;
	}while(res=='s'||res=='S');
	for(int i=0;i<tam;i++){
		suma+=notas[i];
	}
	promedio =suma/tam;
	
	cout<<"El Promedio es: "<<promedio;

/*	
	for(int i=0;i<tam;i++){
		cout<<notas[i]<<endl;
	}
*/
}

