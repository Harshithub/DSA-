#include <iostream>
#include<graphics>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm);
    circle(120,270,30);

    return 0;
}
