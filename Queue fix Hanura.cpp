#include <iostream>
using namespace std;

const int MAX_QUEUE = 8;
string data[MAX_QUEUE];
int front = -1;
int rear = -1;

void enqueue(string item) { // Fungsi enqueue untuk menambahkan elemen baru ke dalam queue
    if (rear == MAX_QUEUE - 1) { // cek apakah queue penuh
        cout << "\n eror Queue overflow" << endl;
        return;
    }
    if (front == -1) { // jika queue masih kosong, atur front ke indeks 0
        front = 0;
    }
    rear++;
    data[rear] = item; // tambahkan elemen ke rear
}

void dequeue() { //Fungsi dequeue untuk mengeluarkan elemen pertama dari queue.
    if (front == -1 || front > rear) { // cek apakah queue kosong
        cout << "\nQueue underflow" << endl;
        return;
    }
    front++; // geser indeks front ke elemen selanjutnya
}

void display() { // Fungsi untuk menampilkan isi queue
    if (front == -1 || front > rear) { // mengecek apakah queue kosong
        cout << "Queue kosong\n" << endl;
        return;
    }
    cout << "\nData Tersimpan : " << endl;
    for (int i = front; i <= rear; i++) { // tampilan semua elemen dari front hingga rear
        cout << i+1 << ". " << data[i] << endl;
    }
}

int main() {
    int pil;
    string isi;

    while (true) {
        cout << "\nMenu Utama\n1. Enqueue\n2. Dequeue\n3. Tampilkan Data\n4. Keluar\nPilih : ";
        cin >> pil;

        switch (pil) {
            case 1:
                cout << "Masukkan data : ";
                cin >> isi;
                enqueue(isi);
                break;
            case 2:
                dequeue();
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
