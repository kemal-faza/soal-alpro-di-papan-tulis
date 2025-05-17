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

int indexKota(char kota[])
{
    char dataKota[3][20] = {"Semarang", "Jakarta", "Yogyakarta"};
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

    b = 3;
    k = 4;
    int *penjualanKota;

    printf("Masukkan nama kota: \n");
    scanf("%s", &kota);

    penjualanKota = data_penjualan[indexKota(kota)];

    for (i = 0; i < k; i++)
    {
        printf("%d\n", penjualanKota[i]);
    }

    iMax = maxTabel(penjualanKota, k);
    if (iMax == 0)
    {
        printf("Bulan Januari memiliki rata-rata penjualan tertinggi.");
    }
    else if (iMax == 1)
    {
        printf("Bulan Februari memiliki rata-rata penjualan tertinggi.");
    }
    else if (iMax == 2)
    {
        printf("Bulan Maret memiliki rata-rata penjualan tertinggi.");
    }
    else if (iMax == 3)
    {
        printf("Bulan April memiliki rata-rata penjualan tertinggi.");
    }

    return 0;
}