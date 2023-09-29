
#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

int longest_ap(vector<int>a,int n)
{
    if (n <= 2)
        return n;

    int dp[n][n];
    int max_len = 2;

    for (int i = 0; i < n; i++) // filling last column as 2
        dp[i][n - 1] = 2;

    // Consider every element as the second element of AP
    for (int j = n - 2; j >= 1; j--)
    {
        int i = j - 1;
        int k = j + 1;

        while (i >= 0 && k <= n - 1)
        {
            if (a[i] + a[k] < 2 * a[j])
                k = k + 1;
            else if (a[i] + a[k] > 2 * a[j])
            {
                dp[i][j] = 2;
                i = i - 1;
            }
            else
            {
                dp[i][j] = dp[j][k] + 1;
                max_len = max(max_len, dp[i][j]);
                i = i - 1;
                k = k + 1;
            }
        }
        // If the loop was stopped due to k becoming more than
        // n-1, set the remaining entties in column j as 2
        while (i >= 0)
        {
            dp[i][j] = 2;
            i = i - 1;
        }
    }
    return max_len;
}

int main()
{
    // Example usage
    int n;
    cin >> n;

    ListNode *head = NULL;
    ListNode *current = NULL;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
        if (current == NULL)
        {
            head = new ListNode(val);
            current = head;
        }
        else
        {
            current->next = new ListNode(val);
            current = current->next;
        }
    }

    cout << "Longest length of arithmetic progression: " << longest_ap(arr, n) << endl;

    return 0;
}