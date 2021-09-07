string to_upper(string str){
    //code
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-'a'+'A';
    }
    return str;
}
