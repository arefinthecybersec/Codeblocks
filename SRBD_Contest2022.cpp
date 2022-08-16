#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    vector<string>vec;
    cin>>s;
    for(i=1; i<=s.size(); i++)
    {
        vec.push_back(s);
    }

    if(vec.size()<=10000)
    {
        cout<<"SRBD"<<endl;
    }
    else
        cout<<"GHOST"<<endl;


    return 0;
}
