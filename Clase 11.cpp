#include <iostream>
using namespace std;
//estructuras struct ( una forma de variables 
struct estudiante{
	int *codigo;
	string *nombre;
	int **nota;
};
main(){
	
	estudiante estudiante;
	
	int fila = 0,columna= 0;
	cout<<"cuantos estudiantes desea agregar:";
	cin>>fila;
	
	cout<<"cuantos notas por estudiante desea agregar:";
	cin>>columna;
	
	estudiante.codigo =new int[fila];
	estudiante.nombre= new string[fila];
	estudiante.nota= new int *[fila];
	for (int i=0;i<fila;i++){
		estudiante.nota[i] = new int[columna];
	}
	cout<<"____________________ ingreso de notas: ____________________ "<<endl;
	for (int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"ingrese Nota["<<ii<<"] :";
			cin>>*(*(estudiante.nota+i)+ii);	
		}
		cout<<"_______________________________"<<endl;
	}
	cout<<"_______________ Mostrar datos _______________"<<endl;
	
		for (int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"ingrese Nota["<<ii<<"] :"<<*(*(estudiante.nota+i)+ii)<<endl;	
		}
		cout<<"_______________________________"<<endl;
	}
	
	
	for (int i=0;i<fila;i++){
		delete[] estudiante.nota[i] ;
	}
	
		delete[] estudiante.codigo ;
		delete[] estudiante.nombre ;
		delete[] estudiante.nota ;
	
	
	/*
	for (int i=0;i<4;i++){
		cout<<"____________________________"<<endl;
		cout<<"Ingrese Codigo: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,estudiante.nombre[i]);
	cout<<"Ingrese Nota: ";
	cin>>estudiante.nota[i];
	}	
	
		for (int i=0;i<4;i++){
			cout<<"____________________________"<<endl;
			cout<<"codigo:"<<estudiante.codigo[i]<<endl;
			cout<<"Nombre Completo:"<<estudiante.nombre[i]<<endl;
			cout<<"nota:"<<estudiante.nota[i]<<endl;
		}
	
	*/
	
	system("pause");
}
