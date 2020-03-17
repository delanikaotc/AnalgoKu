/* 
Nama    : Delanika Olympiani T. C.
NPM     : 140810180026
Program : Sequential Search
*/

#include <iostream>

using namespace std;

typedef int angka[100];

void SequentialSearch(angka a, int y, int& idx, int n);

int main(){
    angka a;
    int n, y, idx;
    bool found;

    cout << "Input jumlah angka: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Angka ke-" << i+1 << ": ";
        cin >> a[i];
    }

    cout << "Input angka yang ingin dicari: "; cin >> y;
    SequentialSearch(a, y, idx, n);
    cout << "Angka yang dicari berada pada indeks: " << idx << endl;
    
}

void SequentialSearch(angka a, int y, int& idx, int n){
    int i;
    bool found;

    i = 1;
    found = false;

    while(i <= n && !found){
        if (a[i] == y){
            found = true;
        }
        else{
            i = i + 1;
        }
    }

    if(found){
        cout << found;
        idx = i;
    }
    else{
        cout << found;
        idx = 0; 
    }
}