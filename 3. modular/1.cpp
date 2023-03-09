#include <iostream>
#include <stdlib.h>
using namespace std;


int primo (int n)
{
	int x,cont,cont1;
		cont=0;		
		cont1=0;
		for(int x=1;x<=n;x++)
		{
			if(n%x==0)
			{
				cont+=1;
			}
		}
		return(cont);
}

int main()
{
	
	system("COLOR 1A");
	int op, r,num,cont,cont1;
	
	
	
	do{
	cout<<"ELIJA UNA DE LAS OPCIONES DEL MENU"<<endl;
	cout<<"1. NUMERO PRIMO"<<endl;
	cout<<"2. MOSTRAR NUMEROS PRIMOS"<<endl;
	cout<<"3. "<<endl;
	cin>>op;
	cout<<endl;
		switch(op)
		{
			case 1:
			{
				
				system("CLS");
				cout<<"1. NUMERO PRIMO"<<endl;
				cout<<"INGRESE UN NUMERO"<<endl;
				cin>>num;
					for(int x=1;x<=num;x++)
				{
					if(num%x==0)
					{
						cont+=1;
					}
				}
				if(cont<=2)
					{
						cout<<"SI ES PRIMO"<<endl;
					}else
					{
						cout<<"NO ES PRIMO"<<endl;
					}
				cont=0;		
				break;
			}
			
			case 2:
			{
				
				for(int x=1;x<=100;x++)
				{
					for(int x1=1;x1<=100;x1++)
					{
						if(x%x1==0)
						{
							cont1+=1;
						}
					}
					if(cont1<=2)
					{
						cout<<x<<"ES PRIMO"<<endl;
					}
				}
				cont1=0;
			  	break;
			}
			case 3:
			{
				
	
				break;
			}	
				
		}
		
	cout<<"DESEA CONTINUAR; 1= SI - 2=NO "<<endl;	
	cin>>r;
	system("CLS");
 	}while(r==1);

return 0;

}

