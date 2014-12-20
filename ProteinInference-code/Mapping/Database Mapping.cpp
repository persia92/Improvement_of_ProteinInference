

#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
#include<stdio.h>
using namespace std;

//vector<string,int>protein;
//vector<string>peptide;
map<string,int>proteinMap;
map<int,string>proteinMapOpo;
map<string,int>peptideMap;
map<int,string>peptideMapOpo;

int numProtein = 392;
int numDb = 24392;
int numPeptide = 23964;

bool in_array(const string &value, const vector<string> &array)
{
    return find(array.begin(), array.end(), value) != array.end();
}
int main()
{

    string pro,pep,x;
    int key;
    freopen("det2_protein_map.txt","r",stdin);

    for(int i=0; i<numProtein; i++)
    {
        cin>>pro>>key;
        proteinMapOpo[key]=pro;
        proteinMap[pro]=key;

    }

    freopen("det2_peptide_map.txt","r",stdin);
    for(int i=0; i<numPeptide; i++)
    {
        cin>>pep>>key;
        peptideMapOpo[key]=pep;
        peptideMap[pep]=key;
    }

    freopen("main_database.txt","r",stdin);
    freopen("det2_peptide_protein_mapping.txt","w",stdout);
    int proKey,pepKey;
    for(int i=0; i<numDb; i++)
    {
        cin>>pep>>pro;
        proKey=proteinMap.find(pro)->second;
        pepKey=peptideMap.find(pep)->second;
        cout<<pepKey<<","<<proKey<<endl;
    }
    return 0;
}
