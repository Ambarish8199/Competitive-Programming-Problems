#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	long int N,T;
	cin>>T;
	while(T){
	long int i = 0;
	cin>>N;
	while(!((pow(2,i) <= N) && (N< pow(2,i+1))))
	{
		i++;
	}
	cout<<pow(2,i);
	T--;
}
    return 0;
}