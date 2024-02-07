#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;

        vector<int> arr(k);
        for (int j = 0; j < k; ++j)
        {
            cin >> arr[j];
        }

        if (k == true)
        {
            int c = 0;
            for (int m = 0; m < k; m++)
            {
                if (arr[0] == arr[m])
                {
                    c = c + 1
                }
            }
            if (c == k)
            {
                cout << 0;
                break;
            }
        }
        else
        {
            int count = 1;
            for (int m = 1; m < k; ++m)
            {
                if (arr[m] != arr[m - 1])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
