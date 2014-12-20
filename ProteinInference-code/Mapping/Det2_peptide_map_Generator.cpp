

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
    freopen("det2_peptide_map.txt","w",stdout);

    string pro,pep,x;
    int n=0;
    while(cin>>pep>>pro>>x)
    {

        protein.push_back(pro);
        //cout(in_array(pro,protein));
        if((in_array(pep,peptide))==false)
        {
            n++;
            peptide.push_back(pep);
            cout<<pep<<" "<<n<<endl;
        }

    }
    return 0;
}
