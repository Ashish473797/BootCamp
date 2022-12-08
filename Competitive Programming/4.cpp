#include <bits/stdc++.h>
using namespace std;
float median(int arr1[], int arr2[], int m, int n)
{
    if (m > n)
    {
        median(arr2, arr1, n, m);
    }
    int start = 0, end = m , mid_point = ((m + n) + 1) / 2;
    while (start <= end)
    {
        int mid1 = (start + end) / 2;
        int mid2 = mid_point - mid1;

        int l1 = (mid1 == 0) ? INT_MIN : arr1[mid1 - 1];
        int r1 = (mid1 == m) ? INT_MAX : arr1[mid1];
        int l2 = (mid2 == 0) ? INT_MIN : arr2[mid2 - 1];
        int r2 = (mid2 == n) ? INT_MAX : arr2[mid2];

        if (l1 <= r2 && l2 <= r1)
        {
            if ((m + n) % 2 != 0)
                return max(l1, l2);
            else
                return (max(l1, l2) + min(r1, r2)) / 2.0;
        }
        else if (l1 > r2)
        {
            end = mid1 - 1;
        }
        else
        {
            start = mid1 + 1;
        }
    }
    return 0.0;
}
int main()
{
    int m, n;
    cout << "Enter size of the first array: ";
    cin >> m;
    cout << "Enter size of the second array: ";
    cin >> n;
    int arr1[m], arr2[n];
    cout << "Enter " << m << " element for first array in sorted order: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter " << n << " element for second array in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << "median is " << fixed <<median(arr1, arr2, m, n);
    return 0;
}