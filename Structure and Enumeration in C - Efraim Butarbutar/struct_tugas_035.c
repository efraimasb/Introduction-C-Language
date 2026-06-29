#include <stdio.h>
//Efraim Asidovanio Butarbutar_14S21035
struct Mahasiswa{
	char *nama;
	int nim;
	char *jeniskelamin;
	char *jurusan;
};
int main(){
	//menggunakan struct
struct Mahasiswa mhs1, mhs2, mhs3;
	mhs1.nama = "Yobel";
	mhs1.nim = 14521001;
	mhs1.jeniskelamin = "laki laki";
	mhs1.jurusan = "Teknik Kimia ITB";
		
	mhs2.nama = "Eiren";
	mhs2.nim = 14521003;
	mhs2.jeniskelamin = "laki laki";
	mhs2.jurusan = "Teknik Elektro UNDIP";
		
	mhs3.nama = "Neela";
	mhs3.nim = 14521008;
	mhs3.jeniskelamin = "perempuan";
	mhs3.jurusan = "Kedokteran UI";
		
		//Mencetak isi struct
		
	printf("%s dengan NIM ", mhs1.nama);
	printf("%d berjenis kelamin ", mhs1.nim);
	printf("%s merupakan mahasiswa %s\n", mhs1.jeniskelamin, mhs1.jurusan);
		
	printf("%s dengan NIM ", mhs2.nama);
	printf("%d berjenis kelamin ", mhs2.nim);
	printf("%s merupakan mahasiswa %s\n", mhs2.jeniskelamin, mhs2.jurusan);
		
	printf("%s dengan NIM ", mhs3.nama);
	printf("%d berjenis kelamin ", mhs3.nim);
	printf("%s merupakan mahasiswa %s", mhs3.jeniskelamin, mhs3.jurusan);	
	}
	
