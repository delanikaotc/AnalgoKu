/*
Nama    : Delanika Olympiani
NPM     : 140810180026
Program : tiling problem
*/

#include<iostream>
using namespace std; 
  
int countWays(int n, int m) 
{ 
  
    int count[n + 1]; 
    count[0] = 0; 
  
    for (int i = 1; i <= n; i++) { 
        if (i > m) 
            count[i] = count[i - 1] + count[i - m]; 
  
        else if (i < m) 
            count[i] = 1; 
  
        else
            count[i] = 2; 
    } 
   
    return count[n]; 
} 
  
int main() 
{ 
    int n = 10, m = 8; 
    cout << "Number of ways = "
         << countWays(n, m); 
    cout << endl;
    return 0; 
} 