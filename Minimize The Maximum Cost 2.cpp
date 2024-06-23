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
	vector<pair<int,int>> v_p;
    for(auto i = v.begin();i<v.end() - 1;i++)
	{
	     v_p.push_back({*(i),*(i+1)});
	     i++;
	}
	for(auto i =v_p.begin();i<v_p.end();i++)
	{
		cout<<"Value Of Balls In Containers: "<<(*i).first<<"  "<<(*i).second<<endl;
	}
	vector<int> v_diff;
	for(auto i = v_p.begin();i<v_p.end()-1;i++)
	{
		v_diff.push_back((*i).second - (*i).first);
	}
	sort(v_diff.begin(),v_diff.end());
	auto it = v_diff.end();
	cout<<"Minimized Maximum Cost: "<<*(it-1);
    }
    return 0;
}