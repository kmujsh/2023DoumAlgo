#include <iostream>
#include <string>

using namespace std;

int main()
{
    char m[5] = {'a', 'e', 'i', 'o', 'u'};
    
    while(1) {
        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        string S;
        cin >> S;
        if(S == "end") break;
        
        // 조건 1 
        for(int i = 0; i < S.length(); i++){
            for(int j = 0; j < 5; j++){
                if(S[i] == m[j]){
                    c1 = 1;
                    break;
                }
            }
        }
        
        if(c1 == 0)
            cout << "<" << S << "> is not acceptable." << endl;
        else {
            for(int i = 0; i < S.length(); i++) {
                int b = 1;
                // 조건 3
                if(S[i] == S[i + 1] && S[i] != 'o' && S[i] != 'e') {
                    c1 = 0;
                    break;
                }
                // 조건 2
                // 모음이면 b가 0, 자음이면 b가 1
                for(int j = 0; j < 5; j++) {
                    if(S[i] == m[j]) b = 0;
                }
                
                // 모음이면 c2 증가, 자음이면 c3 증가 
                // 3번 이상 반복되면 안 되므로 c2나 c3이 3 이상이면 break
                if(b == 0){
                    c2++;
                    c3 = 0;
                }
                else{
                    c3++;
                    c2 = 0;
                }
                if(c2 == 3 || c3 == 3){
                    c1 = 0;
                    break;
                }
            }
            
            if(c1 == 0) cout << "<" << S << "> is not acceptable." << endl;
            else cout << "<" << S << "> is acceptable." << endl;
        }
    }
    return 0;
}
