    #include<iostream>
    using namespace std;

    int main(){
	 int m[3][2] = {{2, -5},
                   {4, 0},
                    {9, 1}};
    for (int i = 3; i > -1; --i) {
    	for (int j = 0; j < 2; ++j) {
            cout << m[i][j];
             }
    }
    int x = "error"; 
}
