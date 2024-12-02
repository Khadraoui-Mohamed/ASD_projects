int findKthLargest(struct Node* head, int k) {

 struct Node* temp1 = head;

 struct Node* temp2;
 int count, largest;
 for (int i = 0; i < k; i++) {
 largest = INT_MIN;
 temp2 = temp1;
 while (temp2 != NULL) {
 if (temp2->data > largest) {
 largest = temp2->data;
 }
 temp2 = temp2->next;
 }
 temp2 = head;
 struct Node* prev = NULL;
 while (temp2 != NULL) {
 if (temp2->data == largest) {
 if (prev != NULL) {
 prev->next = temp2->next;
 } else {
 head = temp2->next;
 }
 free(temp2);
 break;
 }
 prev = temp2;
 temp2 = temp2->next;
 }
 }
 return largest;