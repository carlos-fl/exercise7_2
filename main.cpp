#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n, m;
  cout << "escribe numero de filas y cantidad de caracteres " << endl;
  cin >> n;
  cin >> m;
  
  for(int i = 0; i < n - (n / 2); i++) {
    for(int k = n; k > i + 1; k--) {
      cout << "   ";
    }
    for(int j = 0; j < m; j++) {
      cout << "*";
    }
    cout << endl;
  } 
  for(int p = 0; p < n - 1 - (n / 2); p++) {
    for(int q = 0; q < p + 1 + (n / 2); q++) {
      cout << "   ";
    }
    for(int r = 0; r < m; r++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
