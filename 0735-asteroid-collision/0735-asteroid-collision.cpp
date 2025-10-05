#include <bits/stdc++.h>
using namespace std;

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
                } 
                else if (st.top() > 0 && asteroids[i] < 0) {
                    // collision case
                    bool destroyed = false;
                    while (!st.empty() && st.top() > 0 && abs(st.top()) < abs(asteroids[i])) {
                        st.pop();
                    }

                    if (!st.empty() && st.top() > 0 && abs(st.top()) == abs(asteroids[i])) {
                        st.pop();
                        destroyed = true;
                    }
                    else if (!st.empty() && st.top() > 0 && abs(st.top()) > abs(asteroids[i])) {
                        destroyed = true;
                    }

                    if (!destroyed) st.push(asteroids[i]);
                }
                // else if (st.top() <= 0 && asteroids[i] < 0) {
                //     st.push(asteroids[i]);
                // }
                // else if (st.top() < 0 && asteroids[i] > 0) {
                //     st.push(asteroids[i]);
                // }
                else{
                    st.push(asteroids[i]);
                }
            }
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
