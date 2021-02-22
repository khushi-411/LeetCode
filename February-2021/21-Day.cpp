/* On a broken calculator that has a number showing on its display, we can perform two operations:

Double: Multiply the number on the display by 2, or;
Decrement: Subtract 1 from the number on the display.
Initially, the calculator is displaying the number X.

Return the minimum number of operations needed to display the number Y. */

class Solution {
public:
    int brokenCalc(int X, int Y) {
        int ans = 0;
        while(X < Y)
        {
            ans++;
            if(Y % 2 == 1)
                Y++;
            else
                Y = Y/2;
        }
        return ans + X - Y;
    }
};

