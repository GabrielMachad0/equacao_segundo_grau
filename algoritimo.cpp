#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	
	float a,b,c,g,e,r,x1,x2;
	
	cout<<"Encontrando o resultado da equaçao do 2grau\n";
	
	cout<<"Modelo de uma equacao:\n";
	cout<<"Ex:. x^2 + 12x _ 13 = 0\n";
	cout<<"Assumindo que a variavel A e unica potencia da equacao "<<endl;
	cout<<"Assumindo a variavel B como o valor acompanhado de x"<<endl;
	cout<<"Assumindo a variavel C como o unico valor comum"<<endl;
	cout<<"Caso o valor seja negativo, ponha o sinal negativo!!"<<endl;
	
	cout<<"Insira a variavel A"<<endl;
	cin>>a;
	cout<<endl;
	cout<<"Insira a variavel B"<<endl;
	cin>>b;
	cout<<endl;
	cout<<"Insira a variavel C"<<endl;
	cin>>c;
	
	
	e = pow(b,2);
	g = e-4 *(a*-c);
	cout<<"o delta vale: "<<g;
	cout<<endl;
	r = sqrt(g);
	
	x1= (b)+r;
	x1 = x1/(2*a);
	cout<<"Efetuando Bhaskara com o delta positivo obtemos o valor: "<<x1<<endl;
	
	
	x2= (b)-r;
	x2 = x2/(2*a);
	cout<<"Efetuando Bhaskara com o delta negativo obtemos o valor: "<<x2;
	
	system("pause");
	
	
	return 0;
}
