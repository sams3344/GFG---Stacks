// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution {
public:

    void del(stack<char> &s, int n, int curr=0){
        if(s.empty() || curr == n )
            return;
            
        
            
        int x = s.top();        //recursively holding all the vals
        s.pop();
        
        del(s, n, curr+1);
       
        if (curr != n/2)            
            s.push(x);
            
        //vals held as 54321(so 1 is the latest val) but will be entered as 1245(3 skipped) 
        //  recursive calls happen in botton-up way, so 'x' val is now accessed as 1,  then 2, then 3, ....so on  4 5 
    } 

    void deleteMid(stack<int>&s, int n)
    {
        // code here 
        
       
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends
