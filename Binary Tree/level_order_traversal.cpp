  void levelOrder(Node * root) {
            queue<Node*> q;
            Node *temp =root;
            
            while(temp!=NULL)
            {
                cout << temp->data << " ";
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                    
                temp=q.front();
                q.pop();
            }

    }
