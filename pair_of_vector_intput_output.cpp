#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
//    for(int i=0;i<n;i++)
//    {
//        cin>>v[i].first<< " "<<v[i].second;
//    }
//
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<< " "<<v[i].second<<endl;
    }

//    for(auto u:v)
//    {
//        cout<<u.first<< " "u.second<<endl;
//    }


     /*
     we can do all the operation in this pair of vector as like as single vector
     for example: sort(v.begin(),v.end());
        reverse(v.begin().v.end());

     */

}
