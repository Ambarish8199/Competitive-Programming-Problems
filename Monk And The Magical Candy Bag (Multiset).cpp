#include<bits/stdc++.h>
using namespace std;

void setvalue(multiset<long int> &m,int n){
	for(int i=0;i<n;i++){
	long int x;
	cin>>x;
	m.insert(x);
    }
}
 
int main(){
	int T ;
	cin>>T;
	while(T--){
		int N,K;
		cin>>N>>K;
		multiset<long int> A;
		setvalue(A,N);
		int sum = 0;
		while(K--){
			cout<<"Value In Set: "<<endl;
			for(auto i=A.begin();i!=A.end();i++)
			{
				cout<<*(i)<<endl;
			}
			auto it = A.end();
			sum = sum + *(--it);
			A.erase(it);
			A.insert((*it)/2);
		}
		cout<<sum<<endl;
	}
	return 0;
}