#include<bits/stdc++.h>
using namespace std;

void setvalue(vector<long int> &a,long int n)
{
	for(long int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[i] = x;
	}
}
int main()
{
	long int N;
	cin>>N;
	vector<long int> arr;
	setvalue(arr,N);
	/*for(long int i=0;i<N;i++)
	{
		long int x;
		cin>>x;
		arr[i] = x;
	}*/
	long int Q,l,r,j=0;
	cin>>Q;
	vector<long int> t;
	while(Q){
	long int i = 0;
	cin>>l>>r;
	while(l<=r)
	{
		t[j] = pow(-1,i)*(arr[l-1]) + t[j];
		l++;
		i++;
	}
	j++;
	Q--;
}
    for(long int i = 0;i<j;i++)
    {
    	cout<<t[i]<<endl;
	}
	return 0;
}