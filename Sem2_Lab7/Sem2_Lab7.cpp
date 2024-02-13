#include <iostream>
using namespace std;

//сдвиг влево
void arr(int a[], const int n, bool direction) {
    if (direction == true)
    {
        int temp;
        int k;
        
        cout << "Выполнить сдвин на: ";
        cin >> k;

        for (int i = 0; i < k; i++)
        {
            temp = a[0];
            for (int j = 0; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[n - 1] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    } 
}

//сдвиг вправо
void arr(int a[], const int n) {
    int temp;
    int k;

    cout << "Выполнить сдвин на: ";
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        temp = a[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    const int n = 5;
    int a[n];
    int temp;
    bool direction = false;

    int k;

    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 50;
        cout << a[i] << " ";
    }
    cout << endl;

    if (a[0] % 2 == 0)
    {
        arr(a, n, true);
    }
    else
    {
        arr(a, n);
    }

    return 0;
}