/* 
Nama    : Delanika Olympiani T. C.
NPM     : 140810180026
Program : Selection Sort
*/

#include <iostream>

using namespace std;

typedef int angka[100];

void SelectionSort(angka& a, int n);

int main(){
    angka a;
    int n;

    cout << "Input jumlah angka: "; cin >> n;
    for(int q = 0; q < n; q++){
        cout << "Angka ke-" << q+1 << ": ";
        cin >> a[q];
    }

    SelectionSort(a, n);

    cout << "Hasil: " << endl;
    for(int q = 0; q < n; q++){
        cout << a[q] << " ";
    }
    cout << endl;
}

void SelectionSort(angka& a, int n){
    int i, j, imaks, temp;

    for(i = n; n > 2; i--){
        imaks = 1;
        for(j = 2; j < i; j++){
            if(a[j] > a[imaks]){
                imaks = j;
            }
        }
        temp = a[i];
        a[i] = a[imaks];
        a[imaks] = temp;
    }
}