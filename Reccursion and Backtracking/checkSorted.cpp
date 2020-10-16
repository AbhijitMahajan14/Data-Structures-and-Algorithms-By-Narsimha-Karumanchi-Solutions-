//Check whether the array is in sorted order using recursion
#include<iostream>
using namespace std;

int check(int A[], int n)
{
	if(n==1)
	 return 1;
	 
	return(A[n-1]<A[n-2] ? 0:check(A,n-1));
}

int main(){
	int n ,i;
	
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	if(check(A,n))
	 cout<<"sorted";
	else
	 cout<<"not sorted";
	
	return 0; 
}
