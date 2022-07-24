/*
vector=is used in place of array as array can stor limited amount of values;

dynamic array/it doubles the size of array                       O(1),



*********************************************VECTOR****************************

#include<vector>

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>  v;
	cout<<"size  "<<v.capacity()<<endl;

	v.push_back(0);
	cout<<"size  "<<v.capacity()<<endl;

	v.push_back(1);
	cout<<"size  "<<v.capacity()<<endl;

		v.push_back(2);
	cout<<"size  "<<v.capacity()<<endl;

	cout<<"size of the array:"<<v.size()<<endl;

	cout<<"element at 2 is "<<v.at(2)<<endl;

	cout<<"element at front is "<<v.front()<<endl;

	cout<<"element atlast is "<<v.back()<<endl;

	for(int i:v)
	{
		cout<<"before  "<<i<<" ";
	}cout<<endl;

	v.pop_back();

	for(int i:v)
	{
		cout<<"after   "<<i<<" ";
	}cout<<endl;

	v.clear();
	cout<<v.size();
}


****************************DEQUEUEUEUEUEUE**********************************
doubly ended queueueueue

we can add or remove in starting as well as at ending

by using push and pop method





#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int> d;

	d.push_back(1);
	d.push_front(2);   //shoould print 2,1

	for(int i:d)
	{
		cout<<i<<" ";
	}cout<<endl;

	//d.pop_back();       
	//d.pop_front();

	// for(int i:d)
	// {
	// 	cout<<"after poping element  " <<i<<" ";	
	// }cout<<endl;

	cout<<"print first index element=>"<<d.at(1)<<endl;


	cout<<"print front element=>"<<d.front()<<endl;

	cout<<"print last element=>"<<d.back()<<endl;

	//d.empty();
	d.erase(d.begin(),d.begin()+1);
	cout<<d.size();

	for(int i:d)
	{
		cout<<i<<" ";
	}cout<<endl;

}




*********************LISTSSSSS*******************

use of dublylinklist

we hav to traverse 

#include<list>


#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<int> l;


	list<int> n(5,100);               100 five times(100,100,100,100,100);
	cout<<"list is"<<endl;
	//l.push_back(1);
	//l.push_back(2);

	for(int i:n)
	{
		cout<<i<<" ";

	}cout<<endl;

	l.erase(l.begin());              passed element we want to delete
	cout<<"after erase"<<endl;

	for(int i:l)
	{
		cout<<i<<" ";
	}cout<<endl;

	cout<<"size is  "<<l.size()<<endl;
}



********************************stackkk*****************


upr se uthana
LIFO(last in first out)



#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<string> s;

	s.push("ritik");
	s.push("ramola");
	s.push("hehe");

	cout<<"top element -> "<<s.top()<<endl;

	s.pop();

	cout<<"top element  now is->"<<s.top()<<endl;


	cout<<"is empty?? ->"<<s.empty()<<endl;                //to check empty or not  0=false,1=true;
}


****************************QUEUUEUE***************************



line m sbse pehe aayega bhi jayega bhi
fifo



#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<string> q;

	q.push("ritik");
	//q.push("ramola");
	//q.push("hehe");

	cout<<"first elemet is->"<<q.front()<<endl;

	q.pop();

	cout<<"now pop ->"<<q.front()<<endl;

	cout<<"size now->"<<q.size()<<endl;

	cout<<"is empty?  "<<q.empty()<<endl;
}


*******************priority queue*******************

First element always greatest

max heap bnata h ye

max element niklega                         //element nikalte tymm
if heap then min element niklega



#include<bits/stdc++.h>
using namespace std;
int main()
{

	                                      //MAX heap
	priority_queue<int> maxi;
	                                             //MIN heap
	priority_queue<int,vector<int> , greater<int> > mini;

	maxi.push(1);
	maxi.push(3);
	maxi.push(0);
	maxi.push(2);

	cout<<"size is  "<<maxi.size()<<endl;
	cout<<"data is ";
	int n=maxi.size();

	 for(int i=0;i<n;i++)//for(int i:maxi) dont work
	{
		cout<<maxi.top()<<" ";            // will give output 3 2 1 0
		maxi.pop();
	}cout<<endl;

	mini.push(1);
	mini.push(3);
	mini.push(0);
	mini.push(2);

	cout<<"size is  "<<mini.size()<<endl;
	cout<<"data is ";
	int m=mini.size();

	 for(int i=0;i<m;i++)//for(int i:maxi) dont work
	{
		cout<<mini.top()<<" ";           // will give output 0 1 2 3
		mini.pop();
	}cout<<endl;

	cout<<"khaali h kya boii  "<<maxi.empty()<<endl;

}




***************************************SET h bhai******************************

it store every element only one tym i.emptyagr humne 5 baar 5 daala toh 
5 ek hi baar store hoga chahe jo bhi hoo 

daalna aur delete allowed no modification             O(logn),find,insert,erase,count
sorted order m output                                 o(1),size,begin,empty



#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int>s;

	s.insert(5);
		s.insert(5);
			s.insert(5);
	s.insert(3);
		s.insert(3);
			s.insert(3);
				s.insert(3);
	s.insert(1);
		s.insert(1);

		for(auto i:s)
		{
			cout<<i<<" ";
		}cout<<endl;

		set<int>::iterator it=s.begin();
		it++;

	s.erase(it);

	for(auto i:s)
	{
		cout<<i<<" ";
	}cout<<endl;

	cout<<"is 5 present ?   "<<s.count(5)<<endl;  //gives true(1) or false(0)

	cout<<"value at it   "<<*it<<endl;  //it gives at which value it is present .."*" is important

	set<int>::iterator itr=s.find(1);  //it gives us the values after (1) i.e.={1,5}

	for(auto it=itr;it!=s.end();it++)//for(auto i:s)
	{
		cout<<*it<<" ";
	}cout<<"nothing" <<endl;
}




************************MAP****************

stores in form of key,value
ritik(key)pointing towards ramola(value)         isme sorted bhi hota h
all key r unique/1 key points to 1 value

value can be same  i.e           hehe->ramola                 O(logn)
                               RITIK->ramola


#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,string> m;

	m[1]="ritik";
	m[12]="ramola";
	m[3]="hehehe";

	m.insert( {6,"khikhikhi"});           //"{}" these r important
	for(auto i:m)
	{
		cout<<i.first<<" "<<i.second<<endl; //to get both keys and value
	}cout<<endl<<endl;

	cout<<"count of 12-> "<<m.count(12)<<endl;         // tells whether the no. is present or no

	m.erase(12);
	cout<<"after erase->"<<endl;
	for(auto i:m)
	{
		cout<<i.first<<"="<<i.second<<endl;
	}cout<<endl<<endl;

	auto it=m.find(1);                  //it gives all the elements after the given key

	for(auto it:m)
	{
		cout<<it.first<<endl;    //it will only give key //no value
	}
}



*/


******************ALGORITHMS*******************


for vectors
for sorting=sort(v.begin(),v.end());
for binary search= binary_search(v.begin(),v.end(),5)  //5 (element we hav to search)

	lower_bound/upper bound= it returns iterator lower/higher
							same as binary search


max(a,b) to get max from(a,b)  similarly for min
swap(a,b) swaps value

we can reverse string by:-string s="abcd";
			reverse(s.begin(),s.end());   output:dcba

rotation  = rotate(v.begin(),v.begin()+1,v.end());   //v.begin+1 refers to element we hav to rotate;

