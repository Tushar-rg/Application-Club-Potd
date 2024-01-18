class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count=0;
        string str=to_string(num);
        for(int i=0;i<str.length()-k+1;i++)
        {
            string sub=str.substr(i,k);
            int val=stoi(sub);
            if(val!=0 && num%val==0)
                count++;
        }
        return count;
    }
};