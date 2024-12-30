#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v = {5, 9, 6, 2, 3, 4, 11};
  int n = v.size();
  vector<int> vr(5);
  cout << "Vector is: ";

  for (int i = 0; i <= n - 1; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  cout << "Reverse of vector is: ";

  for (int i = 0; i < v.size(); i++)
  {
    n--;
    vr[i] = v[n];
    cout << vr[i] << " ";
  }
  cout << endl;
}