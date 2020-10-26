/*
    Any selection of r objects from A, where each object can be selected more than once, is called a combination of n objects taken r at a time with repetition.
*/

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> combination_with_repetition(int N, int M)
{
    vector<vector<int>> cs;
    vector<int> xs(M, 1);
    int pos = M-1;

    while(true)
    {
        cs.push_back(xs); // save valid combination

        xs[pos]++;        //  process next combination

        // if invalid combination, process another position
        while(pos > 0 and xs[pos] > N)
        {
            --pos;
            xs[pos]++;
        }

        if(pos == 0 and xs[pos] > N) break;

        for(int i = pos+1; i<M; ++i) {
            xs[i] = xs[pos];
        }

        pos = M - 1;
    }

    return cs;
}

int main()
{
    for(auto solution : combination_with_repetition(6, 3)) {
        for(auto value : solution) {
            cout << value << " ";
        }

        cout << '\n';
    }

    return 0;
}
