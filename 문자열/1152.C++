#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s, word;
    getline(cin, s); //사용자로부터 한 줄의 문자열을 받아 s에 저장

    istringstream iss(s); // 입력 스트림 iss를 생성
    int count = 0;

    while (iss >> word) {
        count++;
    }

    cout << count << endl;

    return 0;
}
