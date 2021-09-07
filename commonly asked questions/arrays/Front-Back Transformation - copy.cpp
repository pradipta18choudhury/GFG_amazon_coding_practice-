string convert(string s)
{
    // code here.
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(islower(s[i]))
        {
            int temp=s[i]-'a';
            s[i]=26-temp-1+'a';
        }
        else if(isupper(s[i]))
        {
            int temp=s[i]-'A';
            s[i]=26-temp-1+'A';
        }
    }
    return s;
}
