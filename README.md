Initialize Linked List

Create a linked_list class with a constructor that initializes the head pointer to nullptr.
Add a Node at the Beginning (add_start function)

Create a new node with the given data.
Set the new node's next pointer to the current head.
Update the head pointer to the new node.
Delete a Node from the Beginning (del_start function)

Check if the list is empty (head is nullptr).
If not empty, create a temporary pointer to the current head.
Update the head to point to the next node.
Free the memory occupied by the temporary pointer.
Add a Node at the End (add_end function)

If the list is empty, call add_start to add the node at the beginning.
Otherwise, create a new node with the given data.
Traverse the list to find the last node.
Update the next pointer of the last node to point to the new node.
Delete a Node from the End (del_end function)

[Your implementation of deleting a node from the end would go here]
Display the Linked List (disp_ll function)

Initialize a temporary pointer to the head of the list.
Traverse the list and print each node's data.
Continue until the end of the list is reached.
Main Program

Create an instance of the linked_list class.
Run a loop to display a menu of options to the user.
Based on the user's choice, call the corresponding functions to perform linked list operations.
Exit the program when the user selects the "Exit" option
