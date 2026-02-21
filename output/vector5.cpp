#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>v2={1,2,3,456,67,7};

    v.insert(v.begin()+2,v2.begin(),v2.end());
          //v er 2 no index e v2 er shob element insert korbe+
     for(int x:v)
    {
        cout<<x<<" ";
    }
}