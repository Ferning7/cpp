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
 int prec; 
 float desconto;
 
 cout << "Digite o preço do produto: ";
 cin >> prec;
 
 cout << "Digite o desconto em porcentagem: ";
 cin >> desconto;
 
 cout << "Produto com " << desconto << "% será: " << prec - (prec * desconto) / 100;
  
  return 0;
}