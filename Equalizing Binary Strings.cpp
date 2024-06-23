#include<bits/stdc++.h>
using namespace std;

long int count_zero(string &s){
	long int zero=0;
	for(long int i=0;i<s.size();i++)
	{
		if(s[i] == '0')
		{
			zero++;
		}
	}
	//cout<<"0print"<<endl;
	//cout<<zero<<endl;
	return zero;
}
    long int count_mismatch(string &st1,string &st2){
    	int count=0;
    	for(long int i=0;i<st1.size();i++){
    		if(st1[i] != st2[i]){
    			count++;
			}
		}
		return count;
	}

int main(){
	long int T;
	cin>>T;
	while(T--)
	{
		long int n;
		cin>>n;
		string s1,s2;
		cin>>s1;
		cin>>s2;
		long int zero1 = count_zero(s1),one1  = n - count_zero(s1);
		long int zero2 = count_zero(s2),one2  = n - count_zero(s2);
		long int count = count_mismatch(s1,s2);
		long int diff;
		if(zero1 > zero2){
	        diff = zero1 - zero2;
	}
		else{
			diff = zero2 - zero1;}
		if(count > diff)
		{
			cout<<diff + 1<<endl;
		}
		else{
			cout<<diff<<endl;
	}
}
return 0;
}