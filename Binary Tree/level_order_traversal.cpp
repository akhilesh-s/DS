 void levelOrder(Node * root) {
            queue<Node*> q;
            Node *temp =root;
            
            if (root!=NULL)
                q.push(root);
            while(!q.empty())
            {
                cout << temp->data << " ";
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                
                 q.pop();
                temp=q.front();
               
            }

    }
