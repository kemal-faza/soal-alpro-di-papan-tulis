// Nama: Muhamad Kemal Faza
// NIM: 24060124120013
// Kelas: D Informatika 2024

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int indexBulan(char bulan[], char **dataBulan)
{
    int i, IX = -1;
    for (i = 0; i < 4; i++)
    {
        if (strcmp(bulan, dataBulan[i]) == 0)
        {
            IX = i;
        }
    }

    return IX;
}

int main()
{
    int i, j, sum, b, k, iMax;
    char bulan[10];
    int data_penjualan[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};
    char *dataKota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
    char *dataBulan[4] = {"Januari", "Februari", "Maret", "April"};

    b = 3;
    k = 4;
    int *penjualanBulan = (int *)malloc(b * sizeof(int));

    printf("Masukkan nama bulan: \n");
    scanf("%s", &bulan);

    for (i = 0; i < b; i++)
    {
        penjualanBulan[i] = data_penjualan[i][indexBulan(bulan, dataBulan)];
    }

    for (i = 0; i < b; i++)
    {
        printf("%d\n", penjualanBulan[i]);
    }

    iMax = maxTabel(penjualanBulan, b);
    printf("Penjualan %s yang tertinggi pada kota %s sebesar %d", dataBulan[indexBulan(bulan, dataBulan)], dataKota[iMax], penjualanBulan[iMax]);

    return 0;
}