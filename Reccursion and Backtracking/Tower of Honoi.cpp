//Tower of Honoi
#include<iostream>
using namespace std;

void towerOfHonoi(int n, char src, char dest, char helper) {

//base case	
if(n==0)
 return;

//recur case
//first step: Move N-1 disk from src to helper
	
towerOfHonoi(n-1,src,helper,dest);

cout<<"Move "<<n<<" disk from "<<src<<" to "<<dest<<endl;

towerOfHonoi(n-1,src,dest,helper);
	
	
}


int main()
{
	int n;
	cin>>n; 
	towerOfHonoi(n,'A','C','B');
	return 0;
}
