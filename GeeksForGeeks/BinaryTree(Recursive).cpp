// Binary Tree and its traversals(Using Recursion)

#include <iostream>
using namespace std;


class node{
    public:
	    int data;
	    node* left;
	    node* right;
	    
	    node(int d){
	        data = d;
	        left = NULL;
	        right = NULL;
	    }
	};
	
node* buildTree(){
    int d;
    cin >> d;
    if(d == -1){
        return NULL;
    }
    
    node* root = new node(d);
    root -> left = buildTree();
    root -> right = buildTree();
    return root;
}

void preorder(node* root){
    
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(node* root){
    
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void postorder(node* root){
    if(root == NULL){
        return;
    }
    
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

int height(node* root){
    if(root == NULL){
        return 0;
    }
    return max(height(root -> left), height(root -> right)) + 1;
}
	
void printKthLevel(node*root, int k){
 
 if(!root){
     return;
 }   
 
 if(k == 1){
     cout << root -> data << " ";
     return;
 }
 
 printKthLevel(root -> left, k - 1);
 printKthLevel(root -> right, k - 1);
 return;
}

void printAllLevels(node* root){
    int h = height(root);
    
    for(int i = 1; i <= h; i++){
        printKthLevel(root, i);
        cout << '\n';
    }
}

int main() {
	
	node* root = buildTree();
	 printAllLevels(root);
	
	
	
	return 0;
}