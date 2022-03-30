#include <iostream>

using namespace std;
int i=10;
class test{
    int i;
    int e1[5];
    int *e2;
    string n;
public :
    test():i(20),e2(new int[i]){}
    int s(){
    int i=30;
    cout<<i<<" ";
    return this->i;}
};


int main()
{  test t;
    cout<<t.s()<<" "<<sizeof(t);

    return 0;
}
