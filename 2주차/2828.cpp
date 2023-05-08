#include <iostream>

using namespace std;

int main()
{
    // N, M, J = 입력받는 변수, dist = 출력 거리
    // N = 스크린 크기, M = 바구니 크기, J = 사과의 개수수
    int N, M, J;
    cin >> N >> M;
    cin >> J;
    
    // screen = 사과가 떨어지는 위치 표시
    // 사과가 떨어지는 위치 입력받기
    int left = 1, right = M;
    int answer = 0;
    
    for (int i = 0; i < J; i++) {
        int drop;
        cin >> drop;
        
        if (left > drop) {
            answer += left - drop;
            left = drop;
            right = drop + (M - 1);
        }
        
        else if (right < drop) {
            answer += drop - right;
            left = drop - (M - 1);
            right = drop;
        }
    }
    
    cout << answer << endl;
    return 0;
}
