#include<bits/stdc++.h>
using namespace std;

void printmax(int arr[], int N, int K)
{
    int mx;
    for(int i=0;i<=N-K;i++)
    {
        mx=arr[i];
        for(int j=1;j<K;j++)
        {
            if(arr[i+j]>mx)
            {
                mx=arr[i+j];
            }
        }
        cout<<mx<<" ";
    }
}
int main()
{
    int N,K;
    cin>>N;
    cin>>K;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    printmax(arr,N,K);
}
