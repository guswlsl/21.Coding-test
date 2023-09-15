#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    // 문자열 뒤집기
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    // 문자열을 정수로 변환해서 큰 값을 출력
    cout << max(stoi(a), stoi(b)) << endl;

    return 0;
}