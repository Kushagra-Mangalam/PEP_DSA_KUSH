#include<iostream>
using namespace std;

void spiralPrint(int arr[][3], int row, int col){
int topRow = 0;
int bottomRow = row - 1;
int leftCol = 0;
int rightCol = col - 1;

while(topRow <= bottomRow && leftCol <= rightCol){
//top row
for(int i = leftCol; i <= rightCol; i++){
cout << arr[topRow][i] << " ";
}
topRow++;

//right col
for(int i = topRow; i <= bottomRow; i++){
cout << arr[i][rightCol] << " ";
}
rightCol--;

//bottom row
for(int i = rightCol; i >= leftCol; i--){
cout << arr[bottomRow][i] << " ";
}
bottomRow--;

//left col
for(int i = bottomRow; i >= topRow; i--){
cout << arr[i][leftCol] << " ";
}
leftCol++;
}

}

int main()
{

}