#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{

    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len, c = 0;
        len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (s[0] == 'c')
            {
                c++;
            }
            else if (s[1] == 'o')
            {
                c++;
            }
            else if (s[2] == 'd')
            {
                c++;
            }
            else if (s[3] == 'e')
            {
                c++;
            }
            else if (s[4] == 'f')
            {
                c++;
            }
            else if (s[5] == 'o')
            {
                c++;
            }
            else if (s[6] == 'r')
            {
                c++;
            }
            else if (s[7] == 'c')
            {
                c++;
            }
            else if (s[8] == 'e')
            {
                c++;
            }
            else if (s[9] == 's')
            {
                c++;
            }
        }
        cout << len - c << endl;
    }
}