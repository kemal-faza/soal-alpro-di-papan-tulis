// Nama: Muhamad Kemal Faza
// NIM: 24060124120013
// Kelas: D Informatika 2024

#include <stdio.h>
#include <string.h>

int maxTabel(int T[], int N)
{
    int max = 0, i, IX;
    for (i = 0; i < N; i++)
    {
        if (T[i] >= max)
        {
            max = T[i];
            IX = i;
        }
    }

    return IX;
}

int indexKota(char kota[], char **dataKota)
{
    int i, IX = -1;
    for (i = 0; i < 3; i++)
    {
        if (strcmp(kota, dataKota[i]) == 0)
        {
            IX = i;
        }
    }

    return IX;
}

int main()
{
    int i, j, sum, b, k, iMax;
    char kota[20];
    int data_penjualan[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};
    char *dataKota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
    char *dataBulan[4] = {"Januari", "Februari", "Maret", "April"};

    b = 3;
    k = 4;
    int *penjualanKota;

    printf("Masukkan nama kota: \n");
    scanf("%s", &kota);

    penjualanKota = data_penjualan[indexKota(kota, dataKota)];

    for (i = 0; i < k; i++)
    {
        printf("%d\n", penjualanKota[i]);
    }

    iMax = maxTabel(penjualanKota, k);
    printf("Penjualan %s yang tertinggi pada kota %s sebesar %d", dataKota[indexKota(kota, dataKota)], dataBulan[iMax], penjualanKota[iMax]);

    return 0;
}