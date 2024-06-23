#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter The Number: "<<endl;
	cin>>n;
	long int time = 0;
	long int val_10 = 0;
	do{
		int t;
		t = n%10;
		time = t*(1 + 10*val_10) + time;
		n = n/10;
		val_10 = 10*val_10 + 1;
	}while(n);
	cout<<"Time Taken: "<<time;
	return 0;
}