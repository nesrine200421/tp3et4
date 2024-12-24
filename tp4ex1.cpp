#include <iostream>
using namespace std;

template <typename T>
void echanger(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

#include <iostream>
#include <iterator> 
using namespace std;

template <typename T>
void echanger(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void trier(T tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        int m = i;
        for (int j = i + 1; j < taille; j++) {
            if (tab[j] < tab[m]) {
                m = j;
            }
        }
        echanger(tab[i], tab[m]);
    }
}

int main() {
    int tab[] = { 5, 2, 9, 1, 5, 6, 8, 7, 4, 3 };

    int taille = std::size(tab);

    trier(tab, taille);

    for (int i = 0; i < taille; i++) {
        cout << tab[i] << " ";
    }
    return 0;
}

