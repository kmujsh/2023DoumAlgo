// [BOJ] 농구 경기 / 브론즈2 / 12분

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 변수 여러 가지 초기화
    int flag = 0;
    int N;
    cin >> N;
    int name[26];
    string S;
    for(int i = 0; i < 26; i++) name[i] = 0;
    
    // 이름 입력받기
    for(int i = 0; i < N; i++) {
        string fname;
        cin >> fname;
        name[fname[0] - 'a'] += 1;
    }
    
    for(int i = 0; i < 26; i++) {
        if (name[i] >= 5) {
            flag = 1;
            cout << (char)(i + 'a');
        }
    }
    if (flag == 0) cout << "PREDAJA";
    else cout << S;
    return 0;
}
