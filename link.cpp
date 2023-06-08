#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Linked_list
{
public:
    Node *head;
    Linked_list()
    {
        head = NULL;
    }

    void insert_start(int data)
    {
        Node *new_node = new Node();

        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }

    void insert_last(int data)
    {
        Node *new_node = new Node();
        Node *temp = head;

        new_node->data = data;
        new_node->next = NULL;
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    int calc_size()
    {
        Node *node = new Node();
        node = head;

        int size = 0;
        while (node != NULL)
        {
            node = node->next;
            size++;
        }
        return size;
    }

    void insert_position(int n, int data)
    {
        int pos = n - 1;
        int size = calc_size();
        if (pos < 1 || size < pos)
        {
            cout << "Not a valid position to insert" << endl;
        }
        else
        {
            Node *new_node = new Node();
            Node *temp = head;
            new_node->data = data;
            new_node->next = NULL;
            while (pos--)
            {
                temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }

    void Deletion(int key)
    {
        Node *temp = head;
        Node *prev = NULL;

        if (temp != NULL && temp->data == key)
        {
            head = temp->next;
            delete temp;
            return;
        }
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;

        prev->next = temp->next;

        delete temp;
    }

    void display()
    {
        Node *node = new Node();
        node = head;
        while (node != NULL)
        {node = node->next;
            cout << node->data << " ";

        }
        cout << endl;
    }

    bool search(int key)
    {
        Node *node = new Node();
        node = head;

        while (node != NULL)
        {
            if (key == node->data)
            {
                return true;
            }
            node = node->next;
        }
        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    // Linked_list ls;
    // ls.insert_start(1);
    // ls.insert_start(2);
    // ls.insert_start(3);
    // ls.display();
    // ls.insert_last(4);
    // ls.insert_last(6);
    // ls.display();
    // ls.insert_position(3, 5);
    // ls.display();
    // ls.Deletion(2);
    // ls.display();
    // ls.search(3) ? cout<<"Found"<<endl : cout<<"Not found"<<endl;
    int choice, value;
    Linked_list ls;
    while (true)
    {
        cout << "1.insert start\n2.insert last\n3.insert position\n4.delete\n5.display\n6.search\n7.exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter element to insert: ";
            cin >> value;
            ls.insert_start(value);
            break;
        }
        case 2:
        {
            cout << "Enter element to insert: ";
            cin >> value;
            ls.insert_last(value);
            break;
        }
        case 3:
        {
            cout << "Enter element to insert: ";
            cin >> value;
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            ls.insert_position(pos, value);
            break;
        }
        case 4:
        {
            cout << "Enter element to delete: ";
            cin >> value;
            ls.Deletion(value);
            break;
        }
        case 5:
        {
            ls.display();
            break;
        }
        case 6:
        {
            cout << "Enter an element to search: ";
            cin >> value;
            ls.search(value) ? cout<<"Found"<<endl : cout<<"not found"<<endl;
            break;
        }
        case 7:
        {
            exit(1);
        }
        }
    }

    return 0;
}
