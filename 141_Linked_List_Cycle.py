from typing import Optional

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

def hasCycle(head: Optional[ListNode]) -> bool:
    visited = []
    while(head!=None):
        if(visited.count(head.next)==0):
            visited.append(head.next)
            head = head.next
        else:
            return True
    return False

