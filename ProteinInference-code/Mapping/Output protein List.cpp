
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

// output is 488

int main()
{
    freopen("MSBayesPro_output_formatted.txt","r",stdin);
    freopen("msPro_Output_Protein.txt","w",stdout);
    int n,o=0;
    double p,nPro,nPepAll,nPosPep;
    float proQua,maping, posDecMemo,posProMemo,numPro,  nPepThisPro,totalPep,PAtLeast,x;
    cin>>n;
    string s,s2,proteinList[200],peptideList[200][200];

    while(n--)
    {
    cin>>s>>p>>nPro>>nPepAll>>nPosPep;
    //cin>>s;
    for(int i=1; i<=nPro;i++)
    {
        cin>>s;
        cin>>proQua>>maping>>posDecMemo>>posProMemo>>nPepThisPro>>totalPep>>numPro>>PAtLeast;
        if(maping!=0)
        {
            //cout<<s<<"; ";
            cout<<s;
            proteinList[o]=s;
            for(int j=1; j<=nPepThisPro; j++)
            {
                cin>>s2;
                //cout<<s2<<", ";
                peptideList[o][j]=s2;
                cin>>s>>x>>x>>x>>x>>x;
            }
            cout<<endl;
            o++;
        }
        else
        {
            for(int i=1; i<=nPepThisPro; i++)
            {
                cin>>s2;
                cin>>s>>x>>x>>x>>x>>x;
            }
        }
    }
    }
    return 0;
}
