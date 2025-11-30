// #include<iostream>
// #include<queue>
// #include<climits>
// #include<unordered_map>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// Node* construct(int arr[],int n){
//     queue<Node*> q;
//     Node* root=new Node(arr[0]);
//     q.push(root);
//     int i=1;
//     int j=2;
//     while(q.size()>0 && i<n){
//         Node* temp=q.front();
//         q.pop();
//         Node* l;
//         Node* r;
//         if(arr[i]!=INT_MIN) l=new Node(arr[i]);
//         else l=NULL;
//         if(j!=n &&arr[j]!=INT_MIN) r=new Node(arr[j]);
//         else r=NULL;
//         temp->left=l;
//         temp->right=r;

//         if(l!=NULL) q.push(l);
//         if(r!=NULL) q.push(r);
//         i += 2;
//         j += 2;

//     }
//     return root;
// }
// void topview(Node* root){
//     unordered_map<int,int> m;
//     queue< pair<Node* ,int> > q;
//     pair<Node* ,int> r;
//     r.first=root;
//     r.second=0;
//     q.push(r);
//     m[0]=root->val;
//     while(q.size()>0){
//         Node* temp=(q.front()).first;
//         int level=(q.front()).second;
//         q.pop();
//         if(m.find(level)==m.end()){
//             m[level]=temp->val;
//         }
//         if(temp->left!=NULL){
//             pair<Node* ,int> p;
//             p.first=temp->left;
//             p.second=level-1;
//             q.push(p);
//         }
//         if(temp->right!=NULL){
//             pair<Node* ,int> p;
//             p.first=temp->right;
//             p.second=level+1;
//             q.push(p);
//         }
//     }
//     int minlevel=INT_MAX;
//     int maxlevel=INT_MIN;
//     for(auto x : m){
//         int level=x.first;
//         minlevel=min(minlevel,level);
//         maxlevel=max(maxlevel,level);
//     }
//     for(int i=minlevel;i<=maxlevel;i++){
//         cout<<m[i]<<" ";
//     }
//     cout<<endl;
// }
// int main() {
//     int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     Node* root=construct(arr,n);
//     topview(root);
//     return 0;
// }

#include<iostream>
#include<queue>
#include<climits>
#include<unordered_map>
using namespace std;

// Node class for binary tree
class Node{
public:
    int val;       // value stored in the node
    Node* left;    // pointer to left child
    Node* right;   // pointer to right child

    // constructor to create a node with given value
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to construct a binary tree from array (level order representation)
Node* construct(int arr[], int n){
    queue<Node*> q;                // queue to store nodes for BFS construction
    Node* root = new Node(arr[0]); // first element becomes root
    q.push(root);                  // push root in queue

    int i = 1;                     // index for left child
    int j = 2;                     // index for right child

    // Build tree until all array elements are processed
    while(q.size() > 0 && i < n){
        Node* temp = q.front();    // take the front node from queue
        q.pop();

        Node* l; // left child
        Node* r; // right child

        // if element is not INT_MIN, create node, else keep NULL
        if(arr[i] != INT_MIN) l = new Node(arr[i]);
        else l = NULL;

        // do same for right child
        if(j != n && arr[j] != INT_MIN) r = new Node(arr[j]);
        else r = NULL;

        // connect children to parent
        temp->left = l;
        temp->right = r;

        // push valid children into queue for further expansion
        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        // move indices to next pair of children
        i += 2;
        j += 2;
    }
    return root; // return the root node of constructed tree
}

// Function to print top view of binary tree
void topview(Node* root){
    unordered_map<int,int> m;           // stores {horizontal_distance : node_value}
    queue<pair<Node*,int>> q;           // BFS queue storing {node, horizontal_distance}

    q.push({root, 0});                  // root has horizontal distance = 0
    m[0] = root->val;                   // store root in map

    // BFS traversal
    while(!q.empty()){
        Node* temp = q.front().first;   // current node
        int level = q.front().second;   // its horizontal distance
        q.pop();

        // if this horizontal distance not seen before, store this node
        if(m.find(level) == m.end()){
            m[level] = temp->val;
        }

        // if left child exists → push with horizontal distance -1
        if(temp->left){
            q.push({temp->left, level-1});
        }

        // if right child exists → push with horizontal distance +1
        if(temp->right){
            q.push({temp->right, level+1});
        }
    }

    // find min and max horizontal distances
    int minlevel = INT_MAX, maxlevel = INT_MIN;
    for(auto &x : m){
        minlevel = min(minlevel, x.first);
        maxlevel = max(maxlevel, x.first);
    }

    // print values from leftmost to rightmost
    for(int i = minlevel; i <= maxlevel; i++){
        cout << m[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    // Input tree in array form (INT_MIN = NULL)
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Construct tree
    Node* root = construct(arr, n);

    // Print top view of tree
    topview(root);

    return 0;
}
