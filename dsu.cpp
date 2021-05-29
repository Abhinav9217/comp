#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define pb push_back
 long long temp=pow(10,9)+7;
 vector<int>parent(100000);
vector<int>size(100000,1)
 int get(int n)
 {
 	if(n==parent[n])
		( return n)
        return parent[n]=get(parent[n]); // this is path compression reduces time comp of get from n to logn what we are doing is we are updating
	// the each element of the group to the parent of the group so when we find a parent of an element we will reach the parent faster
 }
int main()	
{   
  int t=1;
 //cin>>t;
 while(t--)
 {
     int n;
	 cin>>n;
	 
	 for(int i=1;i<=n;i++)
	 {
	 	parent[i]=i;
	 }
	 int m;
	 cin>>m;
	 while(m--)
	 {
	 	int a,b;
	 	cin>>a>>b;
	 	int a1=get(a);
	 	int b1=get(b);
	 	if (a1 != b1) {
        if (size[a1] < size[b1])
            swap(a1, b1);
        parent[b1] = a1;
        size[a1] += size[b1]; //Union by size / rank
//In this optimization we will change the union_set operation. To be precise, we will change which tree gets attached to the other one. In the naive implementation the second tree always got attached to the first one. In practice that can lead to trees containing chains of length O(n). With this optimization we will avoid this by choosing very carefully which tree gets attached.
// basically always attach the smaller trees to bigger trees otherwise there wil be longer chains 			
}
	     
}
 
