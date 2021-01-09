
//postorder traversal

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> preorder;
        
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp = s.top();
            s.pop();
            if(temp!=NULL){
            preorder.push_back(temp->val);
            s.push(temp->right);
            s.push(temp->left);
            }
        }
        return preorder;
    }
};

//inorder traversal

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        stack<TreeNode*> s;
        
        TreeNode* curr = root;
        
        while(curr!=NULL || !s.empty())
        {
            while(curr!=NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            curr= s.top();
            inorder.push_back(curr->val);
            s.pop();
            curr=curr->right;
        }
        return inorder;
        
    }
};

//preorder traversal

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<pair<TreeNode*, int>> s;
        s.push({root,0});
        while(!s.empty())
        {
            TreeNode* cur=s.top().first;   
            int state=s.top().second;
            s.pop();
            if(state==3 || cur==NULL)
                continue;
            s.push({cur,state+1});
            if(state==0)
                res.push_back(cur->val);
            else if(state==1)
                s.push({cur->left,0});
            else 
                s.push({cur->right,0});
            
        }
        return res;
        
    }
};
