class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                vector<int> subarray;

                for (int k = i; k <= j; k++)
                    subarray.push_back(arr[k]);

                if (subarray.size() % 2 != 0) {
                    for (int s : subarray)
                        sum += s;
                }
            }
        }
        return sum;
    }
};