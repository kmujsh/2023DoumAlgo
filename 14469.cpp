#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int answer = 0;
int N;
int a, b;
vector<pair<int, int>> v;

int main()
{
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        v.push_back(pair<int, int>(a, b));
    }
    
    sort(v.begin(), v.end());
    answer = v[0].first + v[0].second;
    for(int i = 1; i < N; i++) {
        if(answer <= v[i].first)
            answer = (v[i].first + v[i].second);
        else
            answer += v[i].second;
    }
    cout << answer << endl;
    return 0;
}
