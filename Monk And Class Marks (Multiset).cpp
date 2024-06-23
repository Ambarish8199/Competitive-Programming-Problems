#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	map<int,multiset<string>> m;//Star concept 
	for(int i=0;i<N;i++)
	{
		int marks;
		string name;
		cin>>marks>>name;
		if((marks>0) && (marks<100)){
		m[marks].insert(name);
	}
		else{
			continue;
		}
	}
	for(auto it = m.rbegin();it != m.rend();it++){//New method for reverse printing 
		auto &st1 = (*it).second;
		for(auto &element : st1){
			cout<<element<<" "<<(*it).first<<endl;
		}
	}
	return 0;
}