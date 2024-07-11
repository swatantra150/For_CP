#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
using namespace std;

class Solution {
public:
    double sum = 0;
    int cnt = 0;
    double sum_sq = 0;
    map<int, int> freq;
    multiset<pair<int, int>> freq_order;
    // Median
    multiset<int> low, high;

    void balance() {
        while (low.size() < high.size()) {
            int x = *high.begin();
            high.erase(high.find(x));
            low.insert(x);
        }
        while (low.size() > high.size() + 1) {
            int x = *low.rbegin();
            low.erase(low.find(x));
            high.insert(x);
        }
    }

    void insert(int x) {
        cnt++;
        sum += x;
        sum_sq += x * x;

        // Mode
        if (freq_order.find(make_pair(freq[x], x)) != freq_order.end()) {
            freq_order.erase(freq_order.find(make_pair(freq[x], x)));
        }
        freq[x]++;
        freq_order.insert(make_pair(freq[x], x));

        // Median
        if (low.empty()) {
            low.insert(x);
        } else if (x <= (*low.rbegin())) {
            low.insert(x);
        } else {
            high.insert(x);
        }
        balance();
    }

    void remove(int x) {
        cnt--;
        sum -= x;
        sum_sq -= x * x;

        // Mode
        if (freq_order.find(make_pair(freq[x], x)) != freq_order.end()) {
            freq_order.erase(freq_order.find(make_pair(freq[x], x)));
        }
        freq[x]--;
        if (freq[x] > 0) {
            freq_order.insert(make_pair(freq[x], x));
        }

        // Median
        if (high.find(x) != high.end()) {
            high.erase(high.find(x));
        } else if (low.find(x) != low.end()) {
            low.erase(low.find(x));
        }
        balance();
    }

    double mean() {
        return cnt ? sum / cnt : 0;
    }

    double variance() {
        return cnt ? (sum_sq / cnt - mean() * mean()) : 0;
    }

    double median() {
        balance();
        if (cnt % 2) {
            return (*low.rbegin());
        } else {
            return (double)(*low.rbegin() + *high.begin()) / 2.0;
        }
    }

    int mode() {
        if (!freq_order.empty()) {
            return freq_order.rbegin()->second;
        }
        return -1; // or any indicator of no mode available
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int num : nums) {
        sol.insert(num);
    }

    cout << "Mean: " << sol.mean() << endl;
    cout << "Variance: " << sol.variance() << endl;
    cout << "Median: " << sol.median() << endl;
    cout << "Mode: " << sol.mode() << endl;

    for (int num : nums) {
        sol.remove(num);
    }

    return 0;
}
