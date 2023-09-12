#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;

    char ch;
    for (int i=0; i<N; i++){
    cin >> ch;
    sum += ch - '0'; //문자 숫자를 그에 해당하는 정수 값으로 변환
    }

    cout << sum << endl;

    return 0;
}