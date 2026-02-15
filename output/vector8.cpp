#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 3};
    
auto it = find(v.begin(),v.end(),3);

    if(it==v.end())//3 ta pawa jabe na mane end er address e chole jabe
    {
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }
}