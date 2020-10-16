#include<iostream>
using namespace std;

void bin(int n , char A[]){

if(n<1)
 cout<<A<<endl;
 
else
{
 A[n-1]='0';
 bin(n-1,A);
 
 A[n-1]='1';
 bin(n-1,A);
}
	
}

int main(){
int n;
cin>>n;
char A[n];

bin(n,A);
return 0;
	
	
	
}
