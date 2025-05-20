// Nama: Muhamad Kemal Faza
// NIM: 24060124120013
// Kelas: D Informatika 2024

#include <stdio.h>

int maxTabel(float T[], int N)
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

int main()
{
    int i, j, sum, b, k, iMax;
    int data_penjualan[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};
    char *dataKota[3] = {"Semarang", "Jakarta", "Yogyakarta"};

    b = 3;
    k = 4;
    float kotaRataRataTerbesar[b];

    for (i = 0; i < b; i++)
    {
        sum = 0;
        for (j = 0; j < k; j++)
        {
            sum += data_penjualan[i][j];
        }
        kotaRataRataTerbesar[i] = (float)sum / k;
    }

    for (i = 0; i < b; i++)
    {
        printf("%f\n", kotaRataRataTerbesar[i]);
    }

    iMax = maxTabel(kotaRataRataTerbesar, b);
    printf("Kota %s memiliki rata-rata penjualan tertinggi.", dataKota[iMax]);

    return 0;
}