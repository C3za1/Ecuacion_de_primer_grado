#include <iostream>
using namespace std;
int main(){
	float x[4]={};
	float y[4]={};
	
	cout<<"Ecuacion: 3x+2y=5\n";
	
	for(int i=0;i<5;i++)
	{
	cout<<"\nIngrese valor de y: ";
	cin>>y[i];
	
	x[i]=((2*y[i])-5)/3;
	
	}
	
	cout<<"\nDespejando x...\n\nResultados:\n";
	cout<<"\ty:\tx:";
	
	for(int i=1;i<5;i++)
	{
	cout<<"\n\t"<<y[i]<<"\t"<<x[i];
	}
	
	return 0;
}
