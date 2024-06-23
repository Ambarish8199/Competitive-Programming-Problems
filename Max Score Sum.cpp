#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n] ;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n,greater<int>());
    swap(A[0],A[n-2]);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            arr[i] = 0;
        }
        else{
            arr[i] = A[i] + A[i+1];
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Maximum Score Is: "<<sum<<endl;
    return 0;
}