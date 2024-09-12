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
 int temp;
 
 cout << "Digite a temperatura em Celsius(C): \n";
 cin >> temp;
 
 cout << "Sua temperatura em C para Fahrenheit: " << (temp * 9/5) + 32;
  
  return 0;
}