#include <iostream>
using namespace std;

class stack{
private:
    stack<int> st;
    int top;
    //int *size();
    
public:
    stack(){
        top =-1; //initialize an empty stack
        bool isempty();         //these funs will be decalred outside this fun, bit within main stack class
        bool isfull();
        int pop();
        void push(int x);
    }
    
    bool stack :: isfull( ){
        if(top == max-1)
            return true;
        retrun false;
    }
    
    bool stack::isempty(){
        if(top == -1)
            return true;
        retrun false;
    }
    void stack::push(int x){
        if(st.isfull())
            return; //or abort()
        top++;
        st.top = x;
    }
    
    int pop(){
        if(st.isempty()){
            return -1;
        }
        int a = st.top();
        st.pop();
        return a;
    }
    
    
int main() {
	cout<<"GfG!";
	return 0;
}
