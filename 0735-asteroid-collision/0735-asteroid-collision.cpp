class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                st.push(asteroids[i]);
            } else {
                if (st.top() > 0 && asteroids[i] > 0) {
                    st.push(asteroids[i]);
                } else if (st.top() > 0 && asteroids[i] < 0) {
                    if (abs(st.top()) > abs(asteroids[i])) {
                        continue;
                    } else if (abs(st.top()) < abs(asteroids[i])) {
                        while (!st.empty() && st.top() > 0 &&
                               asteroids[i] < 0 &&
                               (abs(st.top()) < abs(asteroids[i]))) {
                            st.pop();
                        }
                        if (abs(st.top()) == abs(asteroids[i])) {
                            st.pop();
                            continue;
                        }else if(abs(st.top()) > abs(asteroids[i])){
                            continue;
                        }
                         else {
                            st.push(asteroids[i]);
                        }
                    }
                    else{
                        st.pop();
                        continue;
                    }
                }

                else {
                    st.push(asteroids[i]);
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};