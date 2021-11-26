//*biodata siswa*/
/*menentukan grade mapel*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "fungsi.h"

int main()
{
    awal:
    garis();
    printf("                               |                  ISI BIODATA ANDA!                  |\n");
    garis1();
    char nama[50], pilihan[10], pilihan1;
    int kelas;
    char prodi[50];
    int umur;
    int pilih, absen;
    printf("\n\t\t\t        Masukkan nama anda : ");
    gets(nama);
    printf("\n\t\t\t        Jurusan            : ");
    gets(prodi);
    printf("\n\t\t\t        Kelas(angka)       : ");
    fflush(stdin);
    scanf("%i", &kelas);
    printf("\n\t\t\t        Umur               : ");
    scanf("%i", &umur);
    printf("\n\t\t\t        Absen              : ");
    scanf("%i", &absen);
    garis1();
    printf("                               |                      PERINCIAN                      |\n");
    garis1();

    printf("\n\t\t                Nama Anda          : %s                                   \n", nama);
    printf("\n\t\t                Jurusan Anda       : %s                                   \n\n", prodi);
    printf("\t\t                Kelas              : %i %s                                  \n\n", kelas,prodi);
    printf("\t\t                Umur               : %i tahun                             \n\n", umur);
    printf("\t\t                No Absen           : %i                                   \n\n", absen);
    garis1();

    pilihan:
    printf("\n\t\t\t       Apakah anda ingin melihat grade anda?(ya/tidak):");
    fflush(stdin);
    gets(pilihan);
    if(!strcmp(pilihan,"ya"))
    {
        system("cls");
        goto grade;
    }
    else if ( !strcmp(pilihan , "tidak"))
    {
     exit(0);
    }
    else
    {
        goto pilihan;
    }

    grade:
    printf("\n\n  Menentukan grade nilai mapel!\n");
    float nilai;
    printf("\n  Masukkan nilai mata pelajaran anda: ");
    scanf("%f", &nilai);

    printf("\n  Nilai anda: %.2f\n", nilai);
    hasil(nilai);

    printf("\n\n  Selesai!\n");
    system("pause");
    system("cls");
    fflush(stdin);
    printf("\n\n\n\t\t\t         Apakah anda ingin input data lagi?(y/n): ");
    fflush(stdin);
    pilihan1=getchar();
    pilihan1:
     if ( pilihan1 == 'Y' || pilihan1 == 'y')
    {
        system("cls");
         fflush(stdin);
        goto awal;
    }
    else if ( pilihan1 == 'T' || pilihan1 == 't')
    {
        exit(0);
    }
    else goto pilihan1;

    return 0;
}
