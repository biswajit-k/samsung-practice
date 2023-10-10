struct Stack {
    int st[100001];
    int l = 0, r = 0;
    
    bool empty() {
        return l == r;
    }
    int top() {
        return st[r - 1];
    }
    int pop() {
        int t = top();
        r--;
        return t;
    }
    void push(int x) {
        st[r++] = x;
    }
};
