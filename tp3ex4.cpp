#include <iostream>
#include <vector>
using namespace std;

pair<int, int> mini_maxi(const vector<int>& A) {
    int mini = A[0];
    int maxi = A[0];

    for (int val : A) {
        if (val < mini) mini = val;
        if (val > maxi) maxi = val;
    }
    return {mini, maxi};
}

int main() {
    vector<int> A = {7, 4, 1, 8, -2, 9};

    pair<int, int> result = mini_maxi(A);
    cout << "Minimum : " << result.first << ", Maximum : " << result.second << endl;

    return 0;
}
