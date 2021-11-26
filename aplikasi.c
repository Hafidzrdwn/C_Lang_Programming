#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NUMBER_PER_ROW 10 // number per row //untuk deret genap ganjil
#define ROW 5


void head()
{
    system("COLOR E");
    printf("\n\n                                     ==============================================");
    printf("\n\t\t                     |              Aplikasi Pribadi              |\n");
    printf("                                     ==============================================\n\n");
}

void home()
{
     printf("\n\n============================================");
        printf("\n  Pilihan Fitur                            |");
            printf("\n============================================");
            printf("\n  1.Kalkulator                             |\n");
                printf("  2.Looping                                |\n");
                    printf("  3.Keliling Bangun Datar                  |\n");
                        printf("  4.Luas Bangun Datar                      |\n");
                            printf("  5.Exit                                   |\n");
    printf("============================================\n");
}


void pembuat()
{
    printf("\n\n Nama Pembuat : Hafidz Ridwan Cahya.");
    printf("\n Umur         : 15 Tahun");
    printf("\n Sekolah      : SMKN 1 Surabaya");
    printf("\n Kelas        : 10 RPL 1\n\n");

}


void kalkulator()
{
   printf("\n\n\t\t\t\t================KALKULATOR================\n\n");
                printf("\n\n=====================");
                    printf("\nPilihan Jenis Operasi\n");
                        printf("1.Penjumlahan ( + ) \n");
                            printf("2.Pengurangan ( - ) \n");
                                printf("3.Perkalian ( x ) \n");
                            printf("4.Pembagian ( : ) \n");
                        printf("5.Modulus ( %% ) \n");
                    printf("6.Back\n");
                printf("10.Exit \n");
            printf("=====================\n");

}


int main(){
    //tampilan awal
    head();
    //deklarasi tipe data
    const float phi = 3.14;
    int  a1,b1,hitung,pilih, c ,d, k, i;
    float a , b, s, p , l , t, r, diam, e;
    char decision, keluar, pilihan[100];

    //Deskripsi Pembuat
   pembuat();
   system("pause");
   system("cls");


    //pilihan fitur
    home:
    head();
    home();
        printf("\n> Masukkan nomor pilihan anda (1,2,3,4,5): ");
        scanf("%i", &pilih);

    //statement pilihan fitur awal
   switch(pilih){
    case 1:
        system("cls");
        goto kalkulator;
        break;

    case 2:
        system("cls");
        goto fiturlooping;
        break;

    case 3:
        system("cls");
        goto keliling;
        break;

    case 4:
        system("cls");
        goto luas;
        break;

    case 5:
        exit(0);

    default:
        printf("\nTIDAK DITEMUKAN FITUR TERSEBUT!!");
            pilihan:
            printf("\nIngin coba lagi atau tidak?(y/n):");
            keluar=getch();

        if ( keluar == 'n')
        {
         exit(0);
        }
        else if ( keluar == 'y')
            {
                system("cls");
        goto home;
            }
        else
            printf("\n\n\nInput anda salah anjim!!\n\n\n");
        exit(0);
}
    //fitur kalkulator
    kalkulator:
           kalkulator();
    printf(">Masukkan nomor pilihan anda (1,2,3,4,5,6,10): ");
    scanf("%i", &pilih);


    //statement pilihan fitur kalkulator
    switch(pilih)
    {
        one:
        case 1:
            system("cls");
            printf("\n\n~~~Anda memilih operasi penjumlahan~~~");
            printf("\n======================================\n");
                    printf("Masukkan angka pertama: ");
                scanf("%f", &a);
                    printf("\nMasukkan angka kedua: ");
                scanf("%f" , &b);
            printf("\nHasil: %.2f + %.2f = %.3f", a , b , a + b);
            ulang:
                printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
            {
            goto one;
            }
            else if( decision == 'e')
                {
                goto keluar;
            }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
                    goto ulang;
            }

        two:
        case 2:
            system("cls");
            printf("\n\n~~~Anda memilih operasi pengurangan~~~");
            printf("\n=======================================\n");
                    printf("Masukkan angka pertama: ");
                scanf("%f", &a);
                    printf("\nMasukkan angka kedua: ");
                scanf("%f", &b);
            printf("\nHasil: %.2f - %.2f = %.3f", a , b , a - b);
                ulang1:
                printf("\n\nAgain/End/Home(a/e/h):");
                decision=getch();

            if( decision == 'a')
                {
            goto two;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto ulang1;
            }

        three:
        case 3:
            system("cls");
            printf("\n\n~~~Anda memilih operasi perkalian~~~");
            printf("\n=====================================\n");
                    printf("Masukkan angka pertama: ");
                scanf("%f", &a);
                    printf("\nMasukkan angka kedua: ");
                scanf("%f", &b);
            printf("\nHasil: %.2f x %.2f = %.3f", a , b , a * b);
            ulang2:
                printf("\n\nAgain/End/Home(a/e/h):");
                decision=getch();

            if( decision == 'a')
                {
            goto three;
            }
            else if( decision == 'e')
                {
                 goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
                    goto ulang2;
            }

        four:
        case 4:
            system("cls");
            printf("\n~~~Anda memilih operasi pembagian~~~");
            printf("\n=====================================\n");
                    printf("Masukkan angka pertama: ");
                scanf("%f", &a);
                    printf("\nMasukkan angka kedua: ");
                scanf("%f", &b);
            printf("\nHasil: %.2f : %.2f = %.3f", a , b , a / b);
            ulang3:
                printf("\n\nAgain/End/Home(a/e/h):");
                decision=getch();

            if( decision == 'a')
                {
            goto four;
            }
            else if( decision == 'e')
                {
                 goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
                    goto ulang3;
            }

        five:
        case 5:
            system("cls");
            printf("\n~~~Anda memilih operasi modulus~~~");
            printf("\n===================================\n");
                    printf("Masukkan angka pertama: ");
                scanf("%i", &c);
                    printf("\nMasukkan angka kedua: ");
                scanf("%i", &d);
            printf("\nHasil: %i %% %i = %i", c , d , c % d);
            ulang4:
                printf("\n\nAgain/End/Home(a/e/h):");
                decision=getch();

            if( decision == 'a')
                {
            goto five;
            }
            else if( decision == 'e')
                {
                 goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
                    goto ulang4;
            }

        case 6:
            system("cls");
            goto home;

        case 10:
            keluar:
            printf("\n\nYakin mau keluar? yes/no(y/n):");
            keluar=getch();
            if ( keluar == 'y')
                exit(0);
            else
                system("cls");
                goto home;

        default:
            printf("\n\nInputan anda Salah!!!!!");
            system("pause");
            system("cls");
            goto kalkulator;

    }
//akhir dari fitur kalkulator

//fitur looping
fiturlooping:

    printf("\n\n\t\t\t\t================LOOPING================\n\n");
       printf("\n\n====================================");
        printf("\n  Pilihan Fitur Looping");
            printf("\n====================================");
            printf("\n  1.Deret Bilangan Biasa\n");
                printf("  2.Deret Bilangan Genap dan Ganjil\n");
                    printf("  3.Deret Bilangan Pangkat\n");
                        printf("  4.Back\n");
                            printf("  5.Exit\n");
    printf("====================================\n");
            printf("\n>Masukkan nomor pilihan anda (1,2,3,4,5): ");
        scanf("%i", &pilih);

    switch(pilih){

        case 1:
            system("cls");
            goto fitur1;

        case 2:
            system("cls");
            goto fitur2;
            break;

        case 3:
            system("cls");
            goto fitur3;
            break;




        }




 int max;
 char pilih_ulang;
 //fitur deret angka biasa
 fitur1:
       printf("\n\n\t\t\t\t================DERET BILANGAN BIASA================\n\n");

        printf("\n\n  Masukkan batas angka max: ");
     scanf("%i", &max);
        if(max > 100 || max <= 0)
        {
            printf("\n  Input maksimal 1 - 100 dan minimal input harus 1!! ");
            u_l:
            printf("\n\n  Ingin ulang atau tidak?(y/n):");
            pilih_ulang=getch();
            if ( pilih_ulang =='y')
            {
                system("cls");
                goto fitur1;


            }
            else if(pilih_ulang =='n')
            {
                system("cls");
                goto home;

            }
            else
                goto u_l;
        }


        printf("\n  Max= %i", max);

     printf("\n\n  Masukkan angka terserah: ");
        scanf("%i", &hitung);
        printf("\n");

   for(int x = 1; hitung <= max; hitung++, x++)
    {
        if( max > 0 && max < 14)
        {
            printf("\t%2i", hitung);
        }

      else if( max > 13){
            if(x % NUMBER_PER_ROW == 0)
		{
			printf("\t%2i\n\n", hitung);
		}
		else
		{
			printf("\t%2i ", hitung);
		}
      }

    }
   ulangwhile:
   printf("\n\n  Again/End/Home/Back(a/e/h/b):");
            decision=getch();
            if( decision == 'a')
                {
            system("cls");
            goto fitur1;
            }
            else if( decision == 'e')
                {
                 goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto fiturlooping;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
                    goto ulangwhile;
            }
//akhir fitur1 looping.

//fitur deret angka genap dan ganjil
fitur2:
    system("COLOR B");
 printf("\n\n\t\t\t\t================DERET BILANGAN GENAP GANJIL================\n\n");
    printf("\n\n  Pilih Genap atau Ganjil");

    printf("\n\n  Pilihan anda ( genap / ganjil ): ");
    fflush(stdin);
    gets(pilihan);
    if ( !strcmp( pilihan , "genap" ))
    {
        system("cls");
        goto genap;

    }
    else if ( !strcmp( pilihan , "ganjil" ))
    {
        system("cls");
        goto ganjil;
    }
    else
    {
        system("cls");
        goto fitur2;

    }

//Deret Genap
genap:
    system("COLOR A");
 printf("\n\n\t\t\t\t================DERET BILANGAN GENAP================\n\n");
 printf("\n\n  Masukkan batas angka awal: ");
 scanf("%i", &c);
 printf("\n\n  Masukkan batas angka max: ");
     scanf("%i", &max);
     printf("\n");
     if ( max < 2 || max > 100 )
     {
         printf("\n  Inputan max minimal 2 dan tidak boleh lebih dari 100!!");
        goto u_l1;
     }
     else if ( max > 1 || max <= 100)
     {
    while (c & 1) // ensure <c> is even
        c++;
	while (max & 1) // ensure <max< is even
		max++;

	for (int x = 1; c <= max; c += 2, x++)
	{
		if (x % NUMBER_PER_ROW == 0)
		{
			printf("\t%2i\n", c);
		}
		else
		{
			printf("\t%2i ", c);
		}
	}
        }

u_l1:
     printf("\n\n  Ingin ulang atau tidak?(y/n):");
            pilih_ulang=getch();
            if ( pilih_ulang =='y')
            {
                system("cls");
                goto genap;


            }
            else if(pilih_ulang =='n')
            {
                system("cls");
                goto home;

            }
            else
                goto u_l1;

//Akhir Deret Genap


//Deret Ganjil
ganjil:
system("COLOR A");
 printf("\n\n\t\t\t\t================DERET BILANGAN GANJIL================\n\n");
printf("\n\n  Masukkan batas angka awal: ");
 fflush(stdout);
 scanf("%i", &c);

printf("\n\n  Masukkan batas angka max: ");
     fflush(stdout);
     scanf("%i", &max);
     printf("\n");
     if ( max < 2 || max > 100 )
     {
         printf("\n  Inputan max minimal 2 dan tidak boleh lebih dari 100!!");
        goto u_l2;
     }
     else if ( max > 1 || max <= 100)
     {
        while (c%2==0) // ensure <c> is odd
		c++;
        while (c & 0) // ensure <max< is odd
		max++;

	for (int x = 1; c <= max; c += 2, x++)
	{

		if (x % NUMBER_PER_ROW == 0)
		{
			printf("\t%2i\n", c);
		}
		else
		{
			printf("\t%2i ", c);
		}
	}
     }
     u_l2:
     printf("\n\n  Ingin ulang atau tidak?(y/n):");
            pilih_ulang=getch();
            if ( pilih_ulang =='y')
            {
                system("cls");
                goto ganjil;


            }
            else if(pilih_ulang =='n')
            {
                system("cls");
                goto home;

            }
            else
                goto u_l2;

//akhir deret ganjil


//deret bilangan pangkat
fitur3:
printf("\n\n\t\t\t\t================DERET BILANGAN PANGKAT================\n\n\n");
printf("  Masukkan bilangan yang akan dipangkatkan: ");
	scanf("%i", &a1);
	printf("\n\n  Jumlah deret angka: ");
	scanf("%i", &b1);
	printf("\n\n");

	for(i=1; i <= b1; i++){

        c=pow(a1,i);
        printf("  %i ", c);
	}













getch();
//fitur keliling BD
keliling:
//deklarasi
 printf("\n\n\t\t\t\t================KELILING================\n\n");

printf("\n\n======================");
                printf("\nPilihan Bangun Datar\n");
printf("======================\n");
                printf("1.Persegi\n");
                printf("2.Persegi Panjang\n");
                printf("3.Jajar Genjang\n");
                printf("4.Trapesium\n");
                printf("5.Belah Ketupat\n");
                printf("6.Layang Layang\n");
                printf("7.Segitiga\n");
                printf("8.Lingkaran\n");
                printf("9.Back\n");
                printf("10.Exit \n");
printf("======================\n");

    printf(">Masukkan nomor pilihan anda (1,2,3,4,5,6,7,8,9,10): ");
    scanf("%i", &pilih);

switch(pilih)
    {
    k1:
    case 1:
            system("cls");
            printf("\n\nAnda Memilih Persegi\n");
            printf("\nMasukkan sisi persegi:");
            scanf("%f", &s);
            printf("Sisi Persegi: %.2f\n", s);
            e= 4 * s;
            printf("\nHasil: 4 x %.2f = %.2f\n",s , e );
            try:
            printf("\n\nAgain/End/Home/back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto k1;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto keliling;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try;
            }

    case 2:
            k2:
            system("cls");
            printf("\n\nAnda Memilih Persegi Panjang\n");
            printf("\nMasukkan panjang persegi panjang:");
            scanf("%f", &p);
            printf("\nMasukkan lebar persegi panjang:");
            scanf("%f", &l);
            printf("\nPanjang Persegi panjang: %.2f\n", p);
            printf("Lebar Persegi panjang: %.2f\n", l);
            e= 2 * (p + l);
            printf("\nHasil: 2 x (%.2f + %.2f) = %.2f\n",p , l, e );
            try1:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto k2;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto keliling;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try1;
            }

case 3:
            k3:
            system("cls");
            printf("\n\nAnda Memilih Jajar Genjang\n");
            printf("\nMasukkan A(atas) Jajar Genjang:");
            scanf("%f", &a);
            printf("\nMasukkan B(bawah) Jajar Genjang:");
            scanf("%f", &b);
            printf("\nAtas Jajar Genjang: %.2f\n", a);
            printf("Bawah Jajar Genjang: %.2f\n", b);
            e= 2 * (a + b);
            printf("\nHasil: 2 x (%.2f + %.2f) = %.2f\n",a , b, e );
            try2:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto k3;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto keliling;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try2;
            }

case 4:
            k4:
            system("cls");
            printf("\n\nAnda Memilih Trapesium\n");
            printf("\nMasukkan sisi 1:");
            scanf("%f", &a);
            printf("\nMasukkan sisi 2:");
            scanf("%f", &b);
            printf("\nMasukkan sisi 3:");
            scanf("%f", &s);
            printf("\nMasukkan sisi 4:");
            scanf("%f", &l);
            printf("\nSisi 1: %.2f\n", a);
            printf("Sisi 2: %.2f\n", b);
            printf("Sisi 3: %.2f\n", s);
            printf("Sisi 4: %.2f\n", l);

            e= a+b+s+l;
            printf("\nHasil: %.2f + %.2f + %.2f + %.2f = %.2f\n",a , b, s, l, e );
            try3:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto k4;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto keliling;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try3;
            }

case 5:
            k5:
            system("cls");
            printf("\n\nAnda Memilih Belah Ketupat\n");
            printf("\nMasukkan sisi Belah Ketupat:");
            scanf("%f", &s);
            printf("\nSisi Belah Ketupat: %.2f\n", s);

            e= 4 * s;
            printf("\nHasil: 4 x %.2f = %.2f\n", s, e );
            try4:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto k5;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto keliling;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try4;
            }

case 6:
            k6:
            system("cls");
            printf("\n\nAnda Memilih Layang Layang\n");
            printf("\nMasukkan sisi pendek:");
            scanf("%f", &p);
            printf("\nMasukkan sisi panjang:");
            scanf("%f", &l);
            printf("\nSisi pendek: %.2f\n", p);
            printf("Sisi panjang: %.2f\n", l);
            e= 2 * (p+l);
            printf("\nHasil: 2 x (%.2f + %.2f) = %.2f\n", p,l, e );
            try5:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto k6;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto keliling;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try5;
            }

case 7:
            k7:
            system("cls");
            printf("\n\nAnda Memilih Segitiga\n");
            printf("\nMasukkan sisi 1:");
            scanf("%f", &a);
            printf("\nMasukkan sisi 2:");
            scanf("%f", &b);
            printf("\nMasukkan sisi 3:");
            scanf("%f", &s);
            e= a + b + s;
            printf("\nHasil: %.2f + %.2f + %.2f = %.2f\n", a,b,s, e );
            try6:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto k7;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto keliling;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try6;
            }

case 8:
            k8:
            system("cls");
            printf("\n\nAnda Memilih Lingkaran\n");
            printf("\n\n==========================");
            printf("\nPilihan Opsi\n");
            printf("1.Keliling Lingkaran\n");
            printf("2.Mencari Diameter ( d )\n");
            printf("3.Mencari Jari Jari ( r )\n");
            printf("4.Back\n");
            printf("==========================\n");
            printf(">Masukkan nomor pilihan anda (1,2,3,4): ");
            scanf("%i", &pilih);

            switch(pilih){

            case 1:
                system("cls");
                goto k8a;
                break;
            case 2:
                system("cls");
                goto diameter;
                break;
            case 3:
                system("cls");
                goto jarijari;
                break;
            case 4:
                system("cls");
                goto keliling;
                break;
            default:
                system("cls");
                goto k8;
                break;



            }
            k8a:
                printf("\n\nKeliling Lingkaran\n");
                printf("\nMasukkan Diameter ( d ):");
                scanf("%f", &diam);
                printf("\nDiameter Lingkaran: %.2f", diam);
                e= phi * diam;
                printf("\nHasil %.2f x %.2f: %.2f ", phi, diam, e);
            try7:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            system("cls");
            goto k8a;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto k8;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try7;
            }

        diameter:
            printf("\n\nMencari Diameter\n\n");
            printf("Masukkan Jari jari ( r ):");
            scanf("%f", &r);
            printf("\nJari Jari: %.2f", r);
            e= 2 * r;
            printf("\n\nDiameter Lingkaran: 2 x %.2f= %.2f", r, e);
            try8:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            system("cls");
            goto diameter;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto k8;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try8;
            }

        jarijari:
            printf("\n\nMencari Jari Jari\n\n");
            printf("Masukkan Diameter ( d ):");
            scanf("%f", &diam);
            printf("\nDiameter: %.2f", diam);
            e= diam/2;
            printf("\n\nJari Jari Lingkaran:%.2f : 2= %.2f", diam, e);
            try9:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            system("cls");
            goto jarijari;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto k8;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try9;
            }

        case 9:
              system("cls");
              goto home;

        case 10:
            printf("\n\nYakin mau keluar? yes/no(y/n):");
            keluar=getch();
            if ( keluar == 'y')
                exit(0);
            else
                system("cls");
                goto keliling;

        default:
            printf("\n\nInputan anda Salah!!!!!");
            system("pause");
            system("cls");
            goto keliling;

    }

//fitur luas BD
luas:

printf("\n\n\t\t\t\t================LUAS================\n\n");
printf("======================");
                printf("\nPilihan Bangun Datar\n");
printf("======================\n");
                printf("1.Persegi\n");
                printf("2.Persegi Panjang\n");
                printf("3.Jajar Genjang\n");
                printf("4.Trapesium\n");
                printf("5.Belah Ketupat\n");
                printf("6.Layang Layang\n");
                printf("7.Segitiga\n");
                printf("8.Lingkaran\n");
                printf("9.Back\n");
                printf("10.Exit \n");
printf("======================\n");

    printf(">Masukkan nomor pilihan anda (1,2,3,4,5,6,7,8,9,10): ");
    scanf("%i", &pilih);


    switch(pilih){

    case 1:
        l1:
        system("cls");
            printf("\n\nAnda Memilih Persegi\n");
            printf("\nMasukkan sisi persegi:");
            scanf("%f", &s);
            printf("Sisi Persegi: %.2f\n", s);
            e= s * s;
            printf("\nHasil: %.2f x %.2f = %.2f\n",s , s , e );
            try10:
            printf("\n\nAgain/End/Home/back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto l1;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto luas;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try10;
            }

    case 2:
            l2:
            system("cls");
            printf("\n\nAnda Memilih Persegi Panjang\n");
            printf("\nMasukkan panjang persegi panjang:");
            scanf("%f", &p);
            printf("\nMasukkan lebar persegi panjang:");
            scanf("%f", &l);
            printf("\nPanjang Persegi panjang: %.2f\n", p);
            printf("Lebar Persegi panjang: %.2f\n", l);
            e= p * l;
            printf("\nHasil: %.2f x %.2f = %.2f\n",p , l, e );
            try11:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto l2;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto luas;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try11;
            }

    case 3:
            l3:
            system("cls");
            printf("\n\nAnda Memilih Jajar Genjang\n");
            printf("\nMasukkan Alas Jajar Genjang:");
            scanf("%f", &a);
            printf("\nMasukkan Tinggi Jajar Genjang:");
            scanf("%f", &t);
            printf("\nAlas Jajar Genjang: %.2f\n", a);
            printf("Tinggi Jajar Genjang: %.2f\n", t);
            e= a * t;
            printf("\nHasil: %.2f x %.2f = %.2f\n",a , t, e );
            try12:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto l3;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto luas;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try12;
            }

case 4:
            l4:
            system("cls");
            printf("\n\nAnda Memilih Trapesium\n");
            printf("\nMasukkan sisi atas (a):");
            scanf("%f", &a);
            printf("\nMasukkan sisi bawah (b):");
            scanf("%f", &b);
            printf("\nMasukkan Tinggi:");
            scanf("%f", &t);
            printf("\nSisi atas: %.2f\n", a);
            printf("Sisi bawah: %.2f\n", b);
            printf("Tinggi: %.2f\n", t);

            e= (a+b)*t/2;
            printf("\nHasil: (%.2f + %.2f) x %.2f : 2 = %.2f\n",a , b, t, e );
            try13:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto l4;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto luas;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try13;
            }

case 5:
            l5:
            system("cls");
            printf("\n\nAnda Memilih Belah Ketupat\n");
            printf("\nMasukkan diagonal 1:");
            scanf("%f", &a);
            printf("\nMasukkan diagonal 2:");
            scanf("%f", &b);
            printf("\nDiagonal 1: %.2f", a);
            printf("\nDiagonal 2: %.2f\n", b);
            e= a * b / 2;
            printf("\nHasil: %.2f x %.2f : 2 = %.2f\n", a, b, e );
            try14:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto l5;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto luas;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try14;
            }

case 6:
            l6:
            system("cls");
            printf("\n\nAnda Memilih Layang Layang\n");
            printf("\nMasukkan diagonal 1:");
            scanf("%f", &a);
            printf("\nMasukkan diagonal 2:");
            scanf("%f", &b);
            printf("\nDiagonal 1: %.2f\n", a);
            printf("Diagonal 2: %.2f\n", b);
            e= a * b / 2;
            printf("\nHasil: %.2f x %.2f / 2 = %.2f\n", a , b , e );
            try15:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto l6;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto luas;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try15;
            }

case 7:
            l7:
            system("cls");
            printf("\n\nAnda Memilih Segitiga\n");
            printf("\nMasukkan Alas:");
            scanf("%f", &a);
            printf("\nMasukkan Tinggi:");
            scanf("%f", &t);
            printf("\nAlas Segitiga: %.2f", a);
            printf("\nTinggi Segitiga: %.2f\n", t);
            e= a * t / 2;
            printf("\nHasil: %.2f x %.2f / 2 = %.2f\n", a , t , e );
            try16:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            goto l7;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto luas;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try16;
            }

case 8:
            l8:
            system("cls");
            printf("\n\nAnda Memilih Lingkaran\n");
                printf("\nMasukkan Jari jari (r):");
                scanf("%f", &r);
                printf("\nJari Jari Lingkaran: %.2f",r);
                e= phi * r * r;
                printf("\nHasil %.2f x %.2f x %.2f: %.2f ", phi, r, r, e);
            try17:
            printf("\n\nAgain/End/Home/Back(a/e/h/b):");
                decision=getch();

            if( decision == 'a')
                {
            system("cls");
            goto l8;
            }
            else if( decision == 'e')
                {
                    goto keluar;
                }
            else if(decision == 'h')
            {
                system("cls");
                goto home;
                break;
                }
            else if( decision == 'b')
            {
                system("cls");
                goto luas;
                break;
            }
            else if( decision !='a' && decision!='e' )
                {
                    printf("\n\nInput tidak Valid!Coba lagi!");
            goto try17;
            }

        case 9:
              system("cls");
              goto home;

        case 10:
            printf("\n\nYakin mau keluar? yes/no(y/n):");
            keluar=getch();
            if ( keluar == 'y')
                exit(0);
            else
                system("cls");
                goto luas;

        default:
            printf("\n\nInputan anda Salah!!!!!");
            system("pause");
            system("cls");
            goto luas;

    }


}










