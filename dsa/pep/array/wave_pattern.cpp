#include<iostream>
using namespace std;
void wavepattern(int arr[][], int r, int c) {
for (int col = 0; col < c; col++) {
        if (col % 2 == 0) {
            
            for (int row = 0; row < r; r++) {
                cout << arr[row][col] << " ";
            }
        } else {
          
            for (int row = r - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
    }
}
int main(){

}