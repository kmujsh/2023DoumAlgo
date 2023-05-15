#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// https://gdlovehush.tistory.com/337

int k; // 부등호 개수
char ineq[11]; // 부등호
int num[11]; // 수열
bool usedNum[11]; // 이미 쓴 숫자인지 검사
vector <string> answer; // 조건을 만족하는 수열 저장 

// 수열이 부등호를 만족시키는지 검사
// 만족시키면 true return 
bool inequalCheck(char a, char b, char oper){
    if(oper == '<'){
        if(a > b) return false;
    }
    else{
        if(a < b) return false;
    }
    return true;
}

void combination(int index, string num){
    
    // 수열이 완성되었을 경우 
    if(index == (k + 1)){
        answer.push_back(num);
        return;
    }
    
    for(int i = 0; i <= 9; i++){
        if(usedNum[i]) continue; // 이미 사용한 수의 경우 지나감 
        // index가 0이면 처음 만드는 것이므로 바로 추가하고,
        // 아니면 ineqaulCheck 후 맞는 수만 집어넣음음
        if(index == 0 || inequalCheck(num[index - 1], i + '0', ineq[index - 1])){
            usedNum[i] = true;
            combination(index + 1, num + to_string(i));
            usedNum[i] = false;
        }
    }
}

int main(){
    cin >> k;
    for(int i = 0; i < k; i++)
        cin >> ineq[i];
    
    combination(0, "");
    sort(answer.begin(), answer.end());
    cout << answer[answer.size() - 1] << "\n" << answer[0];
    return 0;
}
