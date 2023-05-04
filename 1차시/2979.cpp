// [BOJ] 트럭 주차 / 브론즈2/ 25분

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int answer = 0;
    int parking[100] = {0,};
    int A, B, C;
    cin >> A >> B >> C;
    
    for(int i = 0; i < 3; i++) {
        int in, out;
        cin >> in >> out;
        for(int j = in; j < out; j++)
            parking[j] += 1;
    }
    
    for(int i = 0; i < 100; i++) {
        if (parking[i] == 1) answer += A;
        else if (parking[i] == 2) answer += (B * 2);
        else if (parking[i] == 3) answer += (C * 3);
    }
    
    cout << answer;
    return 0;
}
