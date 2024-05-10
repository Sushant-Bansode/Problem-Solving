//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
bool isPrime(int data){
        for(int i = 2; i <= sqrt(data); i++){
            if(data%i == 0) return false;
        }
        return true;
    }
    int findNearestPrime(int data) {
        int i = 1;
        while(1){
            if(isPrime(data - i)) return data - i;
            else if(isPrime(data + i)) return data + i;
            i++;
        }
        return 0;
    }
    
public:
    Node *primeList(Node *head){
        Node * currentNode = head;
        
        while(currentNode){
            if(currentNode->val < 3) currentNode->val = 2;
            else if(!isPrime(currentNode->val)) {
                currentNode->val = findNearestPrime(currentNode->val);
            }
            currentNode = currentNode->next;
        }
        return head; 
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends