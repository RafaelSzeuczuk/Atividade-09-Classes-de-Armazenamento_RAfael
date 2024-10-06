#include <iostream>
using namespace std;
void incremento()
{
    static int x;
    cout << "x = " << x << endl;
    x++;
}
int main()
{
    incremento();
    incremento();
    incremento();
    return 0;
}