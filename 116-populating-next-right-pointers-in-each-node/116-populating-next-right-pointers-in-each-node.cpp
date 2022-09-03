/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
      queue<pair<Node*,int>>q;
        root->next=NULL;
       if(root->left) q.push({root->left,0});
        if(root->right)q.push({root->right,0});
        while(!q.empty())
        {
           Node* cur= q.front().first; 
            int lvl=q.front().second;
            while(q.front().second==lvl)
            {
                Node *temp=q.front().first;
                q.pop(); 
                if(temp->left)q.push({temp->left,lvl+1});
                if(temp->right)q.push({temp->right,lvl+1});
                if(q.front().second==lvl)
                {temp->next=q.front().first;}
                else{temp->next=NULL;}
                
            }
            
        }
        return root;
    }
};

T.C. : O(N)
S.C. : O(N)
    
Recursive:

class Solution {
public:
    Node* connect(Node* root) {
     
      if(!root) return root;
        if(root->left)
        {
            root->left->next=root->right;
        }
        if(root->right&&root->next)  root->right->next=root->next->left;
        connect(root->left);
        connect(root->right);
        
        return root;
    }
};

T.C. : O(N)
S.C. : O(N) (recursion)
    
    
Iterative:


class Solution {
public:
    Node* connect(Node* root) {
    Node*  prev=root;Node* cur;
      while(prev)
      { cur=prev;
          while(cur&&cur->left)
          {
              cur->left->next=cur->right;
               if(cur->next) cur->right->next=cur->next->left;
                cur=cur->next;
          }
            prev=prev->left;
      }
     
        return root;
    }
};


T.C. : O(N)
S.C. : O(1) 
