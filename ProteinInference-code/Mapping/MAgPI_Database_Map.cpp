

#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
#include<stdio.h>
using namespace std;

//vector<string,int>protein;
vector<string>peptide;
map<string,int>proteinMap;
map<int,string>proteinMapOpo;
map<string,int>peptideMap;
map<int,string>peptideMapOpo;
int numProtein = 62;
int numPep = 23964;
int numDb = 332;

bool in_array(const string &value, const vector<string> &array)
{
    return find(array.begin(), array.end(), value) != array.end();
}
int main()
{

    string pro,pep,x;
    int key;
    freopen("msPro_Output_Protein_map.txt","r",stdin);

    for(int i=0; i<numProtein; i++)
    {
        cin>>pro>>key;

        proteinMapOpo[key]=pro;
        proteinMap[pro]=key;
    }

    freopen("det2_peptide_map.txt","r",stdin);
    for(int i=0; i<numPep; i++)
    {
        cin>>pep>>key;
        peptideMapOpo[key]=pep;
        peptideMap[pep]=key;
    }
    freopen("magpi_database.txt","r",stdin);
    freopen("magpi_database_map.txt","w",stdout);
    //freopen("sigma_peptide_gibbs.txt","w",stdout);
    //freopen("test_peptide_protein_map2.txt","w",stdout);
    int proKey,pepKey;
    int prevKey=0;
    for(int i=0; i<numDb; i++)
    {
        cin>>pro>>pep;
     //   cout<<pro<<pep<<endl;
        proKey=proteinMap.find(pro)->second;
        pepKey=peptideMap.find(pep)->second;
        cout<<proKey<<" "<<pepKey<<endl;
       /* if(proKey<=44)
        {
             if(in_array(pep,peptide)==false)
             {peptide.push_back(pep);
             cout<<pepKey<<",";}
        }*/
       /* if(prevKey==proKey)
        {
            cout<<", "<<pepKey;
        }
        else{
            cout<<endl<<proKey<<"; "<<pepKey;
            prevKey=proKey;
        }*/

    }

    return 0;
}
