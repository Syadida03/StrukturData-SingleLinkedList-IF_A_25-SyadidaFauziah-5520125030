//Linear double linked list
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

int main() {
    Node *node1 = new Node;
    Node *node2 = new Node;
    Node *node3 = new Node;
    
    node1->data = 10;
    node1->next = node2;
    node1->prev = NULL; 
    
    node2->data = 20;
    node2->next = node3;
    node2->prev = node1; 
    
    node3->data = 30;
    node3->next = NULL;
    node3->prev = node2;
    
    int i = 1;
    int nilaiTerbesar = 0;
    Node *temp = node1;
    
    cout << "--- Traversal Maju ---" << endl;
    while (temp != NULL) {
        cout << "Data ke " << i << ": " << temp->data << endl;
        
        if(temp->data > nilaiTerbesar) {
            nilaiTerbesar = temp->data;
        }
        if (temp->next == NULL) break; 
        temp = temp->next;
        i++;
    }
    
    cout << "Nilai Terbesar: " << nilaiTerbesar << endl << endl;

    cout << "--- Traversal Mundur ---" << endl;
    while (temp != NULL) {
        cout << "Data: " << temp->data << endl;
        temp = temp->prev; 
    }

    return 0;
}


//SINGLE LINKED LIST
//#include<iostream>
//using namespace std;
//
//struct Node{
//	int data;
//	struct Node *next;
//};
//
//int main(){
//	Node *node1 = NULL;
//	Node *node2 = NULL;
//	Node *node3 = NULL;
//	
//	node1 = new Node;
//	node2 = new Node;
//	node3 = new Node;
//	
//	node1->data = 10;
//	node1->next = node2;
//	
//	node2->data = 20;
//	node2->next = node3;
//	
//	node3->data = 30;
//	node3->next = NULL;
//	
//	int i = 1;
//	int nilaiTerbesar = 0;
//	Node *temp = node1;
//	while (temp != NULL){
//		cout << "Data ke " << i << ": " << temp->data;	
//		cout << endl;
//		if(temp->data > nilaiTerbesar){
//			nilaiTerbesar = temp->data;
//		}
//		temp = temp->next;
//	}
//	cout << "Nilai Terbesar: " << nilaiTerbesar <<endl;
//	
//}
