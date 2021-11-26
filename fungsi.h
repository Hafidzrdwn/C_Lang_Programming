#ifndef FUNGSI_H_INCLUDED
#define FUNGSI_H_INCLUDED

void garis()
{
    printf("\n\n\t\t\t       =======================================================\n");
}
void garis1()
{
    printf("\t\t\t       =======================================================\n");
}

void hasil(float nilai)
{
    if (nilai >= 97)
    {
        printf("\n  SELAMAT ANDA LULUS DAN ANDA SANGAT JENIUS!!\n");
    }
    else if (nilai >= 85)
    {
        printf("\n  LULUS DENGAN NILAI MEMUASKAN\n");
    }
    else if (nilai >= 70 && nilai < 85)
    {
        printf("\n  LULUS DENGAN NILAI BAIK\n");
    }
    else if (nilai < 70 && nilai > 50)
    {
        printf("\n  MAAF ANDA BELUM KOMPETEN\n");
    }
    else
        printf("\n  BELAJAR LEBIH GIAT LAGI, ANDA BODOH!!!!");
}

void sret()
{
    printf("  |");
}
#endif // FUNGSI_H_INCLUDED
