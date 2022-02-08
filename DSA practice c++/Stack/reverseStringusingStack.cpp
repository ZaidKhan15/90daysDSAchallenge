char* reverse(char *S, int len)
{
    //code here
    stack<char> str;
    for(int i=0;i<len;i++){
        str.push(S[i]);
    }
    int k = 0;
    while(!str.empty()){
        S[k] = str.top();
        k++;
        str.pop();
    }
    return S;
}