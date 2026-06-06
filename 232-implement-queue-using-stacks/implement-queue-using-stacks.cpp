class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {
    }

    void push(int x) {
        s1.push(x);
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    int pop() {
        int front = peek();  // ensure front element is in s2
        s2.pop();
        return front;
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};