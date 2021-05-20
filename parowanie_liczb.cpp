/* Podana jest niepusta tablica A składająca się z N liczb całkowitych. 
 Tablica zawiera nieparzystą liczbę elementów, a każdy element tablicy
 można sparować z innym elementem o tej samej wartości, z wyjątkiem jednego elementu, który nie jest sparowany.
 Napisać funkcję zwracającą wartość niesparowanego elementu oraz jego indeks w tablicy. */

#include <iostream>
using namespace std;
const int x = 6;

int main()
{
    int A[x];
    A[0] = 9; A[1] = 3; A[2] = 9; A[3] = 3; A[4] = 9; A[5] = 7; A[6] = 9;
    for (int i = 0; i <= x; i++)
    {

        for (int j = 6; j >= 0; j--)
        {
            if ((A[i] == A[j]) && (i != j)) {
                A[i] = 0;
                A[j] = 0;
            }
        }
    }
    for (int i = 0; i <= x; i++)
    {
        if (A[i] != 0) {
            cout << "liczba " << A[i] << " jest bez pary a jej indeks tablicy wynosi " << i;
        }
    }
}
