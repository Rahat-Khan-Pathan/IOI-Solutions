/*
||-----------------------------------||
||        Rahat Khan Pathan          ||
||      BGC Trust University         ||
||       Department of CSE           ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#include "grader.h"
#include "memory.h"
#define ll long long int
#define pub push_back
#define PI 3.14159265359
#define vll vector<ll>
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique(All(X)),(X).end()))
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define pi pair<ll,ll>
#define vpair vector<pair<ll,ll> >
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define minus cout<<-1<<endl
using namespace std;
void play()
{
    ll i;
    bool found[52];
    memset(found,false,sizeof(found));
    ll pos[27];
    memset(pos,-1,sizeof(pos));
    char c;
    for(i=1;i<=50;i++)
    {
        c=faceup(i);
        if(pos[c-'A']==-1)
        {
            pos[c-'A']=i;
            found[i]=true;
        }
    }
    for(i=1;i<=50;i++)
    {
        if(found[i])
            continue;
        c=faceup(i);
        c=faceup(pos[c-'A']);
    }
}
