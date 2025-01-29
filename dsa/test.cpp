#include<iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j=1; j<n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j ; k < n ; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n=n-1;
            }
        }
    }
 cout << "Updated array: ";
    for (int i = 0 ; i<n; i++)
    {
        cout << arr[i] << " " ;    
    }

}
