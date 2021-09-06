
vector<vector<int>> transpose(int a[][M], int n)
{
    // Code hereeee
    vector<vector<int>> ans(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        ans[i][j]=a[j][i];
    }
    return ans;
    
}
