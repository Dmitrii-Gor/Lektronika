/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *head; // голова результирующего списка
    struct ListNode *tail; // позазывает последний элемент резульитрующего списка

    if(list1 == NULL || list2 == NULL)
    {
        return (list1) ? list1 : list2; // ¬ернуть list1 если не NULL иначе вернуть list2
    }
    if(list1->val <= list2->val)
    {
       head = tail = list1;
       list1 = list1->next; //ѕродвигают указатель list1 на один узел вперед, указыва€ на следующий узел в списке.
    }
    else
    {
        head = tail = list2;
        list2 = list2->next;
    }

    while(list1 && list2)
    {
        if(list1->val <= list2->val) // сравниваем второй узел одного из списков с первым узлом другого.
        {
            tail->next = list1; // добавл€ем в результирующий список узел лист1
            list1 = list1 -> next; // переключаем лист1 на следующий узел
        }
        else
        {
            tail->next = list2;
            list2 = list2 -> next;
        }
        tail = tail ->next; // переключаем хвост на следующий узел
    }

    tail->next = (list1 == NULL) ? list2 : list1; // добавл€ем оставшиес€ элементы в конец списка
    return head;
}
