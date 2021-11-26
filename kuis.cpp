#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include "fungsi.h"
#include <time.h>



int main(void){

first:
int a,b,i,c,p;
char pass[100], pilihan[100];
garis();
printf("                               |                  LAMAN UJIAN SISWA                  |\n");
garis1();
printf("\n\n\n  ===========================================================");
printf("\n  | PASSWORD LOGIN\n");
sret();
printf("\n  | !!Format Penulisan Password: 'kata'(spasi)'angka'!!\n");
sret();
printf("\n  | Buat (Ketik Password): ");
scanf("%s %d", pass, &p);
sret();
printf("\n  | Sudah yakin dengan password anda?(sudah/belum): ");
fflush(stdin);
gets(pilihan);
if ( !strcmp( pilihan , "sudah"))
{
  goto next;
}
else if (!strcmp( pilihan, "belum" ))
{
    system("cls");
    goto first;
}
next:
sret();
printf("\n  | Password Anda: %s %d\n", pass, p);
sret();
printf("\n  | Hitung dan Jawab operasi dibawah ini!! \n");
sret(); printf("=======================================");
srand(time(NULL));
a= 2 + (rand()%5);
b= 2 + (rand()%5);
i= a+b;
op:
printf("\n  | %d + %d = ", a, b);
scanf("%d", &i);
sret(); printf("=======================================\n\n");
if( i == a + b)
{
   system("pause");
   system("cls");
   goto question;
}
else
{
    garis();
    printf("                               |          MAAF JAWABAN ANDA SALAH, ULANGI!!          |\n");
    garis1();
    system("pause");
    goto op;
}
question:

printf("\n\n=================");
printf("\n   PERTANYAAN   |\n");
printf("=================");

printf("\n\n");
return(0);
}



