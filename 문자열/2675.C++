#include <iostream>
#include <string>
using namespace std;

int main() {
    int T, R;
    string S;
    
    cin >> T;
    
    for(int i = 0; i < T; i++) {
        cin >> R >> S; // 반복 횟수와 문자열 입력 받기
        
        for(int j = 0; j < S.length(); j++) { //j[0]=A j[1]=B
            for(int k = 0; k < R; k++) { //AABB
                cout << S[j];
            }
        }
        cout << "\n";
    }

    return 0;
}
