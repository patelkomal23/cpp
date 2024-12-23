#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(12);
    v1.push_back(56);
    v1.push_back(90);

    cout << v1.front() << endl;
    cout << v1.back() << endl;

    v1.pop_back();

    v1.clear();

    cout << v1.size() << endl;
    cout << v1.empty() << endl;

    return 0;
}