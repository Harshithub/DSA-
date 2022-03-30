#include <iostream>

using namespace std;

int main()
{  system("color 02");
       int numNeighbours;
cin>>numNeighbours;
    if (numNeighbours>=3||numNeighbours==4)
    {
        ++numNeighbours;
        cout<<"You are Dead !"<<endl;
    }
    else
        --numNeighbours;
    return 0;
}
