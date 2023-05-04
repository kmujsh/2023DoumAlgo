// [BOJ] 알파벳 개수 / 브론즈4 / 15분
// 배열 초기화 신경쓰기

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int alphabet[26];
    string S;
    cin >> S;
    for (int i = 0; i < 26; i++)
        alphabet[i] = 0;

    for (int j = 0; j < S.length(); j++) {
        alphabet[S[j] - 'a'] += 1;
    }
    
    for (int i = 0; i < 26; i++)
        cout << alphabet[i] << " ";
    return 0;
}
