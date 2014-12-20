

#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
#include<stdio.h>
using namespace std;

int main()
{

    string pro,pep,x;
    int key;
    freopen("det2.txt","r",stdin);
    freopen("det2converted.txt","w",stdout);
    while(cin>>pep>>pro>>x)
    {
        cout<<pep<<","<<pro<<endl;
    }
    return 0;
}
