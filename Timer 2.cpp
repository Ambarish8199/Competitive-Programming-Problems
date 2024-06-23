#include<iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int sum=0;
    int N1=N,N2;
    for(int i=0;i<N1;i++)
    {
    	N2= N;
    	int count =1;
        if(N%10 == 0)
        { 
            while(N2%10==0)
            {
                (++count);
                N2=N2/10;
        }
        cout<<"Value count "<<count<<endl;
        sum = sum + count;
        cout<<"Value1 "<<sum<<endl;
    }
        else
        {
            sum = sum + count;
            cout<<"Value2 "<<sum<<endl;
        }
        N = N-1;
    }
    cout<<sum;
    return 0;
}