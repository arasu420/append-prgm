#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str;
  cin>>str;
  str.append(1, '.');
  cout << str;
  return 0;
}
