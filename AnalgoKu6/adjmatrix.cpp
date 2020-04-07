/*
Nama    : Delanika Olympiani
NPM     : 140810180026
Kelas   : B
Program : Merepresentasikan graph dengan matrix (Adjacency Matrix)
*/

#include <iostream>

using namespace std;

int vertArr[20][20]; 
int count = 0;
void displayMatrix(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) {       
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}
int main(int argc, char* argv[]) {
   int v = 6;    
   add_edge(1, 2);
   add_edge(1, 3);
   add_edge(2, 3);
   add_edge(2, 4);
   add_edge(2, 5);
   add_edge(3, 5);
   add_edge(3, 7);
   add_edge(3, 8);
   add_edge(4, 5);
   add_edge(5, 6);
   displayMatrix(v);
}