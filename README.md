# Week_3-link-list-queue
Basic functionalilty:

Push - Allows the user to create a dynamically sized stack via pushing nodes onto the end of the queue.
Pop - Allows users to pop the head node; returns the nodes value.
~~ 
as a side note to pop I was having issues with the new head's node->next pointing to a random spot in memory
after the head was popped off. My solution to this problem was iterating from the tail of the list since these nodes can only look forward.
I feel like this is a bit much and could become a large time waste. Is there a better way to go about this without having a node->previous that points backwards.
~~
Peek - prints the current head and tail of the queue.
print list- iterates through the entire queue, and prints the value stored in each node.




