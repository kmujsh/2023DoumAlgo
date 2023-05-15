#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// 중위순회
// https://iridescent-zeal.tistory.com/61?category=1261302

int k;
int num;
int arr[1050];
vector<int> tree[10];

void insert(int depth, int start, int end){
    if(depth >= k) return;
    
    // 리프노드
    if(start == end) {
        tree[depth].push_back(arr[start]);
        return;
    }
    
    int mid = (start + end) / 2;
    if(mid < 0 || mid >= num) return;
    tree[depth].push_back(arr[mid]);
    
    insert(depth + 1, start, mid - 1); // 왼쪽 서브트리
    insert(depth + 1, mid + 1, end); // 오른쪽 서브트리
}

int main(){
    cin >> k;
    num = pow(2, k) - 1;
    for(int i = 0; i < num; i++)
        cin >> arr[i];
        
    insert(0, 0, num - 1);
    
    for(int i = 0; i < k; i++){
        for(int j = 0; j < tree[i].size(); j++){
            cout << tree[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
