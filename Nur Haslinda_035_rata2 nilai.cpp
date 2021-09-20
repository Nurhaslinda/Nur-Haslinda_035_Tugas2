#include <iostream>
using namespace std;

int main() {
	int nilai_praktikum, nilai_teori, nilai_final_project, n_prak, n_teori, n_fipro, ratarata;
	cout<<"PROGRAM MENGHITUNG RATA-RATA";
	cout<<"\nMasukkan Nilai Praktikum = ";
	cin>>nilai_praktikum;
	cout<<"Masukkan Nilai Teori = ";
	cin>>nilai_teori;
	cout<<"Masukkan Nilai Tugas dan final project = ";
	cin>>nilai_final_project;
	
	n_prak=nilai_praktikum*40/100;
	n_teori=nilai_teori*40/100;
	n_fipro=nilai_final_project*20/100;
	ratarata=n_prak+n_teori+n_fipro/3;
	
	cout<<"\nRata-rata mata kuliah pemrograman = "<<ratarata;
	
	
	
	
	
	return 0;
}
