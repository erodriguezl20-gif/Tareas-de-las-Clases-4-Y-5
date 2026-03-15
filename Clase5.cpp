#include <iostream>
using namespace std;
main (){
	
	// i++ , i+=1 , i=i+1
	//condicion es verdadera el ciclo se sigue ejecutando
	
	/*
	int i = 0;
	while(i<5){
		cout<<i<<endl;
		i++;
	}
	
	*/
	
	/*
		int i = 5;
	while(i<5){
		cout<<"while"<<i<<endl;
		i++;
	} */
	
	char respuesta;
	
	
		
	do{
			cout<<"desea ingresar otro valor (s/n):";	
			cin>>respuesta;
		
		}while(respuesta=='s'|| respuesta== 'S');
		cin>>respuesta;
	
	
	
	
	system( "pause" );
}
