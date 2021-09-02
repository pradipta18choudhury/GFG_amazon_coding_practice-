class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int ans=0;
        int sum=(n)*(n+1)/2;
        for(int i=0;i<n-1;i++)
        {
            ans+=array[i];
        }
        return sum-ans;
    }
};
