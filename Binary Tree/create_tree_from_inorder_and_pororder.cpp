class Solution {
public:
    //                                                ************ EXPLANATION  ***********: 
    // 1. HOW DO WE USE PREORDER ARRAY?
    // Preorder (algo) array specialty is it's always Process root node first... So, Preorder will help us to find 
    // root of the tree which we're gonna construct and for this purpose, here we maintaining preOrder_idx variable..
    // And obviously starting root node of the tree is always present at index 0 (Zero) in preorder array..[That's the only use of Preorder array]
    
    // 2. USE OF INORDER ARRAY?
    // Inorder (algo) array specialty is it's always Process left sub tree nodes first, then root & then right sub-tree.
    // So, inorder array we simply find root node (cuz we already found root node with help of preorder array)....
	// After getting root node in inorder array, All elements on the left side of the root node is the part of left sub-tree & on the right side of the root node
	// is the part of right sub-tree.. Then Simply recurr for both sides.. 
	
    int preOrder_idx = 0;
    TreeNode* TreeBuilding(vector<int>& preorder, vector<int>& inorder, int start_in, int end_in) {
        
        if(start_in > end_in)
            return NULL;
        
        // STEP 1:  Setting up root node found on first index of preorder array
        TreeNode* root = new TreeNode(preorder[preOrder_idx++]);
        
        // STEP 2: searching for root node in inorder array and store that index in a variable inOrder_idx
        int inOrder_idx;
        for(int i = start_in; i <= end_in; ++i){                      // T.C. : O(N) 
            if(inorder[i] == root->val){
                inOrder_idx = i;
                break;
            }
        }
        
        // STEP 3: Simply recurr for left side of root node in inorder array (from start_index to root index - 1)
        root->left = TreeBuilding(preorder, inorder, start_in, inOrder_idx - 1);      // T.C. : O(N / 2)
        
        // STEP 4: Simply recurr for right side of root node in inorder array (from root index + 1 to end_index of inorder array)
        root->right = TreeBuilding(preorder, inorder, inOrder_idx + 1, end_in);       // T.C. : O(N / 2)
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int start_in = 0;
        int end_in = inorder.size() - 1;
        return TreeBuilding(preorder, inorder, start_in, end_in);  // Overall Time complexity : O(N^2) , Where N, total no of nodes in the tree 
		// HOWEVER, WE CAN IMPROVE THIS COMPLEXITY FROM O(N^2) TO O(N). BY USING HASH SET(UNORDERED MAP) FOR SEARCHING ROOT NODE IN INORDER ARRAY IN O(1)
    }
};
//TIME COMPLEXITY : O(N^2), Where N, total nuber of nodes in the tree
//SPACE COMPLEXITY: O(N) // for recursion stack

//EFFICIENT SOLUTION USING HASHING
class Solution {
public: 
    unordered_map<int, int> m;  // unordered_map to store inorder elements (to find root in O(1))
    int preOrder_idx = 0;
    TreeNode* TreeBuilding(vector<int>& preorder, vector<int>& inorder, int start_in, int end_in) {
        
        if(start_in > end_in)
            return NULL;
        
        // STEP 1:  Setting up root node found on first index of preorder array
        TreeNode* root = new TreeNode(preorder[preOrder_idx++]);
        
        // STEP 2: searching for root node in inorder array and store that index in a variable inOrder_idx 
        int inOrder_idx = m[root->val]; // ONLY CHANGE FROM PREVIOUS SOLUTION  & T.C. : O(1)
        
        // STEP 3: Simply recurr for left side of root node in inorder array (from start_index to root index - 1)
        root->left = TreeBuilding(preorder, inorder, start_in, inOrder_idx - 1);      // T.C. : O(N / 2)
        
        // STEP 4: Simply recurr for right side of root node in inorder array (from root index + 1 to end_index of inorder array)
        root->right = TreeBuilding(preorder, inorder, inOrder_idx + 1, end_in);       // T.C. : O(N / 2)
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int start_in = 0;
        int end_in = inorder.size() - 1;
        
        for(int i = 0; i < inorder.size(); ++i){  // inserting inorder array values
            m[inorder[i]] = i;
        }
        return TreeBuilding(preorder, inorder, start_in, end_in);  // Overall Time complexity : O(N) , Where N, total no of nodes in the tree 
    }
};
//TIME COMPLEXITY : O(N), Where N, total nuber of nodes in the tree
//SPACE COMPLEXITY: O(N) // for recursion stack
