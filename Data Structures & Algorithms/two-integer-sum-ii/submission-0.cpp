class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v(2);
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j]==target)
                {
                    v[0]=i+1;
                    v[1]=j+1;
                    return v;
                }
            }

        }
        return v;
    }
};
