#include <iostream>

class Series
{
public:
	//Atributos
	double n;
	//Constructor
	Series(double n);
	//Metodos
	double fibonacciIt(double n);
	double fibonacciRec(double n);
	double factorialIt(double n);
	double factorialRec(double n);
	bool numeroCorrecto(double n);
};