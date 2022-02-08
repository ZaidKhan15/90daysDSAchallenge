class Solution
{
    public:
    
    void solve(stack<int>&s,int count,int size){
        
        //base case
        if(count == size/2)
        {
            s.pop();
            return;
        }
        int num = s.top();
        s.pop();
        //recursive case
        solve(s,count+1,size);
        s.push(num);
    }
    
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int size)
    {
        // code here.. 
        int count = 0;
        solve(s,count,size);
    }
};