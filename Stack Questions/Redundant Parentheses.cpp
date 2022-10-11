#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    stack<char> st;
    bool ans =false;

    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='+'|| s[i]=='-'|| s[i]=='*' || s[i]=='/'||s[i]=='(')
        {
            st.push(s[i]);
        }

        else if (s[i]==')')
        {
            if (st.top()=='(')
            {
                ans=true;
            }

            else if (st.top()=='+'|| st.top()=='-'|| st.top()=='*' || st.top()=='/')
            {
                st.pop();
            }
            st.pop(); // previous opening bracket
        }



    }
cout<<ans;

	return 0;
}
