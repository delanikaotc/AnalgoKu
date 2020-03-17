/* 
Nama    : Delanika Olympiani T. C.
NPM     : 140810180026
Program : Binary Search
*/

#include <iostream>

using namespace std;

typedef int angka[100];

void BinarySearch(angka a, int y, int& idx, int n);

int main(){
    angka a;
    int i, j, mid, idx, n, y;
    bool found;

    cout << "Input jumlah angka: "; cin >> n;
    for(int q = 0; q < n; q++){
        cout << "Angka ke-" << q+1 << ": ";
        cin >> a[q];
    }

    cout << "Input angka yang ingin dicari: "; cin >> y;
    BinarySearch(a, y, idx, n);
    cout << "Angka yang dicari berada pada indeks: " << idx << endl;

}

void BinarySearch(angka a, int y, int& idx, int n){
    int i, j, mid;
    bool found;

    i = 1;
    j = n;
    found = false;

    while (!found && i <= j){
        mid = ((i+j)/2);
        if(a[mid] == y){
            found = true;
        }
        else{
            if(a[mid] < y){
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
        }
    }

    if(found){
        idx = mid;
    }
    else{
        idx = 0;
    }
}
