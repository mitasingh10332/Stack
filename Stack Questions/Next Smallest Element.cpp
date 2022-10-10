#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1; i>=0 ; i--) {
        int curr = arr[i];
        while(s.top() >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
int main()
{
    vector <int>heights={2,1,4,3};
    int h=heights.size();
   vector<int>arr;
   arr=nextSmallerElement(heights,h);
   for(int i=0;i<h;i++)
   {
       cout<<arr[i]<<endl;
   }

	return 0;
}
