#include <stdio.h>
#include <string.h>

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
    int kota, bulan, N, Q, i, j;
    char months[4][10] = {"Januari", "Februari", "Maret", "April"};
    char cities[3][20] = {"Semarang", "Jakarta", "Yogyakarta"};

    N = 3, Q = 4;
    int sales[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};

    float kotaRataRataTerbesar[N];

    for (i = 0; i < N; i++)
    {
        int sum = 0;
        for (j = 0; j < Q; j++)
        {
            sum += sales[i][j];
        }
        kotaRataRataTerbesar[i] = (float)sum / Q;
    }

    int iKotaRataRataTerbesar = maxTabel(kotaRataRataTerbesar, N);

    float bulanRataRataTerbesar[Q];
    for (j = 0; j < Q; j++)
    {
        int sum = 0;
        for (i = 0; i < N; i++)
        {
            sum += sales[i][j];
        }
        bulanRataRataTerbesar[j] = (float)sum / (float)N;
    }
    int iBulanRataRataTerbesar = maxTabel(bulanRataRataTerbesar, N);
    // printf("%d", iBulanRataRataTerbesar);

    

    return 0;
}