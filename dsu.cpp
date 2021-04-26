#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define pb push_back
 long long temp=pow(10,9)+7;
 
 int get(int*arr,int i)
 {
 	while(arr[i]!=i)
 	{
 		i=arr[i];
 		
	 }
	 return i;
 }
int main()	
{   
  int t=1;
 //cin>>t;
 while(t--)
 {
     int n;
	 cin>>n;
	 int*arr=new int[n+1];
	 for(int i=1;i<=n;i++)
	 {
	 	arr[i]=i;
	 }
	 int m;
	 cin>>m;
	 while(m--)
	 {
	 	int a,b;
	 	cin>>a>>b;
	 	int a1=get(arr,a);
	 	int b1=get(arr,b);
	 	 arr[min(a1,b1)]=max(a1,b1);
	 }
	
	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		int a1=get(arr,a);
		int b1=get(arr,b);
		if(b1==a1)
		{
			cout<<"TIE";
		}
		else
		{
			if(a1>b1)
			 cout<<a;
			 else
			 cout<<b;
		}
		cout<<endl;
	}
}
	     
}
 
