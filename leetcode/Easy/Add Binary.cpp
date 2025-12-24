class Solution {
public:
    string addBinary(string a, string b) {

        int aLenght = a.size() - 1;
        int bLenght = b.size() - 1;

        int carry = 0;
        string ans = "";

        while (aLenght >= 0 || bLenght >= 0 || carry) {

            int sum = carry;
            carry = 0;

            if (aLenght >= 0 && a[aLenght] == '1') {
                sum += 1;
            }

            if (bLenght >= 0 && b[bLenght] == '1') {
                sum += 1;
            }

            if (sum == 0) ans += '0';
            else if (sum == 1) ans += '1';
            else if (sum == 2) {
                ans += '0';
                carry = 1;
            }
            else if (sum == 3) {
                ans += '1';
                carry = 1;
            }

            aLenght--;
            bLenght--;
        }

        if (carry > 0)
        {
            ans += '1';
        }


        int left = 0;
        int right = ans.size() - 1;
        while (left < right) {
            swap(ans[left], ans[right]);
            left++;
            right--;
        }

        return ans;
    }
};
