#include <iostream>
using namespace std;

long process(long arr[], int n, long misha=0, long petya=0, int used_chachki=0)
{
    if (used_chachki == n) { return abs(misha - petya); }

    if (misha <= petya) { misha += arr[used_chachki]; }
    else { petya += arr[used_chachki]; }
    
    return process(arr, n, misha=misha, petya=petya, used_chachki=used_chachki+1);
}

int main(void)
{
    // INPUT N (кол-во чашек)
    short n = 0;
    cin >> n;

    // INPUT ARR(N) (грамовка чашек)
    long *chachki = new long[n];
    for (short i = 0; i < n; i++) { cin >> chachki[i]; }

    // SORTING (грамовку)
    long chachki_i, chachki_j;
    for (short i = 0; i < n; i++)
    {
        for (short j = i; j < n; j++)
        {
            if (chachki[i] < chachki[j])
            {

                chachki_i = chachki[i];
                chachki_j = chachki[j];
                chachki[i] = chachki_j;
                chachki[j] = chachki_i;
            }
        }
    }

    // ВЫЧИСЛЕНИЯ И ВЫВОД

    cout << process(chachki, n) << endl;

    return 0;
}