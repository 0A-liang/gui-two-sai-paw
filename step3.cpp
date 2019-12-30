#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );
void moveHare( int * const );

int main()
{
    int tortoise=1;
    int hare = 1;
    
    srand( time( 0 ) );
    clock_t start,end;
    start=clock();
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 100 );
      system("cls");
	      
      moveTortoise( &tortoise );
      moveHare(&hare);
      printCurrentPositions( &tortoise, &hare );
   }
   end=clock();
	if(tortoise==70)
	cout<<"TORTOISE WINS!!! YAY!!!"<<endl;
	else if(hare==70)
	cout<<"Hare wins. Yuch."<<endl;
	cout<<"TIME ELAPSED = "<<(end-start)/1000<<" seconds"<<endl;
}

/*印出烏龜與兔子位置*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr )
{
	for(int i=1;i<=7;i++)
	{
		cout<<"---------|";
	}
	cout<<endl;
	cout<<setw(*bunnyPtr)<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl;
}

/*移動烏龜*/
void moveTortoise( int * const turtlePtr )
{
	int n;
	n=+rand()%10;
	if(n>=0&&n<=4)//0-4
	{
		*turtlePtr+=3;
	}
	else if(n>=5&&n<=6)//5-6
	{
		*turtlePtr-=6;
	}
	else//7-9
	{
		*turtlePtr+=1;
	}
	if(*turtlePtr>70)
	{
		*turtlePtr=70;
	}
	else if(*turtlePtr<1)
	{
		*turtlePtr=1;
	}
}

/*移動兔子*/
void moveHare( int * const rabbitPtr )
{
	int m;
	m=rand()%10;//0-9
	if(m>=0&&m<=1)//0-1
	{
		
	}
	else if(m>=2&&m<=3)//2-3
	{
		*rabbitPtr+=9;
	}
	else if(m==4)//4
	{
		*rabbitPtr-=12;
	}
	else if(m>=5&&m<=7)//5-7
	{
		*rabbitPtr+=1;
	}
	else//8-9
	{
		*rabbitPtr-=2;
	}
	if(*rabbitPtr>70)
	{
		*rabbitPtr=70;
	}
	else if(*rabbitPtr<1)
	{
		*rabbitPtr=1;
	}
}
