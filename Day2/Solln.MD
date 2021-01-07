Question: Write a function that reverses a string. The input string is given as an array of characters char[].
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Here is my solution:
``` class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end = s.size() - 1;
        while(start < end){
            //swap
            char temp;
            temp = s[start];
            s[start] = s[end];
            s[end] = char(temp);
            start++;
            end--;
        }
    }
};
```
