#include <iostream>
using namespace std;

int main () {
	// Awal Menu 3
	int jumlah,bayar,kembalian,total=0;
	int nomor[]= {1,2,3,4,5};
	int harga[5]= {10000,11000,13000,18000,15000};
	
	cout << "==== Minuman Di Toko Qembung ====" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "---------------------------------" << endl;
	cout << "| Daftar Minuman | Harga | Kode |" << endl;
	cout << "---------------------------------" << endl;
	cout << "|     ThaiTea    | 10000 |  01  |" << endl;
	cout << "|    GreenTea    | 11000 |  02  |" << endl;
	cout << "|   CoklatCramy  | 13000 |  03  |" << endl;
	cout << "|    SusuRegal   | 18000 |  04  |" << endl;
	cout << "|  LemonMaduSoda | 15000 |  05  |" << endl;
	cout << "---------------------------------" << endl;
	cout << endl;
	
	cout << "Berapa Jenis Minuman Yang Ingin Kamu Beli ?? : ";
	cin >> jumlah;
	
	if(jumlah<1) {
		cout << "Jenis Minuman Tidak Boleh Kurang Dari 1" << endl;
		cout << endl;
	}
	
	int input_user [jumlah];
	int input_jumlah [jumlah];
	
	for (int i=0; i<jumlah; i++) {
		cout << "Masukan Kode Minuman ke-" << i+1 << " : ";
		cin >> input_user [i];
		cout << "Masukan Jumlah Minuman Ke-" << i+1 << " : ";
		cin >> input_jumlah [i];
		int subtotal = input_jumlah [i] * harga [input_user[i]-1];
		total = total + subtotal;
		
	}
	cout << "Total Jenis Minuman Yang Anda Beli Adalah : " << jumlah << " Jenis" << endl;
	cout << "Total Harga Yang Harus Anda Bayar Adalah : Rp. " << total << ",-" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	// Awal Menu 4
	cout << "Total Yang Harus Dibayar : Rp. " << total << ",-" << endl;
	cout << "Masukan Jumlah Pembayaran Anda : Rp. ";
	cin >> bayar;
	cout << endl;
	
	
	if (bayar>=total){
		cout << "Kembalian Anda = Rp. " << bayar-total << ",-" << endl;
		cout << "Terima Kasih Telah Datang dan Belanja" << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		
	}
	else{
		cout << "Maaf.. Uang Anda Tidak Cukup... :(" << endl;
		cout << "Uang Anda Kurang : Rp. " << total-bayar << ",-" << endl;
		cout << "Silahkan Ulangin Pembayaran" << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	
	cout << endl;
	// Awal Menu 5
	cout << "|============================================================|" << endl;
	cout << "||                         INVOICE                          ||" << endl;
	cout << "|============================================================|" << endl;
	cout << "| NO | Jenis Minuman |    Harga    | Banyaknya |    Total    |" << endl;
	cout << "|------------------------------------------------------------|" << endl;
	for ( int i=0; i<jumlah; i++) {
		cout << "| -" << i+1 << " |       " << input_user[i] << "       | Rp. " << harga [input_user[i]-1] << ",- |  " << input_jumlah[i] << " Gelas  | RP. " << input_jumlah [i] * harga [input_user[i]-1] << ",- |" << endl;
	} 
	
	cout << "|------------------------------------------------------------|" << endl;
	cout << "|                  TOTAL BAYAR                 | Rp." << total << ",- |" << endl;
	cout << "|============================================================|" << endl;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	
	return 0;
}
