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
 int nota1, nota2, nota3;
 
 cout << "Digite tres notas: ";
 cin >> nota1;
 cin >> nota2;
 cin >> nota3;
 
 
 cout << "A media ponderada das notas: " << (nota1 + nota2 + nota3) / 3;
 
 
  
  return 0;
}