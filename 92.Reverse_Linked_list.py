from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)

        leftprev, curr = dummy, head
        for i in range(left -1):
            leftprev, curr = curr, curr.next

        # reverse the list from here until right - left + 1
        prev = None
        for i in range(right-left+1):
            tmpNext = curr.next
            curr.next = prev
            prev, curr = curr, tmpNext

        leftprev.next.next = curr
        leftprev.next = prev
        return dummy.next

head = [1,2,3,4,5] 
left = 2 
right = 4

a = Solution()
a.reverseBetween(head, left, right)


