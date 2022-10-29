//Name: Zahid Khan
//Language: C++

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size() < 2){
            return nums.size();
        }

        int k;
        vector<int>::iterator it1,it2;
        it1 = nums.begin();
        it2 = it1++;
        while(it1 != nums.end())
        {
            if(*it1 == *it2)
            {
                nums.erase(it2);
            }
            else
            {
                it1++;
                it2++;
            }
        }   
        k = nums.size();
        return k;

    }
};
