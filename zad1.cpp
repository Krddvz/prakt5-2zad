#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cin >>x >>y;
    int d =1;
    double s=x;
    while (s<y) {
        s = s*1.1;
        d++;
    }
    cout<< d <<endl;
    return 0;
}