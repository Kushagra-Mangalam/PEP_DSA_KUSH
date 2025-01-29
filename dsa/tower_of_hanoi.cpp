#include<iostream>
using namespace std;
void towerOfHanoi(int n, char source, char target ,char auxillary)
{
	if (n == 1)
	{
		cout<<"\n Move disk 1 from rod "<<source<<" to rod "<<target;
	    return;
	}
	towerOfHanoi(n-1, source, auxillary, target);
	cout<<"\n Move disk "<<n<<" from rod "<<source<<" to rod "<<target;
	towerOfHanoi(n-1, auxillary, target, source);
}

int main()
{
	int n ; // Number of disks
	cout<<"enetr how many disk";
	cin>>n;
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
	return 0;
}
