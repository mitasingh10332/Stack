#include <bits/stdc++.h>
using namespace std;


vector <int>stockSpan(vector <int>prices)
{
    stack <pair<int,int>>s;
    vector <int>ans;

    for (auto price : prices)
    {
        int days =1;

        while(!s.empty() && price>=s.top().first)
        {
            days+=s.top().second;
            s.pop();
        }

        s.push({price,days});
        ans.push_back(days);

    }
    return ans;

}

int main()
{
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = stockSpan(prices);
    for(auto i:ans)
    {
        cout<<i<<endl;
    }
    return 0;
}
