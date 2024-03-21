#include <iostream>
using namespace std;
int main() {

//Arreglo bidimensionales, matriz, tabla

int fil=0,col=0;
cout<<"ingresar filas:";
cin >> fil;
cout<<"ingresar Columnas:";
cin >> col;
int matriz[fil][col];

cout << "---------- Ingresar ----------"<<endl;
for (int i=0;i<fil;i++){
	for(int ii=0;ii<col;ii++){
		cout<<i<<","<<ii<<":";
		cin>>matriz[i][ii];
	}
}

cout << "---------- Mostrar ----------"<<endl;
for (int i=0;i<fil;i++){
	for(int ii=0;ii<col;ii++){
		cout<<i<<","<<ii<<":"<<matriz[i][ii]<<endl;
	}
}
/*
	string semana[7]={"Lunes","Martes","Miercoles","jueves","Viernes","Sabado","Domingo"};//
 	
 	semana[3]="Jueves";
 	for (int i=0;i<7;i++){
 		cout<<semana[i]<<endl;
	 }
*/
/*
	string nombre;//
	int dato;
	cout << "Ingrese dato.";
	cin>>dato;
	cin.ignore();
	cout <<"Ingrese Nombre Completo;";
	//cin>>nombre;
	getline(cin,nombre); 
	cout<<nombre<<endl;
*/

system("pause");

/*
	char nombre[30];//
	cout <<"Ingrese Nombre Completo;";
	//cin>>nombre;
	cin.get(nombre,30); 
	cout<<nombre<<endl;
*/
	
}

