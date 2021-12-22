//55% score
#include <vector>
#include <algorithm>
#include <iostream>

int solution(vector<int> &A) {
    std::sort(A.begin(), A.end());

    for(unsigned i = 0; i < (A.size()-1); i++) {
        if(A[i] > 0 && A[i+1] > A[i] + 1) {
            return A[i] + 1;
        }
    }
    int last = A[A.size()-1];
    if (last > 0) return last + 1;
    else return 1;
}