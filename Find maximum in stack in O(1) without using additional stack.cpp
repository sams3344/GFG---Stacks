#include <iostream>
using namespace std;

stack<int> st;
int max = 0;

stack<char> push(int x){
    st.push(x);
    if(x > max){
        max = x;
    }
    
}


int main() {
	stack<char> st;
	cin >> n;
	for(int i=0; i<n; i++){
	    cin >> x;
	    push(x);
	}
	// control enter here after all elts are inserted 
	cout << max 
	
	return 0;
}
