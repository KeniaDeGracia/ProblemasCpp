/*Escribe un programa que lea de la entrada estándar dos números 
y muestre en la salida estándar su suma, resta, multiplicación y división.*/

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#include<iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n1, n2, suma=0, resta=0, multi=0, divi=0;
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 -n2;
	multi = n1 * n2;
	divi = n1 / n2;
	
	cout<<"\nLa suma es : " <<suma<<endl;
	cout<<"\nLa resta es : " <<resta<<endl;
	cout<<"\nLa multi es : " <<multi<<endl;
	cout<<"\nLa divi es : " <<divi<<endl;
	
	return 0;
}
