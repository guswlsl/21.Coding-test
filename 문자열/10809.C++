#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    //크기가 26인 배열을 선언
    int alpha[26];
    for(int i=0; i<26; i++) {
        alpha[i] = -1; //모든 값을 -1로 초기화
    }

    // 문자열 S의 각 문자를 확인하며 처음 등장하는 위치를 기록
    for(int i=0; i<S.length(); i++) {
        if(alpha[S[i] - 'a'] == -1) { // 해당 알파벳이 처음 등장하는 경우
            alpha[S[i] - 'a'] = i;
        }
    }

    for(int i=0; i<26; i++) {
        cout << alpha[i] << " ";
    }
    
    return 0;
}
