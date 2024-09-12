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
 int raio, altura;
 double pi = 3.14;
 
 cout << "Digite o raio: ";
 cin >> raio;
 
 cout << "Digite a altura: ";
 cin >> altura;
 
 cout << "O volume do seu cilindro é: " << pi * (raio * raio) * altura;
 
 
  
  return 0;
}