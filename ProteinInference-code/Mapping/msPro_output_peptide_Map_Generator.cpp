

#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

vector<string>protein;
vector<string>peptide;
map<string,int>peptideMap;

bool in_array(const string &value, const vector<string> &array)
{
    return find(array.begin(), array.end(), value) != array.end();
}
int main()
{
    int numbpep=332;
    int numbdbpep=23964;
    freopen("msPro_Output_Peptide.txt","r",stdin);
    freopen("msPro_Output_Peptide_map.txt","w",stdout);
    string pro,pep,x;
    int key=0;
    for(int i=0; i<numbpep; i++)
    {
        cin>>pep;
        if(in_array(pep,peptide)==false)
            peptide.push_back(pep);


    }
    freopen("det2_peptide_map.txt","r",stdin);
    for(int i=0; i<numbdbpep; i++)
    {
        cin>>pep>>key;
        peptideMap[pep]=key;
    }
    int limit =peptide.size();
    for(int i=0;i<limit;i++)
    {
        pep=peptide.back();
        peptide.pop_back();
        key=peptideMap.find(pep)->second;

        cout<<pep<<" "<<key<<endl;
       //cout<<key<<",";
    }
    return 0;
}
