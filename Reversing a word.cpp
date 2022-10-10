#include<iostream>
#include<stack>
using namespace std;

string reverseWords(string S)
    {
        // code here
        stack<string> st;

        for(int i=0;i<S.length();i++)
        {
            string curr;
            curr=S[i];
             st.push(curr);

        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();

        }
        return ans;}



int main(){
    string s="mita";
    cout<< reverseWords(s);
    return 0;
}
