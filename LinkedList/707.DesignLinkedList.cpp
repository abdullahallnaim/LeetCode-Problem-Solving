class MyLinkedList
{
public:
    int data;
    MyLinkedList *next;
    MyLinkedList *head;
    MyLinkedList()
    {
        head = NULL;
    }
    MyLinkedList(int val)
    {
        data = val;
        next = NULL;
    }

    int get(int index)
    {
        MyLinkedList *tmp = head;
        for (int i = 1; i <= index; i++)
        {
            tmp = tmp->next;
            if (tmp == NULL)
                break;
        }
        if (tmp == NULL)
        {
            return -1;
        }

        return tmp->data;
    }

    void addAtHead(int val)
    {
        MyLinkedList *newNode = new MyLinkedList(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val)
    {
        MyLinkedList *newNode = new MyLinkedList(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        MyLinkedList *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }

    void addAtIndex(int index, int val)
    {
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        MyLinkedList *tmp = head;
        for (int i = 1; i <= index - 1; i++)
        {
            tmp = tmp->next;
            if (tmp == NULL)
            {
                break;
            }
        }
        if (tmp == NULL)
            return;
        MyLinkedList *newNode = new MyLinkedList(val);
        newNode->next = tmp->next;
        tmp->next = newNode;
    }

    void deleteAtIndex(int index)
    {
        MyLinkedList *tmp = head;
        if (index == 0)
        {
            MyLinkedList *del = head;
            head = head->next;
            delete del;
            return;
        }
        for (int i = 1; i < index; i++)
        {
            tmp = tmp->next;
            if (tmp == NULL)
            {
                break;
            }
        }
        if (tmp == NULL)
            return;
        MyLinkedList *delNode = tmp->next;
        if (delNode == NULL)
            return;
        tmp->next = tmp->next->next;
        delete delNode;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */