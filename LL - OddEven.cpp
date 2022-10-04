#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL && tail == NULL)
    {
        head = temp;
        tail = temp;
    }
    tail->next = temp;
    tail = tail->next;
}

void printll(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void oe(Node *&head)
{
    vector<int> o;
    vector<int> e;
    Node *temp = head;
    while (temp != NULL)
    {
        if ((temp->data) % 2 == 0)
        {
            e.push_back(temp->data);
        }
        else
        {
            o.push_back(temp->data);
        }
        temp = temp->next;
    }
    temp = head;
    for (int i = 0; i < o.size(); i++)
    {
        temp->data = o[i];
        temp = temp->next;
    }
    for (int i = 0; i < e.size(); i++)
    {
        temp->data = e[i];
        temp = temp->next;
    }
}

int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertAtTail(head, tail, x);
    }

    oe(head);
    printll(head);

    return 0;
}