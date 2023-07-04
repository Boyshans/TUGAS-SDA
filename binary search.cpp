#include<stdio.h>

//fungsi untuk mencari angka dengan pencarian bagi dua
int fungsi ( int cari ,int n , int angka[])
{
    //variable untuk menentukan titik awal ,akhir nya
    int high ,low ,mid ,kunci , i;
    
   // n-1 adalah elemen akhir dalam array
    high = n - 1; low = 0; kunci = -1; i = 0; // 
	
	
    //Perulangan untuk mencari angka nya dengan kondisi kunci = -1 dan i < n
    while ( kunci == -1 && i<n )
    {  
        mid = ( low+ high) / 2;
           
            if ( angka[mid] == cari )
        {
            kunci = mid;
        }
        else
        {
            if ( angka[mid] < cari )
            {// JIKA ANGKA MID < CARI
                low = mid + 1;
            }
            else
            { // ANGKA MID > CARI
                high = mid - 1;
            }
        }i++;
    }return kunci;
}


int main ()
{
    int cari , hasil , i , n;
    int angka[1000]= {10, 20, 30, 40, 50, 60, 70, 80 ,90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200}; 
	n= 20; 
	
	printf("Data yang tersedia: "); // menampilkan isi data pada menu output yang dimasukan dalam array dengan melakukan perulangan 
	for (i = 0; i < n; i++) {
    printf("%d ", angka[i]);
}
	printf("\n");

	
    printf("Masukan angka yg ingin dicari dalam indeks: ");
    scanf("%d", &cari);

    hasil = fungsi ( cari , n ,angka );

    if  ( hasil == - 1 )
    {
        printf("\nData tidak dapat ditemukan ");
    }
    else
    {
        printf("\nAngka %d terdapat pada indeks %d", cari ,hasil);
    }

    return 0;
}