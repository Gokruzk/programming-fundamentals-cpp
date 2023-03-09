#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void extras(float suel, float ext)
{
	int suelt,ext1,ext2;
	suelt=0;
	ext1=0;
	ext2=0;
	cout<<"INGRESE SU SUELDO"<<endl;
	cin>>suel;
	cout<<"INGRESE LAS HORAS EXTRAS"<<endl;
	cin>>ext;
	if(ext<=20)
	{
		suelt=suel+ext*5;
	}else
		{
			if(ext>20)
			{
				ext1=ext-20;
				ext2=ext1*8;
				suelt=suel+(20*5)+ext2;
			}
		}
	cout<<"EL SUELDO CON LAS HORAS EXTRAS ES IGUAL $"<<suelt<<endl;
}
float factorial(int a)
{
	int fact;
	fact=1;
	for(int x=1;x<=a;x++)
	{
		fact=fact*x;
	}
	return(fact);
}

float potencia(int b,int ex)
{
	int poten;
	poten=1;
		for(int x=1;x<=ex;x++)
	{
		poten*=b;
	}
	return(poten);
}

void limite(float mets,float mins)
{
	float km,h,vel;
	km=0;
	h=0;
	vel=0;
	km=mets/1000;
	h=mins/60;
	vel=km/h;
	if(vel<40)
	{
		cout<<"VELOCIDAD EN KILOMETROS "<<km<<"Km"<<endl;
		cout<<"VELOCIDAD EN HORAS "<<h<<"h"<<endl;
		cout<<"SU VELOCIDAD ES DE "<<vel<<" Km/h Y NO PASA EL LIMITE"<<endl;
	}else
	{
		cout<<"VELOCIDAD EN KILOMETROS "<<km<<"Km"<<endl;
		cout<<"VELOCIDAD EN HORAS "<<h<<"h"<<endl;
		cout<<"SU VELOCIDAD ES DE "<<vel<<"<< Km/h Y PASA EL LIMITE"<<endl;
		
	}
}

int main()
{
	int op;
	cout<<"1.- Sueldo mas horas extras"<<endl;
	cout<<"2.- FORMULA"<<endl;
	cout<<"3.- LIMITE "<<endl;
	cout<<"4.- FORMULA2"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			cout<<"1.- Sueldo mas horas extras"<<endl;
			float suel,ext;
			cout<<endl;
			extras(suel,ext);
			break;
		case 2:
			cout<<"2.- FORMULA"<<endl;
			int a,c;
			cout<<"2.- FORMULA"<<endl;
			cout<<"INGRESE EL VALOR DE a"<<endl;
			cin>>a;
			cout<<"INGRESE EL VALOR DE c"<<endl;
			cin>>c;
			cout<<"FORMULA GENERAL: "<<endl;
			cout<<endl;			
			cout<<(((factorial(a)+potencia(c,4))/potencia(a,2))-(factorial(c)+potencia(c,2))/2)*(((factorial(a)+potencia(c,4))/potencia(a,2))-(factorial(c)+potencia(c,2))/2)<<endl;
		case 3:
			float mets,mins;
			cout<<"3.- LIMITE "<<endl;
			cout<<"INGRESE LA DISTANCIA EN METROS"<<endl;
			cin>>mets;
			cout<<"INGRESE EL TIEMPO EN MINUTOS"<<endl;
			cin>>mins;
			cout<<endl;		
			limite(mets, mins);
			break;
		case 4:
			float x,y,z,ex,o1,o2,p1,p2;
			x=0;
			y=0;
			z=0;
			ex=0;
			o1=0;
			o2=0;
			p1=0;
			p2=0;
			cout<<"4.- FORMULA2"<<endl;
			cout<<"INGRESE EL VALOR DE x"<<endl; cin>>x;
			cout<<"INGRESE EL VALOR DE y"<<endl; cin>>y;
			cout<<"INGRESE EL VALOR DE z"<<endl; cin>>z;
			cout<<"FORMULA GENERAL: "<<endl;
			cout<<endl;
			o1=potencia(y,2);
			o2=(4*x*z);
			p1=sqrt(o1-o2);
			p2=2*x;
						
			cout<<"1.- "<<"("<<-y<<"+"<<p1<<")"<<"/"<<2*x<<" = "<<(-y+p1)/p2<<endl;
			cout<<"1.- "<<"("<<-y<<"-"<<p1<<")"<<"/"<<2*x<<" = "<<(-y-p1)/p2<<endl;
			break;
	}
	
	
	
	
	
	
	return 0;
}
