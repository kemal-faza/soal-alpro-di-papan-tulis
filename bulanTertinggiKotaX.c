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

int indexBulan(char bulan[])
{
    char dataBulan[4][10] = {"Januari", "Februari", "Maret", "April"};
    int i, IX = -1;
    for (i = 0; i < 3; i++)
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
    char bulan[20];
    int data_penjualan[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};

    b = 3;
    k = 4;
    int *penjualanBulan;

    printf("Masukkan nama bulan: \n");
    scanf("%s", &bulan);

    penjualanBulan = data_penjualan[indexBulan(bulan)];

    for (i = 0; i < b; i++)
    {
        printf("%d\n", penjualanBulan[i]);
    }

    iMax = maxTabel(penjualanBulan, b);
    if (iMax == 0)
    {
        printf("Kota Semarang memiliki rata-rata penjualan tertinggi.");
    }
    else if (iMax == 1)
    {
        printf("Kota Jakarta memiliki rata-rata penjualan tertinggi.");
    }
    else if (iMax == 2)
    {
        printf("Kota Yogyakarta memiliki rata-rata penjualan tertinggi.");
    }

    return 0;
}