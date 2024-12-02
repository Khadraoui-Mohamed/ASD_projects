void sort(struct Node* head) {



 if (head == NULL || head->next == NULL) {

 return;
 }
 struct Node *sorted = NULL;
 struct Node *current = head;
 while (current != NULL) {
 struct Node* nextNode = current->next;
 if (sorted == NULL || sorted->data >= current->data) {
 current->next = sorted;
 sorted = current;
 } else {
 struct Node* temp = sorted;
 while (temp->next != NULL && temp->next->data < current->data) {
 temp = temp->next;
 }
 current->next = temp->next;
 temp->next = current;
 }
 current = nextNode;
}
 head = sorted;
