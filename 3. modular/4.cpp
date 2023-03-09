#include <iostream>
#include <stdlib.h>
using namespace std;

float potencia(int a,int ex)
{
	int pot;
	pot=1;
	for(int x=1;x<=ex;x++)
	{
		pot*=a;
	}
	return(pot);
}
float factorial(int b)
{
	int fact;
	fact=1;
	for(int x=1;x<=b;x++)
	{
		fact*=x;
	}
	return(fact);
}
void promedio(int n)
{
	float prom,prom2,promt,acum,acum1,acuma,acumb,pr,pr1;
	acuma=0;
	acumb=0;
	pr=0;
	pr1=0;
	acum1=0;
	prom=0;
	prom2=0;
	cout<<"INGRESE EL LIMITE"<<endl;
	cin>>n;
	for(int x=1;x<=n;x++)
	{
		if(x%3==0)
	{
		acuma+=x;
		acum+=1;
		
	
	}else
		{
			if(x%5==0)
			{
				acumb+=x;
				acum1+=1;
			}
		}	
	}
	prom=acuma/acum;
	prom2=acumb/acum1;
	promt=(prom+prom2)/2;
	
cout<<"EL PROMEDIO ES IGUAL A "<<promt<<endl;
}
void divisores(int z)
{
	for(int x=1;x<=z;x++)
	{
		if(z%x==0)
		{
			cout<<x<<endl;
		}
	}
		
}

int main()
{
	int opc;
	cout<<"1.- FORMULA"<<endl;
	cout<<"2.- PROMEDIO"<<endl;
	cout<<"3.- DIVISORES"<<endl;
	cin>>opc;
	switch(opc)
	{
		case 1:
			int a,b,c;
			cout<<"1.- FORMULA"<<endl;
			cout<<"INGRESE EL VALOR DE a"<<endl; cin>>a;
			cout<<"INGRESE EL VALOR DE b"<<endl; cin>>b;
			cout<<"INGRESE EL VALOR DE c"<<endl; cin>>c;
			cout<<endl;
				
			cout<<factorial(a)<<endl;
			cout<<potencia(c,3)<<endl;
			cout<<potencia(a+b,2)<<endl;
			cout<<factorial(c)<<endl;
			cout<<potencia(b,3)<<endl;
			cout<<2*potencia(a,2)<<endl;
			cout<<endl;
			cout<<((factorial(a)+potencia(c,3))/potencia(a+b,2))+((factorial(c)+potencia(b,3))/(2*potencia(a,2)))<<endl;
			break;
		case 2:
			int n;
			cout<<"2.- PROMEDIO"<<endl;
			promedio(n);
			break;
		case 3:
			int z;
			cout<<"3.- DIVISORES"<<endl;
			cout<<"INGRESE UN NUMERO"<<endl;
			cin>>z;
			cout<<endl;
			divisores(z);
			break;
		
	}
	
	return 0;
}

