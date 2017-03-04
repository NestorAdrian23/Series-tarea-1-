#include "Series.h"

using namespace std;
int main()
{
	double n;
	bool verdadero;
	Series series(n);
	cout<<"\tFibonacci y factorial.\n"<<endl;
	do
	{
		cout<<"Dame el valor que deseas saber: "<<endl;
		cin>>n;
		verdadero=series.numeroCorrecto(n);
	}while(n<0 || verdadero==false);
	
	cout<<"El fibonacciIt= "<<series.fibonacciIt(n)<<endl;
	if(n<= 40)
		cout<<"El fibonacciRec= "<<series.fibonacciRec(n)<<endl;
	cout<<"El factorialIt= "<<series.factorialIt(n)<<endl;
	if(n<=40)
		cout<<"El factorialRec= "<<series.factorialRec(n)<<endl;
	

	return 0;
}