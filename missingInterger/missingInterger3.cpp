int solution(vector<int> &A) {
  vector<bool> c(1000000, false);
    for(int i : A) {
        if(i > 0)
            c[i-1] = true;
    }
    for(int i = 0; i< 1000000; i++) {
        if(c[i] == false) return i;
    }
    return 1;
}