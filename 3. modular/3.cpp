#include <iostream>
#include <stdlib.h>
using namespace std;

void promedio(int cn)
{
	int no;
	float prom1,prom2,acum,acum1,acum2,acum3,acum4;
	acum=0;
	acum1=0;
	acum2=0;
	acum3=0;
	acum4=0;

	for(int x=1;x<=cn;x++)
	{
		cout<<"INGRESE NOTA "<<x<<endl;
		cin>>no;
		if(no%2==0)
		{
			acum1+=no;
			acum2+=1;
		}else
		{
			acum3+=no;
			acum4+=1;
			
		}
		
	}
	prom1=acum1/acum2;
	prom2=acum3/acum4
	;
	cout<<"PROMEDIO DE PARES = "<<prom1<<endl;
	cout<<"PROMEDIO DE IMPARES = "<<prom2<<endl;
}
int potencia(int a)
{
	int pot;
	pot=1;
	for(int x=1;x<=3;x++)
	{
		pot*=a;
	}
	return(pot);
}
int potencia1(int c)
{
	int pot1;
	pot1=1;
	for(int x=1;x<=2;x++)
	{
		pot1*=c;
	}
	return(pot1);
}
int factorial(int b)
{
	int fact;
	fact=1;
	
	for(int x=1;x<=b;x++)
	{
		fact*=x;
		
		
	}
	return(fact);
}

int formu(int a,int b,int c)
{
	int form,acum;
	form=0;
	acum=1;
	form=(a+b+c);
	for(int x=1;x<=2;x++)
	{
		acum*=form;
	}
	return(acum);
}

int main()
{
	int op;
	cout<<"1. PROMEDIO DE PARES E IMPARES"<<endl;
	cout<<"2. FORMULA"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
		int cn,prom1,prom2;
		cout<<"1. PROMEDIO DE PARES E IMPARES"<<endl;
		cout<<"INGRESE CUANTOS NUMEROS DESEA PROMEDIOR"<<endl;
		cin>>cn;
		promedio(cn);
		
		break;
		case 2:
			int a,b,c;
		cout<<"2. FORMULA"<<endl;
		cout<<"INGRESE EL VALOR DE a"<<endl;
		cin>>a;
		cout<<"INGRESE EL VALOR DE b"<<endl;
		cin>>b;
		cout<<"INGRESE EL VALOR DE c"<<endl;
		cin>>c;
		cout<<potencia(a)<<endl;
		cout<<factorial(b)<<endl;
		cout<<potencia1(c)<<endl;
		cout<<factorial(a)<<endl;
		cout<<formu(a,b,c)<<endl;
		cout<<"RESULTADO:"<<endl;
		cout<<(potencia(a)+factorial(b))-(potencia1(c)+factorial(a))+formu(a,b,c)<<endl;
		break;
	}
	
return 0;
	
}
