#include <iostream>
using namespace std;
//punteros con asignacion de memoria Dinamica;
//new = reservar un esapcio de memoria
//delte [] = liberar la memoria
main(){
	
	/*int edad, *p_edad;
	p_edad =&edad;
	cout<<"Ingrese Edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if (*p_edad>18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menor de edad"<<endl;
	} 
	
	int total =0,*p_notas;
	int notas [total]; 
	p_notas = new int [total];
	char res;
	int *p_notas = notas; 
	
	do{
		cout<<"Ingrese Nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea agregar otro valor (s/n): ";
		cin>>res;
	}while (res=='s' || res=='S');
	cout<<"------------- Mostrar Notas ------------"<<endl;
	for (int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
	}
delete[] p_notas; */

	int fil = 0, col=0,**pm_notas;
	cout<<"ingrese la cantidad de Estudiantes: ";
	cin>>fil;
	cout<<"ingrese la cantidad de notas por estudiante: ";
	cin>>col;
	
	pm_notas =new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		   cout<<"_____________Estudiante______________"<<i<<endl; 
		for (int ii=0;ii<col;ii++){
			cout<<"estudiante "<<i<<",nota:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);	
		}
		cout<<"_______________________"<<endl; 	
	}
	cout<<"------------ Mostrar Notas ------------"<<endl;
	
	for (int i=0;i<fil;i++){
		
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;	
		}
		cout<<"_______________________________________"<<endl;	
	}
	
		for(int i=0;i<fil;i++){
			delete [] pm_notas[i];
	}
	delete [] pm_notas;
	
	system ("Pause");
}
