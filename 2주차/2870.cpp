#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> strarr;
 
// https://code-kh-studio.tistory.com/40

bool compare(string a, string b) {
    int aLen = a.length();
    int bLen = b.length();
    if(aLen > bLen) return false;
    else if(aLen < bLen) return true;
    else return a < b;
}

int main() {
    int N;  cin >> N;
    
    for(int i = 0; i < N; i++) {
        char line[101] = {0,};  cin >> line;
        string numbers = ""; // 숫자 추출 
        bool flag = false; // 숫자가 있는지 
        
        for(int j = 0; j < strlen(line); j++) {
            if(line[j] >= '0' && line[j] <= '9') {
                numbers += line[j];
                flag = true;
            }
            else{
                if(flag){
                    while(1){
                        // 숫자가 2개 이상이고, 맨 앞이 0일 경우 맨 앞 자르기
                        if(numbers.length() > 1 && numbers.at(0) == '0')
                            numbers = numbers.substr(1, numbers.length() - 1);
                        else break;
                    }
                    // 벡터에 숫자 추가
                    strarr.push_back(numbers);
                }
                flag = false;
                numbers = "";
            }
        }
        
        if(flag){
            while(1){
                if(numbers.length() > 1 && numbers.at(0) == '0')
                    numbers = numbers.substr(1, numbers.length() - 1);
                else break;
            }
            strarr.push_back(numbers); 
        }
        
        sort(strarr.begin(), strarr.end(), compare);
        
        
    }
    for(int i = 0; i < strarr.size(); i++)
        cout << strarr.at(i).c_str() << endl;
    return 0;
}
