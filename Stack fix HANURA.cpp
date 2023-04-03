#include <iostream>
using namespace std;

const int MAX_STACK = 8;
string data[MAX_STACK];
int top = -1;

void push(string item) { // Fungsi push  untuk menambahkan elemen baru ke dalam stack
    if (top == MAX_STACK - 1) { //1. Mengecek apakah stack penuh
        cout << "\n eror Stack overflow" << endl; // 2. jika stack penuh tidak bs menambahkan elemen pada top
        return;
    }
    top++;
    data[top] = item; // tambahkan elemen ke top
}

void pop() { //Fungsi pop untuk mengeluarkan elemen teratas dari stack.
    if (top == -1) { // 1. Mengecek apakah stack kosong
        cout << "\nStack underflow" << endl;
        return;
    }
    top--; // kurangi top untuk mengeluarkan elemen teratas
}

void display() { // Fungsi untuk menampilkan isi stack
    if (top == -1) { // mengecek apakah stack kosong
        cout << "Stack kosong\n" << endl;
        return;
    }
    cout << "\nData Tersimpan : " << endl;
    for (int i = 0; i <= top; i++) { // tampilkan semua elemen dari top hingga indeks ke-7
        cout << i+1 << ". " << data[i] << endl;
    }
}

int main() {
    int pil;
    string isi;

    while (true) {
        cout << "\nMenu Utama\n1. Push\n2. Pop\n3. Tampilkan Data\n4. Keluar\nPilih : ";
        cin >> pil;

        switch (pil) {
            case 1:
                cout << "Masukkan data : ";
                cin >> isi;
                push(isi);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Program selesai" << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid" << endl;
        }
    }

    return 0;
}
