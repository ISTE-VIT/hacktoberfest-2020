/*
    Given a vector p [1 .. n] of natural numbers and a natural number c, decide whether there is a subset X of {1, 2, ..., n} such that p (X) = c.
*/

#include <bits/stdc++.h>

using namespace std;

set<int> subset_sum(const vector<int> & xs)
{
    set<int> s;
    size_t xs_size = xs.size();

    for(size_t i=0; i < (1ul << xs_size); i++)
    {
        int sum = 0;

        for(size_t j = 0; j<xs_size; ++j) {
            if( (1 << j) & i ) {
                sum += xs[j];
            }
        }

        s.insert(sum);
    }

    return s;
}

bool solve(int x, const vector<int> & xs)
{
    int N = xs.size();

    vector<int> g1(xs.begin(), xs.begin() + N/2);
    vector<int> g2(xs.begin() + N/2, xs.end());

    auto s1 = subset_sum(g1);
    auto s2 = subset_sum(g2);

    for(auto s : s1) {
        if(s2.count(x-s))
            return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    int val;
    while(cin >> val) {
        v.push_back(val);
    }

    cout << ( solve(n, v) ? "Has solution" : "No solution" ) << '\n';

    return 0;
}
