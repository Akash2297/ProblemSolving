class Solution {
public:
    int romanToInt(string s) {
        
        int ans = 0;
        int previousNumber = 0;

        for (int i = 0; i < s.size(); i++) {

            int temp = 0;

            if (s[i] == 'I') temp = 1;
            else if (s[i] == 'V') temp = 5;
            else if (s[i] == 'X') temp = 10;
            else if (s[i] == 'L') temp = 50;
            else if (s[i] == 'C') temp = 100;
            else if (s[i] == 'D') temp = 500;
            else if (s[i] == 'M') temp = 1000;

            if (temp > previousNumber) 
            {
                ans += temp - 2 * previousNumber;
            } 
            else {
                ans += temp;
            }

            previousNumber = temp;
        }

        return ans;
    }
};