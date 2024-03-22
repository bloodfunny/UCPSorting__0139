// Adhya akmal rafiansyah/20230140139/B
// 1. Bubble sort bekerja dengan cara membandingkan nilai disebelahnya
// set pass = 1
// ulang langkah 3 varying j dari 0 ke n-1-pass
// jika index j > dari index j+1, maka ditukar
// pass 1
// jika pass <= n-1, kembali ke langkah 2
// 2. cara kerja agloritma shell sebenarnya sama dengan cara kerja agloritma insertion hanya saja untuk penyelesaiannya agloritma shell harus dipecah dahulu menjadi beberapa bagian
//  misal kita punya 9 array maka harus dipisah menjadi 3 list agar dapat diurutkan dahulu  di masing masing list
// ulang langkah 2,3,4,5 varying i dari 1 ke n-1
// atep temp = arr[1]
// ulang hingga j < 0 atau arr[j] <= temp
//  a. nilai index j ke ke index j+1
//  b. decrement j by 1
// store temp pada index j+1
// 3. menggunakan agloritma insertion karena sudah ada data yang tersusun sehingga hal itu memudahkan agloritma insertion untuk membandingka nilai yang masih belum terurut menjadi lebih mudah dibandingkan menggunakan bubble dan selection

#include <iostream>
using namespace std;

int rafi[39];
int i, temp, j, n;

void input() {
	while (true) {
		cout << "masukan elemen pada banyaknya rafi = ";
		cin >> n;
		if (n <= 39)
			break;
		else {
			cout << "\n rafi apat mempunyai maksimal 39 elemen, \n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "Masukan Elemen Rafi" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke - " << (i + 1) << " ; ";
		cin >> rafi[i];
	}
}
