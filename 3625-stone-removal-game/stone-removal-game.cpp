class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10, count = 0;
        while(n >= remove) {
            n = n - remove;
            remove--;
            count++;
        }
        return count % 2 == 1;
    }
};