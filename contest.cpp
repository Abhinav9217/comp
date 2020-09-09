#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int**arr,int n,int*visited,int si)
{    
    
      queue<int>q;
      q.push(si);
	  int temp;
	 visited[si]=1;
 while(q.size()>0)
 {
     temp=q.front();
     q.pop();
     cout<<temp<<" ";
     for(int i=0;i<n;i++)
     {
         if(i==temp)
             continue;
         if(arr[temp][i]==1&&visited[i]==0)
         { q.push(i);
          visited[i]=1;
         }
     }
 }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
            print(arr,n,visited,i);
    }
}
int main() {
    int V, E;
    cin >> V >> E;
    int n=V;
    int e=E;
int**arr=new int*[n];
   for(int i=0;i<n;i++)
   {
   	   arr[i]=new int[n];
   	   for(int j=0;j<n;j++)
   	   {
   	   	  arr[i][j]=0;
	   }
   }
 	
  for(int i=0;i<e;i++)
  {
  	int si,ei;
  	cin>>si>>ei;
  	arr[si][ei]=1;
  	arr[ei][si]=1;
  }
   int*visited=new int[n];
   for(int i=0;i<n;i++)
   {
   	visited[i]=0;
   }
   print(arr,n,visited,0);
  return 0;
}

	
	
	
	
	
