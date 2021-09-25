#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int row,colomn;
char turn='x';
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};            //globaly declaration
int Display_board();
int Player_chance();
bool game_over();
bool draw();
int main()
{
	while(game_over())
{
    Display_board();
	Player_chance();                 
	Display_board();
	game_over();
}
if(turn=='o'&& draw==false)
cout<<"player 1 win";
else if(turn=='x'&& draw==false)
cout<<"player 2 win";
else 
cout<<"game draw\n";
	getch();
	return 0;

}
bool game_over()
{
int i,j;
//player win line
	for(int i=0;i<3;i++)
	if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]||board[0][i]==board[1][i]&&board[0][i]==board[2][i])
	return false; 
	if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]||board[0][2]==board[1][1]&&board[0][2]==board[2][0])
	return false; 
	//game continue.....
	for(int i=0;i<3;i++)
	for (int j=0;j<3;j++)
	if(board[i][j]!='x'&& board[i][j]!='o')
	return true;
	//draw condition
	bool draw=true;
	return false;
}
int Player_chance()
{
int choice;
if(turn=='x')
cout<<"player 1 chance[x]";
if(turn=='o')
cout<<"player 2 chance[o]";

	cin>>choice;
	switch (choice)                             
	{   
	case 1:
	row=0;colomn=0;	break;
	case 2:
	row=0;colomn=1;	break;
	case 3:
	row=0;colomn=2;	break;
	case 4:
	row=1;colomn=0;	break;
	case 5:
	row=1;colomn=1;	break;
	case 6:
	row=1;colomn=2;	break;
	case 7:
	row=2;colomn=0;	break;
	case 8:
	row=2;colomn=1;	break;
	case 9:
	row=2;colomn=2;	break;
	default:
	cout<<"wrong choice \n";
	break;
}
  if(turn=='x')
  {
  board[row][colomn]='x';
  turn='o';

}
else if(turn=='o')
  {
  board[row][colomn]='o';
  turn='x';

}
}

int Display_board()
{
	system("cls");

	cout<<"\n\n    TIC TAC TOE    \n\n";
	cout<<"player 1[x]   -   player 2[o]"<<endl <<endl;
	cout<<endl;
	cout<<"    |    |    "<<endl;
	cout<<" "<<board[0][0]<<" | "<<board[0][1]<<"  | "<<board[0][2]<<"  "<<endl;
	cout<<"____|____|____"<<endl;
	cout<<"    |    |    "<<endl;
	cout<<" "<<board[1][0]<<"  | "<<board[1][1]<<" | "<<board[1][2]<<"  "<<endl;
	cout<<"____|____|____"<<endl;
	cout<<"    |    |    "<<endl;
	cout<<" "<<board[2][0]<<"  | "<<board[2][1]<<" | "<<board[2][2]<<"  "<<endl;
	cout<<"    |    |    "<<endl;
}







