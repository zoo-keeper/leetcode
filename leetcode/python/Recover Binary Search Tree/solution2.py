# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return a tree node
    def recoverTree(self, root):
        self.prev = None
        self.first = None
        self.second = None
        self.traverse(root)
        self.first.val,self.second.val = self.second.val,self.first.val
        return root
        
    def traverse(self,root):
        if root is not None:
            self.traverse(root.left)
            if self.prev is not None:
                if self.first is None and root.val < self.prev.val:
                    first = self.prev
                    second = root
                elif self.first is not None and root.val < self.prev.val:
                    second = root
            self.prev = root
            self.traverse(root.right)
    