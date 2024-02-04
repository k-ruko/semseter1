//NIM : 226201041
//Nama : DEPRIAN PAGESONG
#include <iostream>
using namespace std;

//prototipe fungsi
void luasPersegi(float A, float B, float &Luas);
float luasLingkaran(float R, float &Luas);
void luasSegitiga(float L, float T, float &Luas);

int main()
{
	float A, B, C, R1, R2;
	float luas_persegi, luas_segitiga_pertama, luas_segitiga_kedua, luas_lingkaran_pertama, luas_lingkaran_kedua, luastotal, Luas;

	//input
	cout << "panjang persegi :\n ";
	cin >> A;
	cout << "lebar persegi : \n";
	cin >> B;
	cout << "tinggi segitiga : \n";
	cin >> C;
	cout << "Jari-jari lingkaran pertama : \n";
	cin >> R1;
	cout << "jari-jari lingkaran kedua : \n";
	cin >> R2;

	//proses
	luasPersegi(A, B, luas_persegi);
	cout << "\n\njumlah luas persegi tersebut ialah : " << luas_persegi;

	luasSegitiga(C, A - C, luas_segitiga_pertama);
	cout << "\njumlah luas segitiga yang pertama ialah : " << luas_segitiga_pertama;
	luasSegitiga(C, C, luas_segitiga_kedua);
	cout << "\njumlah luas segitiga ialah: " << luas_segitiga_kedua;

	luasLingkaran(R1, luas_lingkaran_pertama);
	cout << "\njumlah luas lingkaran ialah : " << luas_lingkaran_pertama;
	luasLingkaran(R2, luas_lingkaran_kedua);
	cout << "\njumlah luas lingkaran ialah : " << luas_lingkaran_kedua;

  luastotal = luas_persegi + (luas_segitiga_pertama + luas_segitiga_kedua) + (luas_lingkaran_kedua - luas_lingkaran_pertama);



	cout << "\n\njumlah luas dari bangun tersebut ialah : " << luastotal;

}

void luasPersegi(float panjang, float lebar, float &Luas)
{
	Luas = panjang * lebar;
	return;
}

void luasSegitiga(float alas, float tinggi, float &Luas)
{
	Luas = (alas * tinggi) / 2;
	return;
}

float luasLingkaran(float jari_jari, float &Luas)
{
//	const float phi = 22/7;
	Luas = 3.14 * jari_jari * jari_jari;
	return Luas;
}


