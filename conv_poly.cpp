/*	LALITHSAGAR J
	ENG18CS0147
	CSE VI 'C'
*/

#include<bits/stdc++.h>
using namespace std;
pair<int, int> mid;
int quad(pair<int, int> p){
	if (p.first >= 0 && p.second >= 0)
		return 1;
	if (p.first <= 0 && p.second >= 0)
		return 2;
	if (p.first <= 0 && p.second <= 0)
		return 3;
	return 4;
}

int orientation(pair<int, int> a, pair<int, int> b, pair<int, int> c){
	int res = (b.second-a.second)*(c.first-b.first) - (c.second-b.second)*(b.first-a.first);
	if (res == 0)
		return 0;
	if (res > 0)
		return 1;
	return -1;
}

bool compare(pair<int, int> p1, pair<int, int> q1){
	pair<int, int> p = make_pair(p1.first - mid.first, p1.second - mid.second);
	pair<int, int> q = make_pair(q1.first - mid.first, q1.second - mid.second);
	int one = quad(p);
	int two = quad(q);
	if (one != two)
		return (one < two);
	return (p.second*q.first < q.second*p.first);
}

/*vector<pair<int, int>> max(vector<pair<int, int>> a){
	int max = 0;
	for (int i=0; i<a.size()/2; i++){
		max = max + pair<x,y>;
	}
	return (max);
}

vector<pair<int, int>> min(vector<pair<int, int>> b){
	int max = 0;
	for (int i=0; i<a.size()/2; i++){
		min = min - pair<x,y>;
	}
	return int(min);
}*/
int main(){
	int n,x,y;
	double A,B;
	cout<<"Enter value of n:";
	cin>>n;
	vector<pair<int, int> > a;
	cout << "Enter the pairs :";
	for (int i =0;i<n;i++){
		cin>>x>>y;
		a.push_back(make_pair(x, y));
	}
	sort(a.begin(), a.end(), compare);
	cout<<"max and min are: ";
	for (auto e:a){
       		A = e.first+e.second+1;
       		B = e.first-e.second+sqrt(2);
       	}
       	cout <<"MAX "<<A<<"MIN "<<B;
	
	return 0;
}

