// [BOJ] 팰린드롬인지 확인하기 / 브론즈2 / 5분

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int answer = 1;
    string S;
    cin >> S;
    
    for(int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - (i + 1)])
            answer = 0;
    }
    cout << answer;
    return 0;
}
