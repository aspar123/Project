#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
using namespace std;
int abs(int n)
{
	return((n>0)?n:(n*(-1)));
}
void dda(int x1,int y1,int x2,int y2)
{
	int dx=x2-x1;
	int dy=y2-y1;
	int steps=abs(dx)>abs(dy)?abs(dx):abs(dy);
	if(steps==0)
	{
		putpixel(x,y,RED);
		cout<<"Only single point";
		exit(0);
	}
	float xinc=dx/(float)steps;
	float yinc=dy/(float)steps;
	float x=x1;
	float y=y1;
	for(int i=0;i<=steps;i++)
	{
		putpixel(x,y,RED);
		x+=xinc;
		y+=yinc;
		delay(100);
	}
}
int main()
{
	int x1=10,y1=4,x2=110,y2=40;
	int gd=DETECT,gm;
	initgraph(&gd,&gd,NULL);
	dda(x1,y1,x2,y2);
	return 0;
}
