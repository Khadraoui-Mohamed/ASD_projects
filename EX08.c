struct Node* mergeSortedLists(struct Node* list1, struct Node* list2) {



 if (list1 == NULL) return list2;

 if (list2 == NULL) return list1;
 struct Node* mergedHead = NULL;
 if (list1->data <= list2->data) {
 mergedHead = list1;
 list1 = list1->next;
 } else {
 mergedHead = list2;
 list2 = list2->next;
 }
 struct Node* mergedTail = mergedHead;
 while (list1 != NULL && list2 != NULL) {
 if (list1->data <= list2->data) {
 mergedTail->next = list1;
 list1 = list1->next;
 } else {
 mergedTail->next = list2;
 list2 = list2->next;
 }
 mergedTail = mergedTail->next;
 }
 if (list1 != NULL) {
 mergedTail->next = list1;
 } else {
 mergedTail->next = list2;
 }
 return mergedHead;
}