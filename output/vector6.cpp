#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    

    v.erase(v.begin()+2,v.begin()+4);
      //v er 2 no index theke 4 no index er age porjonto
     //element delete kore dibe
    for(int x:v)
    {
        cout<<x<<" ";
    }
}