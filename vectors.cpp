#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
	bool comp(const pair<int,int>&a,const pair<int,int>&b)
	{
	    return a.second<b.second;
	}
int main(){
	
	/*vector<int>A;
	A.push_back(10);
	A.push_back(20);
	A.push_back(30);
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<endl;
	}
	auto x=A.begin();
	auto y=A.end()-1;
	auto x1=A.rbegin();
	auto y1=A.rend()-1;
	cout<<*x<<*y<<*x1<<*y1;
	vector<vector<int>>grid(5,vector<int>(5,-1));
	for (int i=0;i<5; i++)
	{
	    for(int j=0;j<5;j++)
	    {
	        cout<<grid[i][j]<<" ";
	    }
	    cout<<endl;
	}
	list<int>b;
	b.push_back(10);
	b.push_front(20);
	auto m=b.begin();
	cout<<*m;*/
	vector<pair<int,int>>vp;
	vp.push_back({10,20});
	vp.push_back({1,19});
	vp.push_back({12,13});
	vp.push_back({10,12});
	vp.push_back({10,11});
	sort(vp.begin(),vp.end(),comp);
	for (auto it :vp)
	{
	    cout<<it.first<<" "<<it.second<<endl;
	}
	
	
	
}
