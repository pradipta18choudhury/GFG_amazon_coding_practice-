// maximum tip calculator
#include<bits/stdc++.h>
using namespace std;

int fun(int a[],int n,int b[],int x,int y)
{
    if(n==0)
    return 0;
    if(x!=0 && y!=0)
    return max(a[n-1]+fun(a,n-1,b,x-1,y),b[n-1]+fun(a,n-1,b,x,y-1));
    if(x==0)
    return b[n-1]+fun(a,n-1,b,x,y-1);
    else
    return a[n-1]+fun(a,n-1,b,x-1,y);
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    int x,y;
    cin>>x>>y;
    
    int ans=fun(arr,n,brr,x,y);
    cout<<ans<<endl;
    
    return 0;
}
