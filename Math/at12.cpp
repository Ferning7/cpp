/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<string>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 double peso, altura;
 
 cout << "Digite seu peso em Kg: \n";
 cin >> peso;
 
 cout << "Digite sua altura em metros: ";
 cin >> altura;
 
 
  cout << "Seu índice de massa corporal(IMC): " << peso / (altura*altura);
  
  return 0;
}