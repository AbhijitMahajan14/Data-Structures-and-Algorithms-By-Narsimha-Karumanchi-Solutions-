//https://youtu.be/jFwREev_yvU 

#include<iostream>
using namespace std;

bool checkSafe(int board[][10],int i,int j,int n){
	//check for column
	for(int row=0;row<i;row++)
	{
		if(board[row][j]==1){
		
			return false;
		}
	}
	
	//you can check left diagonal
	int x=i;
	int y=j;
	
	while(x>=0&&y>=0){
		if(board[x][y]==1)
		 return false;
		x--;
		y--;
	}
	
	//check for right diagonal
	x=i;
	y=j;
	
	while(x>=0&&y<n){
		if(board[x][y]==1)
		 return false;
		x--;
		y++;
	}
	
	//if above loops not return false that means
	// position is safe to place queen
	
	return true;
	
}



bool solveNQueen(int board[][10],int i,int n )
{
	
	//base case
	if(i==n){
		//succeessfully place all queen in all rows
		//print
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
			if(board[i][j]==1)
			 cout<<"Q";
			else
			  cout<<"-";	
			}
			cout<<endl;
		}
		
			cout<<endl<<endl;
		return false;//ret true if you want to print single result
	}
	
	//rec case
	for(int j=0;j<n;j++){
		//check i,j position is safe to place a queen
		if(checkSafe(board,i,j,n)){
			board[i][j]=1;
			
			bool canPlaceNextQueen = solveNQueen(board,i+1,n);
			if(canPlaceNextQueen){
				return true;
				
			}
			
			//i,j place is wrong 
			board[i][j]=0;
			
		}
		
	}
	
	return false;	
}




int main()
{
	int n;
	cin>>n;
	 int board[10][10]={0};
	 solveNQueen(board,0,n);
	 return 0;
}
