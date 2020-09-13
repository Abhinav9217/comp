#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    int s;
    int d;
    int w;
};
int getparent(int*a,int n)
{
    while(a[n]!=n)
    {
        n=a[n];
    }
    return n;
}
bool compare(graph p1,graph p2)
{
    return p1.w<p2.w;
}
int main()
{
    int v,e;
    cin>>v>>e;
  graph*arr=new graph[e];
    for(int i=0;i<e;i++)
    {
        cin>>arr[i].s>>arr[i].d>>arr[i].w;
    }
    sort(arr,arr+e,compare);
    int*a=new int[v];
    for(int i=0;i<v;i++)
    {
        a[i]=i;
    }
    vector<graph>vec;
    int i=0;
    int count=0;
    while(count!=v-1)
    {
         int sor=getparent(a,arr[i].s);
         int des=getparent(a,arr[i].d);
        if(sor!=des)
        {
            a[des]=sor;
            vec.push_back(arr[i]);
            count++;
        }
        i++;
    }    
    for(int i=0;i<vec.size();i++)
    {
          if(vec[i].s<vec[i].d)
              cout<<vec[i].s<<" "<<vec[i].d<<" ";
          else
              cout<<vec[i].d<<" "<<vec[i].s<<" ";
        cout<<vec[i].w;
        cout<<endl;
    }
  return 0;
}
