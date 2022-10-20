#include <iostream>
using namespace std;

int main() {
 int *ptr_a;

 ptr_a = new int;

  if (ptr_a == NULL) {
    cout << "Memoria insuficiente!" << endl;
    return 1;
  }

  cout << "Endereco de ptr_a: " <<  ptr_a << endl;
  *ptr_a = 90;
  cout << "Conteudo de ptr_a: " << *ptr_a << endl;
  cout << "Tamanho de ptr_a: " << sizeof(ptr_a) << endl;

  // Memory leakage test
  // se eu pedir o conteúdo de ptr_a vai vir os 90

  cout << "Conteudo de ptr_a de novo: " << *ptr_a << "\nEndereco de ptr_a: " << ptr_a << endl;
  delete(ptr_a);
  cout << "Conteudo de ptr_a depois do delete: " << *ptr_a << " Vira lixo na memoria." << "\nEndereco de ptr_a permanece o mesmo: " << ptr_a;

  return 0;
}