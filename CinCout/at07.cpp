/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<string>
#include <iostream>
using namespace std;

int main()
{
  string rua, bairro, cidade, estado, numero;
  
  
  
  cout << "Digite seu endereço: \n";
  cout << "\nInsira seu Estado: ";
  cin >> estado;
  fflush(stdin);
  cout << "\nInsira sua Cidade: ";
  cin >> cidade;
  cout << "\nInsira seu Bairro: ";
  getline(cin, bairro);
  cout << "\nInsira sua rua: ";
  cin >> rua;
  fflush(stdin);
  cout << "\nInsira seu numero: ";
  cin >> numero;
  fflush(stdin);
  cout << "Seu endereço é: Rua: " << rua << ", N°: " << numero << ", Bairro: " << bairro << ", Cidade: " << cidade << ", Estado: " << estado;
  
  return 0;
}