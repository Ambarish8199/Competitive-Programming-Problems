#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cout<<"Enter The No. Of Balls: "<<endl;
	cin>>N;
	if(N%2 == 0){
	vector<int> v;
	cout<<"Enter The Value Of Each Balls: "<<endl;
	for(int i=0;i<N;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	vector<int> v_diff;
	for(auto i=v.begin();i<v.end() - 1;i++)
	{
		v_diff.push_back(*(i+1) - *(i));
		i++;
	}
	for(auto i = v_diff.begin();i<v_diff.end();i++)
	{
		cout<<"Cost of Containers: "<<*(i)<<endl;
	}
	cout<<endl;
	sort(v_diff.begin(),v_diff.end());
	auto it = v_diff.end();
	cout<<"Minimized Maximum Cost Is: "<<*(it-1)<<endl;
}
    return 0;
}