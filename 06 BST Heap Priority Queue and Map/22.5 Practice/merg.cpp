class Solution {
public:
    void merge(int low, int mid, int high, vector<int> &nums) {
        if (low >= high) return;
        int l = low, r = mid + 1, k = 0, size = high - low + 1;
        vector<int> sorted(size, 0);
        while (l <= mid and r <= high)
            sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
        while (l <= mid) 
            sorted[k++] = nums[l++];
        while (r <= high) 
            sorted[k++] = nums[r++];
        for (k = 0; k < size; k++)
            nums[k + low] = sorted[k];
    }

    void mergeSort(vector<int>& nums, int start, int end){
        if(start < end){
            int mid = start + (end - start) / 2;
            mergeSort(nums, start, mid);
            mergeSort(nums, mid + 1, end);
            merge(start, mid, end, nums);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};


----------------------------------------------
class Solution {
public:
    TreeNode* tree = new TreeNode(0); // make new node and initialize with 0 value
    TreeNode *h = tree; // another node pointing to the head of new node
    
    void inorder(TreeNode* root){
         if(root==NULL){
            return;
        }
        
        inorder(root->left);
        tree->right= new TreeNode(root->val);  // make new node with root value 
        tree->left=NULL;  
        tree=tree->right;  // move ahead in right direction
        
       inorder(root->right);
       
    }
    
    TreeNode* increasingBST(TreeNode* root) {       
        
        inorder(root);
        return h->right; // move in right to skip the initial 0 value
    }
};