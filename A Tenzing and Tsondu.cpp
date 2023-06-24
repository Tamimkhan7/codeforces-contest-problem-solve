#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n], arr2[m];
        int sum = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[j];
        }
        sort(arr, arr + n, greater<int>());
        sort(arr2, arr2 + m, greater<int>());
        if (n >= m)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > arr2[i])
                {
                    arr[i] = arr[i] - arr2[i];
                    sum = arr[i];
                }
                else
                {
                    arr2[i] = arr2[i] - arr[i];
                    sum2 = arr[i];
                }
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                if (arr[i] > arr2[i])
                {
                    arr[i] = arr[i] - arr2[i];
                    sum = arr[i];
                }
                else
                {
                    arr2[i] = arr2[i] - arr[i];
                    sum2 = arr[i];
                }
            }
        }

        if (sum == sum2)
            cout << "Draw" << endl;
        else if (sum > sum2)
            cout << "Tsondu" << endl;
        else
            cout << "Tenzing" << endl;
    }
}
