/* 
Nama    : Delanika Olympiani T. C.
NPM     : 140810180026
Program : Mencari nilai terbesar
*/

#include<iostream>

using namespace std;

typedef int angka[5];

void cariMaks(angka& a, int& max, int& n){
    max = a[1];
    int i = 2;
    while(i <= n){
        if(a[i]>max){
            max = xai];
        }
    i++;
    }
    cout<<"Angka terbesar: "<<max;
}

int main(){
    angka a;
    int n, max;
    cout << "Input banyak angka: "; cin >> n;
    for (int i = 1; i <= n; i++){
        cin>>a[i];
    }
    cariMaks(a, max, n);
}

