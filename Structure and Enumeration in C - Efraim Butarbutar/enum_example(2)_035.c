#include <stdio.h>
#include <string.h>

enum jenis_kelamin {Pria, Wanita};
enum pilihan {SATU = 29, DUA, TIGA, EMPAT, LIMA, TUJUH=21, DELAPAN};

int main(){
struct pegawai{
		char nama[100];
		int nik;
		int gaji;
		int usia;
		char jenis_kelamin;
		int pilihan_kode;
};
	
struct pegawai peg;
		strcpy(peg.nama, "Geri");
		peg.gaji = 5000000;
		peg.nik = 1107130630;
		peg.usia = 26;
		peg.jenis_kelamin = Pria;
		peg.pilihan_kode = EMPAT;
		
		printf("nama pegawai: %s\n", peg.nama);
		printf("nomor induk pegawai: %d\n", peg.nik);
		printf("gaji pokok: %d\n", peg.gaji);
		printf("usia: %d\n", peg.usia);
		printf("gender: %d\n", peg.jenis_kelamin);
		printf("kode: %d\n", peg.pilihan_kode);
		return 0;
}
