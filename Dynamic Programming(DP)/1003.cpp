// 1003: 피보나치 함수
// 실버 3
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T, N;
    int dp[41] = {0, 1, 1};

    for(int i=3; i<41; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cin >> T;
    while(T--)
    {
        cin >> N;

        if(N==0)
        {
            cout << 1 << ' ' << 0 << "\n";
        }
        else if(N==1)
        {
            cout << 0 << ' ' << 1 << "\n";
        }
        else
        {
            cout << dp[N-1] << ' ' << dp[N] << "\n";
        }
    }

    return 0;
}