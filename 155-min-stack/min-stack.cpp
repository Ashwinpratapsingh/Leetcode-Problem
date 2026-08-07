class MinStack {
public:
    stack<long long> s;
    long long mini;

    MinStack() {
        mini = LLONG_MAX;
    }

    void push(int val) {
        if (s.empty()) {
            s.push(val);
            mini = val;
        }
        else if (val >= mini) {
            s.push(val);
        }
        else {
            s.push(2LL * val - mini);
            mini = val;
        }
    }

    void pop() {
        if (s.empty()) return;

        long long x = s.top();
        s.pop();

        if (s.empty()) {
            mini = LLONG_MAX;
            return;
        }

        if (x < mini)
            mini = 2LL * mini - x;
    }

    int top() {
        long long x = s.top();
        if (x >= mini)
            return x;
        return mini;
    }

    int getMin() {
        return mini;
    }
};