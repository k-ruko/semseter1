//tipe data kompleks
#include <iostream>
#include <cmath>
using namespace std;

//definiis tipe data komplek
struct titik {
  float x;
  float y;
};

struct titik3D{
  titik xy;
  float z;
};

titik3D inputKoordinat();
//fungsi utama
int main()
{
  //deklarasi
  titik3D A, B;
  float jarak;
  
  //input data
  cout << "masukkan koordinat titik A: \n";
  A = inputKoordinat();
  cout << "masukkan koordinat titik B: \n";
  B = inputKoordinat();
  
  jarak = pow(A.xy.x - B.xy.x, 2) + pow(B.xy.y - B.xy.y, 2) + pow(A.z-B.z, 2);
  jarak = sqrt(jarak);
  
  cout << "jarak antara titik a dan b: " << jarak;
  
  return 0;
}

//definisi fungos
titik3D inputKoordinat()
{
  titik3D ttk;
  cout << "nilai x: ";
  cin >> ttk.xy.x;
  cout << "nilai y: ";
  cin >> ttk.xy.y;
  cout << "nilai z: ";
  cin >> ttk.z;
  
  return ttk;
}
