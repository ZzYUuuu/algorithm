void quicksort(int l, int r, vector<int>& nums){
        if(l>=r)return;// 左边不能大于等于右边
        swap(nums[l],nums[rand()%(r-l+1)+l]);
        int t = nums[l];
        int i = l;
        int j = r;
        while(i < j){
            while( i < j && nums[j] >= t){
                j--;
            }
            while(i < j &&nums[i] <= t){
                i++;
            }
            if(i<j)swap(nums[i],nums[j]);
        }
        swap(nums[l],nums[i]);
        quicksort(l,i-1,nums);
        quicksort(i+1,r,nums);
    }
