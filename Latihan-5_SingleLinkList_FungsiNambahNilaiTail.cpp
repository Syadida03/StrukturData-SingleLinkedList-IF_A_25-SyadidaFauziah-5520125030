#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

Node *head = NULL;

void traverse();
void inputData();
void tambahDataTail();

int main() {
    inputData();      
    cout << endl;
    tambahDataTail(); 
    
    cout << "\nData setelah penambahan di akhir:" << endl;
    traverse();      

    cin.ignore();
    return 0;
}

void inputData() {
    Node *tail = NULL;
    int n, nilai;
    cout << "Masukkan jumlah data awal: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "Masukkan data ke " << i << ": ";
        cin >> nilai;
        Node *nodeBaru = new Node;
        nodeBaru->data = nilai;
        nodeBaru->next = NULL;
        nodeBaru->prev = NULL; // Inisialisasi prev
        
        if(head == NULL) {
            head = nodeBaru;
            tail = nodeBaru;
        } else {
            tail->next = nodeBaru;
            nodeBaru->prev = tail; // Sambungkan prev ke node sebelumnya
            tail = nodeBaru;
        }
    }
}

void tambahDataTail() {
    int nilai;
    cout << "Masukkan data yang ditambahkan di akhir: ";
    cin >> nilai;
    Node *nodeBaru = new Node;
    nodeBaru->data = nilai;
    nodeBaru->next = NULL;
    
    if (head == NULL) {
        head = nodeBaru;
    } else {
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
       temp->next = nodeBaru;
       nodeBaru->prev = temp; // Sambungkan prev ke temp (node terakhir lama)
    }
}

void traverse() {
    Node *temp = head; 
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" <<endl;
}
