#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(5, 90);
    vector<int> v3{55, 6, 89, 33, 20};

    cout << v3[0] << endl;
    cout << v3[1] << endl;
    cout << v3[2] << endl;
    cout << v3[3] << endl;
    cout << v3[4] << endl;

    return 0;
}