/* Prn : 22070123147 /*

#include <iostream>
#include <cstdlib> // Include this header for using exit()

using namespace std;

struct node {
    int data;
    struct node* next;
};

class linked_list {
public:
    linked_list() {
        head = nullptr;
    }
    struct node* head;

    void add_start() {
        struct node* newnode;
        int x;
        newnode = (struct node*)malloc(sizeof(struct node));
        cout << "Enter data for new node: ";
        cin >> x;
        newnode->data = x;
        newnode->next = head;
        head = newnode;
    }

    void del_start() {
        struct node* temp = head;
        if (head == nullptr)
            return;
        head = head->next;
        free(temp);
    }

    void add_end() {
        struct node* newnode;
        struct node* temp;
        int x;
        if (head == nullptr) {
            add_start();
            return;
        }
        newnode = (struct node*)malloc(sizeof(struct node));
        cout << "Enter data for new node at end: ";
        cin >> x;
        newnode->data = x;
        newnode->next = nullptr;
        temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    // You need to implement del_end() function

    void disp_ll() {
        struct node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};

int main() {
    linked_list myList;
    while (true) {
        char choice;
        cout << "\nAdd node at the beginning: 1" << endl;
        cout << "Delete node from the beginning: 2" << endl;
        cout << "Add node at the end: 3" << endl;
        cout << "Delete node from the end: 4" << endl;
        cout << "Display nodes: 5" << endl;
        cout << "Exit: 6" << endl;
        cin >> choice;
        switch (choice) {
        case '1':
            myList.add_start();
            break;

        case '2':
            myList.del_start();
            break;

        case '3':
            myList.add_end();
            break;

        case '4':
            // Implement the logic for deleting a node from the end
            break;

        case '5':
            myList.disp_ll();
            break;

        case '6':
            exit(0); // Use exit(0) to exit the program

        default:
            exit(0);
            break;
        }
    }
    return 0;
}




/* output :
Add node at the beginning: 1
Delete node from the beginning: 2
Add node at the end: 3
Delete node from the end: 4
Display nodes: 5
Exit: 6 /*
