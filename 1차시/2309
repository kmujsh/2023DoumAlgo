// [BOJ] 일곱 난쟁이 / 브론즈1 / 15분
// 난쟁이 키가 100인 경우가 2가지 이상인 경우를 처리할 것.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int height[9];
    int sum = 0;
    
    for(int i = 0; i < 9; i++) {
        cin >> height[i];
        sum += height[i];
    }
    
    sort(height, height + 9);
    
    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 9; j++) {
            if ((sum - (height[i] + height[j])) == 100) {
                for(int k = 0; k < 9; k++) {
                    if (k != i && k != j)
                        cout << height[k] << "\n";
                }
                return 0;
            }
        }
    }
}
