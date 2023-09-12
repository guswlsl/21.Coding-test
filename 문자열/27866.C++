#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int d;

    cin >> s >> d;
    cout << s.substr(d-1,1) << endl;
    return 0;
}