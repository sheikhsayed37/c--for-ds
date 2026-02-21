#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 3};
    
    replace(v.begin(),v.end(),3,100); //v er 3 ke 100 diye replace kore dibe
    for(int x:v)
    {
        cout<<x<<" ";
    }
}