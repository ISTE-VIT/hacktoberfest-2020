/*
    Given an array of integers, find anyone combination of four elements in the array whose sum is equal to zero
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> _4sum(const vector<int> & xs)
{
    using ii = pair<int, int>;
    unordered_map<int, ii> ps;

    for(auto x : xs) {
        for(auto y : xs) {
            ps[x+y] = {x, y};
        }
    }

    for(auto [s, p] : ps) {
        if(ps.count(-s)) {
            auto [a, b] = p;
            auto [c, d] = ps[-s];

            return {a, b, c, d};
        }
    }

    return { };
}

int main()
{
    vector<int> available_values = {6, 3, -7, 0, -5, 2, -2, -4, 0, -4, 4, -3, 4, 7, 9, -1, 7, -3, 1, -3, 8, -7, -4, 6, -3, 1, 3, 6, -1, 6, -4, -4, 6, 4, -7, -4, -6, 4, 5, 4, 0, -6, -6, 2, -1, 6, -5, 8, 3, 8, 6, 8, -4, 2, 9, 7, -2, -6, -4, 6, -5, 7, -3, 8, -2, 5, -6, 1, 6, 9, -6, -1, 5, 0, 4, 9, -6, 5, 7, -2, 0, 3, -7, -3, 5};

    auto ans = _4sum(available_values);

    for(auto v : ans)
        cout << v << " "; cout << '\n';

    return 0;
}
