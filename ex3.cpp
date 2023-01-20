#include <iostream>
using namespace std;

int main()
{
    int rad1;
    float formula;
    cout << " Input the radius of a sphere : ";
    cin >> rad1;
    formula = (4 * 3.14 * rad1 * rad1 * rad1) / 3;
    cout << " The volume of a sphere is : " << formula << endl;
    cout << endl;
    return 0;
}
