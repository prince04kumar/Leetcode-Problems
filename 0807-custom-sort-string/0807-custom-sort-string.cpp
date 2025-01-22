string ordersol;
class Solution {
public:
   static  bool com(char a , char b){
        return (ordersol.find(a)<ordersol.find(b));
    }

    string customSortString(string order, string s) {
        ordersol = order;
        sort(s.begin(), s.end(), com);
        return s;
    }
};