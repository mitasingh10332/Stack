#include<iostream>
#include<stack>
using namespace std;

string reverseWords(string S)
    {
        // code here
        stack<string> st;

        for(int i=0;i<S.length();i++){
            string curr="";
            while(S[i]!=' '&& i<S.length())
            {
                curr+=S[i];
                i++;
            }

            st.push(curr);

        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            ans+=" ";
            st.pop();

        }
        return ans;}



int main(){
    string s="hey my name is mita";
    cout<< reverseWords(s);


    return 0;
}
