string magicalString(string S){
        // code here 
        string ans;
        for(int i=0;i<S.length();i++)
        {
            int temp=S[i]-'a';
            S[i]=26-temp-1+'a';
        }
       return S;
    }
