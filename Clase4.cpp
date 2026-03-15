#include <iostream>
using namespace std;
main(){
	// i++ , i+=1 , i=i+1
	int i =0;
	int contar=0;
	for (int i=1;i<=10;i++){  //variable inicio; finaliza ; incrementar o decrementar
		cout<<i<<endl;
		contar++;
	}
	cout<<"i fuera: "<<i<<endl;
	cout<<"ciclos: "<<contar<<endl;
	
	int tam = 0;
	int datos[] = {10,40,100,250,3000};
	tam = sizeof(datos)  / sizeof(datos[0]));
	cout<<tam<<endl;
	}
	
	/*
	ford (int i=0;i<tam;i++{
	cout<<datos[i]<<endl
}
*/
	int inicio = 0,fin = 0,res = 0;
/*	int tabla = 0, res = 0; */
	
	
	cout<<"ingresar Tablas inicial: ";
	cin>>inicio;
	cout<<"ingresar Tabla Final: ";
	cin>>fin;
	
	for (int rango=inicio;rango<=fin;rango++){
	cout<<"tabla del "<<rango<<endl;
	
	
	
	for (int i=1,i<=10;i++){
		res = rango * i;
		cout<<rango<<" x "<< i <<" = "<<res<<endl;
	}
	
	



	system("pause");
	
}
