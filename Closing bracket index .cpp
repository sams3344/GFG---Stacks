// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




class Solution
{
    public:
        int closing (string s, int pos)
        {
        	//code here.
        	stack<int> open, close;
        	int n = s.size();
        	int o=0, c=0;
        	
        	for(int i=0; i<n; i++ ){
        	   // cout << "i=" << i << "  ";
        	   // while(!open.empty()){
        	    if(s[i] == '[') {
        	        //cout << "enter    ";
        	        o=i;
        	        open.push(o);
        	    }
        	    if(s[i] == ']') {
        	        //cout << "enter2    ";
        	        c=i;
        	        if(open.top() == pos){
        	            return c;
        	        }
        	        open.pop();
        	    }
        	    
        	
        	}
        }
        
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
