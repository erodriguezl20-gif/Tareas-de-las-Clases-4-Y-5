#include <iostream>
using namespace std;
//Metodos y funciones = ejecutan una porcion de codigo
//metodo = no retorna un tipo de dato
void suma(int &num1,int &num2){
	int resultado = 0;
	num1+=1; //11
	num2+=1;//21
	resultado = num1+num2; // 32
	cout<<resultado<<endl;
}

int suma(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}

 main(){
 	
 	int a=10, b = 20;
 	suma(a,b);
 	cout<<"a: "<<a<<endl;
 	cout<<"b: "<<b<<endl;
 /*	cout<<suma2(10,20)<<endl;
 	cout<<suma3(10,20,40)<<endl;
 	*/
 	system("pause");
 }
