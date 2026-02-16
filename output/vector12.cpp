#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>> n;
    vector<int>v;
   for(int i=0;i<n;i++)
   { 
    int x;
    cin>>x;
    v.push_back(x); // x er value gola vector v te reke disi   
   }
   for(int i=0;i<n;i++)
   {
    cout<<v[i]<<" ";
   }
}