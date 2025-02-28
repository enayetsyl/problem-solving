#include <bits/stdc++.h>
using namespace std;

void maxWaterContainer(vector<int>& H) {
    int left = 0, right = H.size() - 1;
    int maxArea = 0, bestLeft = 0, bestRight = 0;

    while (left < right) {
        int height = min(H[left], H[right]);
        int width = right - left;
        int area = height * width;

        // If we find a larger area, update indices
        if (area > maxArea) {
            maxArea = area;
            bestLeft = left;
            bestRight = right;
        }

        // Move the pointer pointing to the smaller height
        if (H[left] < H[right]) {
            left++;
        } else {
            right--;
        }
    }

    // Print the left index first, then right index
    cout << bestLeft << " " << bestRight << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> H(N);
        for (int i = 0; i < N; i++) {
            cin >> H[i];
        }
        maxWaterContainer(H);
    }
    return 0;
}
