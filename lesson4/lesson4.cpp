

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand((unsigned int)time(0));
    int i, j;
    const int n = 5;
    const int m = 5;
    int a[n][m];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i][j] = -10 + rand() % 21;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }     
    int max = a[0][0];
    int min =a[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            if (max < a[i][j])
            {
            max = a[i][j];
            }
    }
    cout << "Элемент макс=" << max << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            if (min > a[i][j])
            {
                min = a[i][j];
            }
    }
    cout << "Элемент мин=" << min << endl;
    int max_1;
    for (i = 0; i < n; i++)
    {
        max_1 = a[i][0];
        for (j = 0; j < m; j++)
        {
            if (max_1 < a[i][j])
            {
                max_1 = a[i][j];
            }
        }
        cout << "Макс элемент строки=" << max_1 << "\t" << endl;
    }
    cout << endl;
    string exit;
    cout << "Чтобы выйти из программы напишите 0" << endl;
    cin >> exit;
    while (exit != "0")
    {
        cout << "Ошибка, для выхода из программы напишите 0" << endl;
        cin >> exit;
    }
    return 0;
}

          