#include <iostream>
using namespace std;

int main() {
	long lama_kredit, harga_pokok, harga_beli, bunga, cicilan, total_harga_motor, harga_motor, keuntungan_diler;
		
	cout<<"Masukkan Harga Motor = RP.";
	cin>>harga_motor;
	cout<<"Masukkan lama waktu kredit (bulan) = ";
	cin>>lama_kredit;
	harga_pokok=harga_motor/lama_kredit;
	cout<<"\nHarga Pokok = RP."<<harga_pokok;
	bunga=harga_pokok*0.1;
	cout<<"\nBunga yang di dapatkan = RP."<<bunga;
	cicilan=harga_pokok+bunga;
	cout<<"\nBesar Cicilan Yang di dapatkan = RP."<<cicilan;
	total_harga_motor=cicilan*lama_kredit;
	cout<<"\nTotal Harga Motor = RP."<<total_harga_motor;
	keuntungan_diler=total_harga_motor-harga_motor;
	cout<<"\nKeuntungan yang di dapat diler = RP."<<keuntungan_diler;
	
	
	
	
	return 0;
}
