#include <iostream>
using namespace std;

//#jawaban teori :
//#// 1. Algoritma adalah suatu tahapan pemecahan masalah yang logis berdasarkan sistematika yang 
		//tertentu didalam komputer menggunakan bahasa pemograman.

	// 2. yaitu Array dan struct
	
	// 3. yaitu kecepatan waktu(waktu yang singkat atau efisien), langkah yang sedikit,besar dan jenis data,operator dan juga space memori

	// 4. Algoritma yang paling efisien yaitu bubble sort karena bubble sort merupakan pengurutan data yang paling sederhana 
		//dan metode ini biasanya digunakan untuk mengurutkan data yang ukurannnya kecil.

	// 5. Algoritma quadratic contohnya selection sort dan insertion sort sedangkan
		// algoritma loglinear contohnya merge sort dan quick sort.



int novi[40];	//novi disini adalah array
int n;

void selectionSort(int novi[], int n) {
	int i, j, min_idx;

	for (i = 0;i < n - 1;i++) {
		min_idx = i;
		for (j = i + 1;j < n;j++) {
			if (novi[j] < novi[min_idx]) {
				min_idx = j;
			}
		}
		swap(novi[i], novi[min_idx]);
	}
}
void input() {
	while (true) {
		cout << "Masukan jumlah elemen pada array :";
		cin >> n;
		if (n <= 40)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 36 element.\n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "Masukan Elemen Array" << endl;

	for (int i = 0;i < n;i++) {
		cout << "<" << (i + 1) << ">";
		cin >> novi[i];
	}
}

void display() {
	cout << endl;
	cout << "===================" << endl;
	cout << "Elemen array yang sudah tersusun" << endl;
	cout << "===================" << endl;
	for (int i = 0;i < n;i++) {
		cout << novi[i] << endl;

	}
	cout << endl;
}

int main() {
	input();
	selectionSort(novi, n);
	display();

	return 0;

}
