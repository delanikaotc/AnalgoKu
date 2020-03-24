/*
Nama    : Delanika Olympiani
NPM     : 140810180026
Kelas   : B
*/

#include <iostream> 
#include <chrono> 

using namespace std;

void satu(int* A, int p, int q,int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1];
    int R[n2+1];
    for (int i=1; i<=n1; i++){
        L[i-1] = A[(p-1)+i-1]; 
        }
    for (int j=1; j<=n2; j++){ 
        R[j-1] = A[(q-1)+j];
    }

    int i=0;
    int j=0; 

    L[n1]=2147483647; 
    R[n2]=2147483647;

    for (int k=(p-1); k<r; k++){ 
        if(L[i]<=R[j]){
            A[k]=L[i]; i = i+1;
        }else{
            A[k]=R[j];
            j = j+1; 
        }
    }

    void msort(int* A, int p, int r){
        int q;
        if(p<r){
            q = (p+r)/2;
            msort(A, p, q); msort(A, q+1, r);
            satu(A, p, q, r); 
        }
    }

    void input(int* a, int& n){
    cout << "Input banyak data: "; cin >> n; 
    for (int i=0; i<n; i++){
        cout << "Input angka: "; cin >> a[i]; 
    }

int main(){
    int A[100];
    int n;
    input(A,n);
    auto start = chrono::steady_clock::now(); 
    msort(A,1,n);
    auto end = chrono::steady_clock::now(); 
    cout << "Hasil: ";
    for(int i=0; i<n; i++){
        cout << A[i] << " "; 
    }
        cout<<endl;

    cout << "Waktu yang digunakan (nanosecond) : " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns" << endl;
return 0; 
}