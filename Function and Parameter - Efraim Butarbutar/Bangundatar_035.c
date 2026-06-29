/// Efraim Asidovanio Butarbutar
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PHI 3.14

// PROTOTYPE PROCEDURE
void menu();
void ulangi();

void persegi();
void persegiPanjang();
void lingkaran();
void jajar_genjang();
void trapesium();
void layang_layang();

// PROTOTYPE FUNCTION
float luasPersegi(float sisi);
float kelilingPersegi(float sisi);

float luasPersegiPanjang(float panjang, float lebar);
float kelilingPersegiPanjang(float panjang, float lebar);

float luasLingkaran(float r);
float kelilingLingkaran(float r);

float luasjajar_genjang(float alas, float tinggi);
float kelilingjajar_genjang(float alas, float sisiMiring);

float luastrapesium(float sisiAtas, float alas, float tinggi);
float kelilingtrapesium(float sisiAtas, float sisiKiri, float sisiKanan, float alas);

float luaslayang_layang(float d1, float d2);
float kelilinglayang_layang(float sisi1, float sisi2);

// MAIN FUNCTION
int main()
{
    int pilih;

    while(1)
    {
        menu();

        printf("Masukkan pilihan : ");
        scanf("%d",&pilih);

        switch(pilih)
        {
            case 1:
                persegi();
                break;

            case 2:
                persegiPanjang();
                break;

            case 3:
                lingkaran();
                break;
            
            case 4:
                jajar_genjang();
                break;

            case 5:
                trapesium();
                break;
            
            case 6:
                layang_layang();
                break;

            case 0:
                printf("\nTerima kasih.\n");
                return 0;

            default:
                printf("\nPilihan tidak tersedia.\n");
        }

        ulangi();
    }

    return 0;
}

// MENU
void menu()
{
    printf("\n========================================\n");
    printf(" MENGHITUNG LUAS DAN KELILING\n");
    printf("         BANGUN DATAR\n");
    printf("========================================\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("4. Jajar Genjang\n");
    printf("5. Trapesium\n");
    printf("6. Layang-layang\n");
    printf("0. Keluar\n");

    printf("========================================\n");
}

// ULANGI (APABILA INGIN KEMBALI KE MENU)
void ulangi()
{
    char jawab;

    while(1)
    {
        printf("\nKembali ke menu? (Y/N)\n");
        printf("Pilihan : ");
        scanf("%c",&jawab);

        if(jawab=='Y')
        {
            system("cls");
            return;
        }
        else if(jawab=='N')
        {
            printf("\nTerima kasih.\n");
            exit(0);
        }
        else
        {
            printf("Input salah!\n");
        }
    }
}

// PERSEGI
void persegi()
{
    int pilih;
    float sisi;

    printf("\nPROGRAM PERSEGI\n");
    printf("1. Luas\n");
    printf("2. Keliling\n");
    printf("Pilihan : ");
    scanf("%d",&pilih);

    printf("Masukkan sisi : ");
    scanf("%f",&sisi);

    if(pilih==1)
        printf("Luas = %.2f cm2\n", luasPersegi(sisi));
    else if(pilih==2)
        printf("Keliling = %.2f cm\n", kelilingPersegi(sisi));
    else
        printf("Pilihan salah.\n");
}

// PERSEGI PANJANG
void persegiPanjang()
{
    int pilih;
    float panjang, lebar;

    printf("\nPROGRAM PERSEGI PANJANG\n");
    printf("1. Luas\n");
    printf("2. Keliling\n");
    printf("Pilihan : ");
    scanf("%d",&pilih);

    printf("Masukkan panjang : ");
    scanf("%f",&panjang);

    printf("Masukkan lebar : ");
    scanf("%f",&lebar);

    if(pilih==1)
        printf("Luas = %.2f cm2\n",
               luasPersegiPanjang(panjang,lebar));

    else if(pilih==2)
        printf("Keliling = %.2f cm\n",
               kelilingPersegiPanjang(panjang,lebar));

    else
        printf("Pilihan salah.\n");
}

// LINGKARAN
void lingkaran()
{
    int pilih;
    float r;

    printf("\nPROGRAM LINGKARAN\n");
    printf("1. Luas\n");
    printf("2. Keliling\n");
    printf("Pilihan : ");
    scanf("%d",&pilih);

    printf("Masukkan jari-jari : ");
    scanf("%f",&r);

    if(pilih==1)
        printf("Luas = %.2f cm2\n",
               luasLingkaran(r));

    else if(pilih==2)
        printf("Keliling = %.2f cm\n",
               kelilingLingkaran(r));

    else
        printf("Pilihan salah.\n");
}

// JAJAR GENJANG
void jajar_genjang()
{
    int pilih;
    float alas, tinggi, sisiMiring;

    printf("\nPROGRAM JAJAR GENJANG\n");
    printf("1. Luas\n");
    printf("2. Keliling\n");
    printf("Pilihan :");
    scanf("%d",&pilih);

    if(pilih==1)
    {
        printf("Masukkan alas : ");
        scanf("%f",&alas);
        
        printf("Masukkan tinggi : ");
        scanf("%f",&tinggi);
        
        printf("Luas = %.2f cm2\n",
        luasjajar_genjang(alas,tinggi));   
    }
    else if(pilih==2)
    {    printf("Masukkan alas : ");
        scanf("%f",&alas);

        printf("Masukkan sisi miring : ");
        scanf("%f",&sisiMiring);

        printf("Keliling = %.2f cm\n",
        kelilingjajar_genjang(alas,sisiMiring));
    }
}

// TRAPESIUM
void trapesium()
{
    int pilih;
    float sisiAtas;
    float alas;
    float tinggi;
    float sisiKiri;
    float sisiKanan;

    printf("\nPROGRAM TRAPESIUM\n");
    printf("1. Luas\n");
    printf("2. Keliling\n");
    printf("Pilihan : ");
    scanf("%d",&pilih);

    if(pilih==1)
    {
        printf("Masukkan sisi atas : ");
        scanf("%f",&sisiAtas);

        printf("Masukkan alas : ");
        scanf("%f",&alas);

        printf("Masukkan tinggi : ");
        scanf("%f",&tinggi);

        printf("Luas = %.2f cm2\n",
        luastrapesium(sisiAtas,alas,tinggi));
    }
    else if(pilih==2)
    {
        printf("Masukkan sisi atas : ");
        scanf("%f",&sisiAtas);

        printf("Masukkan sisi kiri : ");
        scanf("%f",&sisiKiri);

        printf("Masukkan sisi kanan : ");
        scanf("%f",&sisiKanan);

        printf("Masukkan alas : ");
        scanf("%f",&alas);

        printf("Keliling = %.2f cm\n",
        kelilingtrapesium(sisiAtas,sisiKiri,sisiKanan,alas));
    }
    else
        printf("Pilihan Salah.\n");
}

// LAYANG-LAYANG
void layang_layang()
{
    int pilih;
    float d1;
    float d2;

    float sisi1;
    float sisi2;

    printf("\nPROGRAM LAYANG-LAYANG\n");
    printf("1. Luas\n");
    printf("2. Keliling\n");
    printf("Pilihan :");
    scanf("%d",&pilih);

    if(pilih==1)
    {
        printf("Masukkan diagonal 1 :");
        scanf("%f",&d1);

        printf("Masukkan diagonal 2 :");
        scanf("%f",&d2);

        printf("Luas = %.2f cm2\n", luaslayang_layang(d1,d2));
    }
    else if(pilih==2)
    {
        printf("Masukkan sisi pertama :");
        scanf("%f", &sisi1);

        printf("Masukkan sisi kedua :");
        scanf("%f", &sisi2);

        printf("Keliling = %.2f cm\n", kelilinglayang_layang(sisi1,sisi2));
    }    
    else
        printf("Pilihan salah.\n");
}

// FUNCTION
float luasPersegi(float sisi)
{
    return sisi*sisi;
}

float kelilingPersegi(float sisi)
{
    return 4*sisi;
}

float luasPersegiPanjang(float panjang,float lebar)
{
    return panjang*lebar;
}

float kelilingPersegiPanjang(float panjang,float lebar)
{
    return 2*(panjang+lebar);
}

float luasLingkaran(float r)
{
    return PHI*r*r;
}

float kelilingLingkaran(float r)
{
    return 2*PHI*r;
}

float luasjajar_genjang(float alas, float tinggi)
{
    return alas*tinggi;
}

float kelilingjajar_genjang(float alas, float sisiMiring)
{
    return 2*(alas+sisiMiring);
}

float luastrapesium(float sisiAtas, float alas, float tinggi)
{
    return ((sisiAtas+alas)*tinggi)/2;
}

float kelilingtrapesium(float sisiAtas, float sisiKiri, float sisiKanan, float alas)
{
    return sisiAtas+sisiKiri+sisiKanan+alas;
}

float luaslayang_layang(float d1, float d2)
{
    return (d1*d2)/2;
}

float kelilinglayang_layang(float sisi1, float sisi2)
{
    return 2*(sisi1+sisi2);
}