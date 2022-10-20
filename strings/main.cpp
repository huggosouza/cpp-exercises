#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char nome[] = "Souza";

  cout << "String: " << nome << endl;
  cout << "Length of nome: " << sizeof(nome) << endl;
  cout << "How many characters? " << strlen(nome) << endl;

  char i2[] = {};

  for (int i = 0; i < strlen(nome); ++i) {
      if (isspace(nome[i])){
          cout << "The char number " << i << " in the string is a space." << endl;
      }
      else{
          cout << "The char number " << i << " isn't a space." << endl;
      }

      i2[i] = toupper(nome[i]);
  }

  // For some reason, It is printing an extra "a" in the end of the string, I'm searching for the reason
  cout << "Upper string: " << i2 << endl;



  return 0;
}
