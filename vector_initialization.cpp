#include <bits/stdc++.h>
using namespace std;
int main()

{
 vector<int >v;
 cout<<v.size()<<endl;
  vector<int >v1(5);//size ta bolw disi
  cout<<v1.size()<<endl;
   vector<int >v2(5,10);// 10 hbe 5 ber
 for(int i=0;i<v2.size();i++)
 {
    cout<<v2[i]<<"  ";
 }
 cout<<endl;

vector<int>v3(v2);
for(int i=0;i<v3.size();i++)
{
    cout<<v3[i]<<"  ";
}
 cout<<endl;

vector<int>v4{1,2,3,4,5};
for(int i=0;i<v4.size();i++)
{
    cout<<v4[i]<<"  ";
}
}