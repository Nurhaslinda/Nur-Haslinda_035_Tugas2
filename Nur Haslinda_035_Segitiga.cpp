#include <iostream>
#include <math.h>
using namespace std;


int main() {
	
	int alas, tinggi, sisi_miring, keliling;
	
	cout<<"MENGHITUNG SISI MIRING DAN KELILING SEGITIGA SIKU-SIKU ";
	cout<<"\nMasukkan panjang alas segitiga = ";
	cin>>alas;
	cout<<"Masukkan Tinggi Segitiga = ";
	cin>>tinggi;
	
	sisi_miring=sqrt(alas*alas+tinggi*tinggi);
	cout<<"\nSisi Miring = "<<sisi_miring;
	
	keliling=alas+tinggi+sisi_miring;
	cout<<"\nKeliling = "<<keliling;
	
	
	
	return 0;
}
