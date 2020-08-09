#include <iostream>
using namespace std;

string fun(string s){
    stack<char> st;
    string res;
    for(int i=0;i<s.size() ;i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
	string s  = "   ";
	cout << s ;
	
	cout << "new s =" << fun(s); 
	return 0;
}
