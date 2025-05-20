// Nama: Muhamad Kemal Faza
// NIM: 24060124120013
// Kelas: D Informatika 2024

#include <stdio.h>

int maxTabel(float T[], int N)
{
    int max = T[0], i, IX;
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

int main()
{
    int i, j, sum, b, k, iMax;
    int data_penjualan[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};
    char *dataBulan[4] = {"Januari", "Februari", "Maret", "April"};

    b = 3;
    k = 4;
    float bulanRataRataTerbesar[b];

    for (j = 0; j < k; j++)
    {
        sum = 0;
        for (i = 0; i < b; i++)
        {
            sum += data_penjualan[i][j];
        }
        bulanRataRataTerbesar[j] = (float)sum / b;
        printf("%f\n", bulanRataRataTerbesar[j]);
    }

    iMax = maxTabel(bulanRataRataTerbesar, k);
    printf("Bulan %s memiliki rata-rata penjualan tertinggi.", dataBulan[iMax]);

    return 0;
}