#include <stdio.h>

struct Mahasiswa {
	char *nama;
	char *alamat;
	int usia;
};
int main(){
	struct Mahasiswa mhs1, mhs2;
	
	mhs1.nama = "Irvan";
	mhs1.alamat = "Bali";
	mhs1.usia = 20;
	
	mhs2.nama = "Basry";
	mhs2.alamat = "Medan";
	mhs2.usia = 24;
	
	printf("## Mahasiswa 1 ##\n");
	printf("Nama: %s\n", mhs1.nama);
	printf("Alamat: %s\n", mhs1.alamat);
	printf("Umur: %d\n\n", mhs1.usia);
	
	printf("## Mahasiswa 2 ##\n");
	printf("Nama: %s\n", mhs2.nama);
	printf("Alamat: %s\n", mhs2.alamat);
	printf("Umur: %d\n", mhs2.usia);
}

