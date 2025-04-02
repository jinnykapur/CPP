#include <iostream>
using namespace std;

// Defining the NODE structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// function that will return new node
Node* newNode(int data){
    Node* node=new Node();
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

Node* insert(Node* root, int data){
    //node inserted is root node (empty)
    if(root==NULL){
        root=newNode(data);
    }
    else if(data < root->data){
        root->left=insert(root->left,data);
    }
    else root->right=insert(root->right,data);

    return root;
}

Node* minValNode(Node* node){
    Node* current= node;
    while(current->left!=NULL){
        current=current->left;
    }
    return current;



}

Node* deleteNode(Node* root, int data){
    //No nodes to delete..
    if(root==NULL){
        cout<<"No node available to delete. Insert the node."<<endl;
        return root;
    }
    //when there's only one node to delete from left 
    //exit condition of delete function
    if(data<root->data){
        root->left=deleteNode(root->left,data);
    }
    else if(data>root->data){
        root->right=deleteNode(root->right,data);
    }

    else{
        //case: 1 (No children of node)
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        
        //case: 2 i. (1 child node: right node)
        else if(root->left==NULL){
            Node* temp=root;
            root=root->right;
            delete temp;
        }
        //case: 2 ii. (1 child node: left node)
        else if(root->right==NULL){
            Node* temp=root;
            root=root->left;
            delete temp;
        }

        //case: 3 (when both children are available)
        else{
            Node* temp=minValNode(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }

        return root;


    }

}
bool binarySearch(Node* root, int data){
    //empty tree
    if(root==NULL){
        
        return false;
    }
    //root node is the node we are searching
    if(data==root->data){
        return true;
    }
    //if data searched is smaller than root->data
    else if(data<root->data){
        binarySearch(root->left, data);
    }
    //if data searched is greater than root->data
    else if(data>root->data){
        binarySearch(root->right, data);
    }
    else return false;
}
int MaxDepth(Node* root){
    if(root==NULL){
        return -1;
    }
    else{
        int leftHeight=MaxDepth(root->left);
        int rightHeight=MaxDepth(root->right);
        return max(leftHeight,rightHeight)+1;
    }
}
void inorderDisplay(struct Node* root) {
    if (root == NULL) return; // Base case

    inorderDisplay(root->left);   // Visit left subtree
    cout << root->data << " ";    // Visit root node
    inorderDisplay(root->right);  // Visit right subtree
    
}

int main(){
    Node* root=NULL;
    root=insert(root,7);
    root=insert(root,6);
    // root=insert(root,10);
    // root=insert(root,4);
    // root=insert(root,5);
    // root=insert(root,8);
    
    // root=insert(root,11);

    inorderDisplay(root);
    cout<<endl;
    // deleteNode(root,5);
    // inorderDisplay(root);
    // cout<<endl;
    // deleteNode(root,4);
    // inorderDisplay(root);
    // cout<<endl;
    // deleteNode(root,7);
    // inorderDisplay(root);
    // cout<<endl;
    cout<<binarySearch(root,9)<<endl;
    cout<<MaxDepth(root)<<endl;
}
