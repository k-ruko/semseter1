//tipe data kompleks
#include <iostream>
#include <cmath>
using namespace std;

//definiis tipe data komplek
struct titik {
  float x;
  float y;
};
// prototipe
titik inputkoordinat();

int main()
{
  //deklarasi
  titik A, B;
  float c;

  //input data
  cout << "masukkan koordinan titk A: " ;
  A = inputkoordinat();
 
  cout << "masukkan koordinan titk B: " ;
  B = inputkoordinat();
  
  //HITUNG JARAK
  //c = a^2 + b^2
  c = pow(A.x-B.x, 2) + pow(A.y - B.y, 2);
  c = sqrt(c);


  cout << "\nKorordinat A : [" << A.x << "," << A.y << "]";
  cout << "\nKorordinat B : [" << B.x << "," << B.y << "]";
  cout << "\nJarak titik A dan B adalah " << c;
  return 0;
}


titik inputkoordinat()
{
  titik ttk;
  cout << "\nnilai x: ";
  cin >> ttk.x;
  cout << "\nNilai y:";
  cin >> ttk.y;
  return ttk;
}
