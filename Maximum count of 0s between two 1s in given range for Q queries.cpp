#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int left[n];
    memset(left,0,sizeof(left));
    int right[n];
    memset(right,0,sizeof(left));
    int total=0,count=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        count=total;
        else if(s[i]=='0')
        total++;
        
        right[i]=count;
    }
    
    total=0;
    count=0;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        count=total;
        else if(s[i]=='0')
        total++;
        
        left[i]=count;
    }
    
    int q1,q2;
    cin>>q1>>q2;
    cout<<left[q1]+right[q2]-total;
}
