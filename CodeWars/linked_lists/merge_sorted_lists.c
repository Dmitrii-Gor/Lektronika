/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *head; // ������ ��������������� ������
    struct ListNode *tail; // ���������� ��������� ������� ��������������� ������

    if(list1 == NULL || list2 == NULL)
    {
        return (list1) ? list1 : list2; // ������� list1 ���� �� NULL ����� ������� list2
    }
    if(list1->val <= list2->val)
    {
       head = tail = list1;
       list1 = list1->next; //���������� ��������� list1 �� ���� ���� ������, �������� �� ��������� ���� � ������.
    }
    else
    {
        head = tail = list2;
        list2 = list2->next;
    }

    while(list1 && list2)
    {
        if(list1->val <= list2->val) // ���������� ������ ���� ������ �� ������� � ������ ����� �������.
        {
            tail->next = list1; // ��������� � �������������� ������ ���� ����1
            list1 = list1 -> next; // ����������� ����1 �� ��������� ����
        }
        else
        {
            tail->next = list2;
            list2 = list2 -> next;
        }
        tail = tail ->next; // ����������� ����� �� ��������� ����
    }

    tail->next = (list1 == NULL) ? list2 : list1; // ��������� ���������� �������� � ����� ������
    return head;
}
