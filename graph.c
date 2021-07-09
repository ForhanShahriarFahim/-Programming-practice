#include<graphics.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	int x=320;y=240;radius;
	intitgraph(&gd, &gm,"c:\\TC\\BGT");
	for(radious=25;radious<=125;radius=radius+20)
	circle(x, y, radius);
	getch();
	closegraph();
	return 0;
}
