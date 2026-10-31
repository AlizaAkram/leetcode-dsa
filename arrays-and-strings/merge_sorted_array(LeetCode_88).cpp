class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> result(m);

        for(int index=0;index <m; index++)
        {
            result[index]=nums1[index];
        }

        int i=0,j=0,k=0;

        while(i<m && j<n)
        {
            if(result[i]<= nums2[j])
            {
                nums1[k]=result[i];
                i++;
            }
            else
            {
                nums1[k]=nums2[j];
                j++;
            }
            k++;
        }

        while(i<m)
        {
            nums1[k]=result[i];
            i++;
            k++;
        }

        while(j<n)
        {
            nums1[k]=nums2[j];
            j++;
            k++;
        }
        
    }
};