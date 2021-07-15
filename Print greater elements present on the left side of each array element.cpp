#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    set<int,greater<int>> myset;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<": ";
        auto j=myset.insert(arr[i]);
        auto k=myset.begin();
        while(k != j.first)
        {
            cout<<*k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
