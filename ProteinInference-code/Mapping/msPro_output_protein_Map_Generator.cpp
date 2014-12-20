

#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

vector<string>protein;
vector<string>peptide;
map<string,int>proteinMap;

bool in_array(const string &value, const vector<string> &array)
{
    return find(array.begin(), array.end(), value) != array.end();
}
int main()
{
    int numbpro=62;
    int numbdbpro=392;
    freopen("msPro_Output_Protein.txt","r",stdin);
    freopen("msPro_Output_Protein_map.txt","w",stdout);
    string pro,pep,x;
    int key=0;
    for(int i=0; i<numbpro; i++)
    {
        cin>>pro;
       protein.push_back(pro);

    }
    freopen("det2_protein_map.txt","r",stdin);
    for(int i=0; i<numbdbpro; i++)
    {
        cin>>pro>>key;
        proteinMap[pro]=key;
    }
    int limit =protein.size();
    for(int i=0;i<limit;i++)
    {
        pro=protein.back();
        protein.pop_back();
        key=proteinMap.find(pro)->second;
        cout<<pro<<" "<<key<<endl;
       //cout<<key<<",";
    }
    return 0;
}
