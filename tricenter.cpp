/*	LALITHSAGAR J
	ENG18CS0147
	CSE  VI  'C'
*/

#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    int N;
    cout<<"Enter value of n :";
    cin>>N;
    while(N--){
        double a,l,m,n,b,c,p,xa;
        cin>>a>>l>>m>>n;
      	b=a*l/m;
      	c=a*l/n;
	p=(a+b+c)/2;	//perimeter
        printf("%.3lf ",sqrt(p*(p-a)*(p-b)*(p-c)));	//Area of triangle
        xa=sqrt(a*a*l*l/m/m-9*l*l);	//cehi formula
        if(a*a+b*b-c*c<0)
            xa=-xa;
        double d=a/3+xa/3;
        double e=(a*xa-xa*xa)/3/l;
        printf("%.3lf\n",sqrt((d-xa)*(d-xa)+(l-e)*(l-e)));
    }
    
    return 0;
}
