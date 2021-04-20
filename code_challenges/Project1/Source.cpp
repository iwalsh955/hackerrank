#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k) {
    //Write your code here.
    deque<int> dq(k);
    int loop = 0;
    for (; loop < k; loop++)
    {
        while (!dq.empty() && arr[loop] >= arr[dq.back()])
            dq.pop_back();

        dq.push_back(loop);
    }
    for (; loop < n; loop++)
    {
        cout << arr[dq.front()] << " ";
        
        while (!dq.empty() && dq.front() <= loop - k)
            dq.pop_front();

        while (!dq.empty() && arr[loop] >= arr[dq.back()])
            dq.pop_back();

        dq.push_back(loop);

        
    }
    cout << arr[dq.front()] << endl;
}

int main() {

    int t;
    cin >> t;
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int i;
        int* arr = new int[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}