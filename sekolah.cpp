//program menghasilkan pola bentuk string yg diinginkan(Hafidz Ridwan C 34 10 RPL 1)
#include <stdio.h>
#include <string.h>
#define MAKS 300

main() {
    char kata[MAKS];
    int i,j;

    printf("Masukkan sebuah kata: ");
    scanf("%s", kata);

    for(j=0;j<strlen(kata);j++)
    {
        for(i=0;i<strlen(kata)-j;i++)
        {
            printf("%c", kata[i]);

        }
        printf("\n");
    }

}
