#include<iostream>
#include<math.h>
#include<cmath>

float f(float);

int main()

{
using namespace std;
float x1,x2,x3,x4,y1,y2,y3,y,x;
x1=0;
x2=1;

y1=f(x1);
y2=f(x2);

if ( (y1<=0) && (y2<=0) )	
{	
while (1)
{
	y1=f(x1);
	y2=f(x2);
	if ( (y1<=0) && (y2>=0) )
	{
		cout<<"Root lies between "<<x1<<" and "<<x2;
		break;
	}
	else
	if ( (y1>=0) && (y2<=0) )
	{
		cout<<"Root lies between "<<x1<<" and "<<x2;
		break;
	}
	else
	{
		x1++;
		x2++;
	}	
}
}
else
if ( (y1>=0) && (y2>=0) )
{
while (1)
{
	y1=f(x1);
	y2=f(x2);
	if ( (y1<=0) && (y2>=0) )
	{
		cout<<"Root lies between "<<x1<<"and "<<x2;
		break;
	}
	else
	if ( (y1>=0) && (y2<=0) )
	{
		cout<<"Root lies between "<<x1<<"and "<<x2;
		break;
	}
	else
	{
		x1--;
		x2--;
	}	
}
}
else
{
	cout<<"Roots are imaginary!!";
	return 2;
}

y1=f(x1);
y2=f(x2);

while (1)
{
	if ( (y1==0) || (y2==0) )
	{
	break;
	}
	else
	if ( (y2>=-0.0001) && (y2<0.0001) )
	{
	break;
	}
	else
	if ( y1>=-0.0001 && y1<0.0001 )
	{
	break;
	}
	else
	if ( y1<0 && y2>0 )
	{
	x3=(x1+x2)/2;
	y3=f(x3);
	if ( y3<0 )
	{
		x1=x3;
		y1=f(x1);
		y2=f(x2);
		cout<<"\n"<<x1<<"   "<<x2;
	}
	else
	{
		x2=x3;
		y1=f(x1);
		y2=f(x2);
		cout<<"\n"<<x1<<"   "<<x2;
	}
	}		
} 

y1=f(x1);
y2=f(x2);

if( (y1==0) || (y1==0.01) )
{
	cout<<"\nRoots is: "<<x1;
}
else
{
	cout<<"\nRoot is: "<<x2;
}	
return 0;
}

float f(float x)
{
float y;
//function should be written down
y=(x*x)+1; 
return y;
}

