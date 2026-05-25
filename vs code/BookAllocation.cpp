#include <iostream>
using namespace std;
bool isValid(int mid, int arr[], int n, int m)
{
    int pages = 0, stu = 1;
    for (int i = 0; i < n; i++)
    {
        if (pages + arr[i] <= mid)
        {
            pages += arr[i];
        }
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    return stu <= m;
}
int allocation(int arr[], int n, int m)
{
    int sum = 0;
    int ans = -1;
    if (m > n)
        return ans;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int st = 0, e = sum;
    while (st <= e)
    {
        int mid = st + (e - st) / 2;
        if (isValid(mid, arr, n, m))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = allocation(arr, n, m);
    cout << ans;
}