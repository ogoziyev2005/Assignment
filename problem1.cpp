#include <iostream>
#include <vector>

using namespace std;

int sumOfMultiplication(const vector<int>& arr1, const vector<int>& arr2) {
    int sum = 0;
    for (int i = 0; i < arr1.size(); ++i) {
        sum += arr1[i] * arr2[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr1(n), arr2(n);


    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    int result = sumOfMultiplication(arr1, arr2);
    cout << result << endl;

    return 0;
}
