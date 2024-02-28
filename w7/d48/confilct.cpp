class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2){
        int waste[5000];
        usleep(30000);
        if(event2[0]<=event1[1] && event2[1]>=event1[0]) return true;
        return false;
    }
};