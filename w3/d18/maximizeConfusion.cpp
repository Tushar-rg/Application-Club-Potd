class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int maxConsecutive=0;
        int maxCount=0;
        int left = 0;
        int counts[26] = {0}; 
        for (int right = 0; right <answerKey.length(); right++) {
            counts[answerKey[right]-'A']++;
            maxCount = max(maxCount, counts[answerKey[right] - 'A']);
            while (right-left+1-maxCount > k) {
                counts[answerKey[left]-'A']--;
                left++;
            }
            maxConsecutive = max(maxConsecutive, right-left+1);
        }
        return maxConsecutive;
    }
};