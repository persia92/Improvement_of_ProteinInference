//
#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<string>protein;
vector<string>peptide;


bool in_array(const string &value, const vector<string> &array)
{
    return find(array.begin(), array.end(), value) != array.end();
}
int main()
{
    freopen("det2.txt","r",stdin);
    freopen("det2_protein.txt","w",stdout);

    string pro,pep,x;

    while(cin>>pep>>pro>>x)
    {
        peptide.push_back(pep);
        //cout(in_array(pro,protein));
        if((in_array(pro,protein))==false)
        {
            protein.push_back(pro);
            cout<<pro<<endl;
        }

    }
    return 0;
}
