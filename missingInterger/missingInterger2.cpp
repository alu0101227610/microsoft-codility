//66% score
#include <vector>
#include <algorithm>
#include <iostream>

int sign(int x) {
    return (x < 1);
}

int solution(vector<int> &A) {
    std::sort(A.begin(), A.end());
    auto it = remove_if(A.begin(), A.end(), bind2nd(less<int>(), 1));
    A.erase(it, A.end());
    if(A.size() < 2) return 1;

    for(unsigned i = 0; i < (A.size()-1); i++) {
        if(A[i] > 0 && A[i+1] > A[i] + 1) {
            return A[i] + 1;
        }
    }
    int last = A[A.size()-1];
    if(last > 0) return last + 1;
    return 1;
}