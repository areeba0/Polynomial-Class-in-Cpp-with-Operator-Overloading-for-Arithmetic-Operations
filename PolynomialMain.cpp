#include <iostream>
#include"polynomial.h"
using namespace std;
int main(){
int coeff;

cout << "Enter the degree of Coefficient for polynomial 1?" << endl;
cin >> coeff;
Polynomial poly_1(coeff);
cin>>poly_1;

cout << "Enter the degree of Coefficient for polynomial 2?" << endl;
cin >> coeff;
Polynomial poly_2(coeff);
cin>>poly_2;
cout<<endl;

cout << "Polynomial 1 = " << poly_1<< endl;
cout << "Polynomial 2 = " << poly_2 << endl;

cout<<"Test cases for operator+ and operator- "<<endl;
cout << endl << "Polynomial 1 + Polynomial 2  is = " << poly_1 + poly_2 << endl;

cout << "Polynomial 1 - Polynomial 2 is  = " << poly_1 - poly_2 << endl ;

cout<<"Testing for operator == ";
if(poly_1 == poly_2)
{
cout << "polynomials are the same." << endl;
}
else 
{
cout << " polynomials are different." << endl;   
}
return 0;
}

