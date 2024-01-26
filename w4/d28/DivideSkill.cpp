class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n = skill.size(), chem = skill[0] + skill[n-1];
        long sum = 0;
        for(int i=0;i<n;i++)
            cout<<skill[i]<<" ";
        for(int i=0;i<n/2;i++){
            if(skill[i]+skill[n-i-1]!=chem) return -1;
            else sum = sum+skill[i]*skill[n-i-1];
        }
        cout<<sum;
        return sum;
    }
};