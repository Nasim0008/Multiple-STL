#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row ,col;
    cin>>row>>col;
    vector<vector<int>>v(row);
    for(int i=0;i<row;i++)
    {
        vector<int>a(col);
        for(int j=0;j<col;j++)
        {
            cin>>a[j];
        }
        v.push_back(a);
    }

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<< " ";
        }
        cout<<endl;
    }

}
