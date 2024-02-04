//tipe data kompleks
#include <iostream>
#include <cmath>
using namespace std;

//definiis tipe data komplek
struct titik {
  float x;
  float y;
};

int main()
{
  //deklarasi
  titik A, B;
  float c;

  //input data
  cout << "masukkan koordinan titk A: " ;
  cout << "\nnilai x: ";
  cin >> A.x;
  cout << "\nNilai y:";
  cin >> A.y;

  cout << "masukkan koordinan titk B: " ;
  cout << "\nNilai x: ";
  cin >> B.x;
  cout << "\nNilai y:";
  cin >> B.y;

  //HITUNG JARAK
  //c = a^2 + b^2
  c = pow(A.x-B.x, 2) + pow(A.y - B.y, 2);
  c = sqrt(c);0


  cout << "\nKorordinat A : [" << A.x << "," << A.y << "]";
  cout << "\nKorordinat B : [" << B.x << "," << B.y << "]";
  cout << "\nJarak titik A dan B adalah " << c;
  return 0;
}
