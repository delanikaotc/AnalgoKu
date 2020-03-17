/* 
Nama    : Delanika Olympiani T. C.
NPM     : 140810180026
Program : Insertion Sort
*/

#include <iostream>

using namespace std;

typedef int angka[100];

void InsertionSort(angka& a, int n);

int main(){
    angka a;
    int i, j, n;

    cout << "Input jumlah angka: "; cin >> n;
    for(int q = 0; q < n; q++){
        cout << "Angka ke-" << q+1 << ": ";
        cin >> a[q];
    }

    InsertionSort(a, n);

    cout << "Hasil: " << endl;
    for(int q = 0; q < n; q++){
        cout << a[q] << " ";
    }
    cout << endl;
}

void InsertionSort(angka& a, int n){
    int i,j,insert; 

    for(i = 2; i < n; i++){
        cout << "a[i] :" << a[i] << endl;
        insert = a[i];
        j = i;
        while((j < i) && (a[j - i] > insert)){
            a[j] = a[j - 1];
            j = j - 1;
        }
        a[j] = insert;
        cout << "a[j] : " << a[j] << endl;
    }
}