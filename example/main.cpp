#include <iostream> 
#include "calculator.hpp" 
using namespace std;

int main() 
{ 
double a, b; 

double summa(double a, double b); 
double sub(double a, double b); 
double mult(double a, double b); 
double dev(double a, double b); 
double pow(double a, double b); 
double sqrt(double a); 

printf_s("\n a = "); scanf_s("%lf", &a); 
printf_s("\n b = "); scanf_s("%lf", &b); 
printf_s("\n summa =%f", summa(a, b)); 
printf_s("\n sub =%f", sub(a, b)); 
printf_s("\n mult =%f", mult(a, b)); 
printf_s("\n dev =%f", dev(a, b)); 
printf_s("\n pow =%f", pow(a, b)); 
printf_s("\n sqrt =%f", sqrt(a)); 

return 0; 
}
