my leetcode answers.  

updating...

## LinkedList

| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|24|[Swap Nodes in Pairs]()|[C++]()|_O(n)_|_O(1)_|easy|||
|61|[Rotate List](https://leetcode.com/problems/rotate-list/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RotateList.cpp)|_O(n)_|_O(1)_|easy||先变成循环链表再断开|
|82|[Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RemoveDuplicatesfromSortedListII.cpp)|_O(n)_|_O(1)_|medium||把有重复的元素都删除|
|83|[Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/)|[C++]()|_O(n)_|_O(1)_|easy||删除重复的结点，只保留一个|



## Tree
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|307|[Range Sum Query - Mutable](https://leetcode.com/problems/range-sum-query-mutable/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RangeSumQuery.cpp)|_ctor :O(n)  ,update : O(logn) , sum : O(logn)_|_O(n)_|medium||线段树|
|24|[Longest Univalue Path](https://leetcode.com/problems/longest-univalue-path/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LongestUnivaluePath.cpp)|_O(n)_|_O(h)_|easy||dfs|
|654|[Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/MaximumBinaryTree.cpp)|_O(n)_|_O(n)_|medium|||
|652|[Find Duplicate Subtrees](https://leetcode.com/problems/find-duplicate-subtrees/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/FindDuplicateSubtrees.cpp)|_O(n)_|_O(n)_|medium|||
|684|[Redundant Connection](https://leetcode.com/problems/redundant-connection/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RedundantConnection.cpp)|_O(n)_|_O(n)_|medium|||

## Hash Table
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|1|[Two Sum](https://leetcode.com/problems/two-sum/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/TwoSum.cpp)|_O(n)_|_O(n)_|easy|||
|3|[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LongestSubstringWithoutRepeatingCharacters.cpp)|_O(n)_|_O(n)_|medium|||
|36|[Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ValidSudoku.cpp)|_O(n^2)_|_O(n)_|medium|||
|159|[Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LongestSubstringwithAtMostTwoDistinctCharacters.cpp)|_O(n)_|_O(n)_|hard|||
|202|[Happy Number](https://leetcode.com/problems/happy-number/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/HappyNumber.cpp)|_O(k)_|_O(k)_|easy|||
|323|[Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/NumberofConnectedComponentsinanUndirectedGraph.cpp)|_O(n)_|_O(n)_|medium|||
|356|[Line Reflection](https://leetcode.com/problems/line-reflection/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LineReflection.cpp)|_O(n)_|_O(n)_|medium|||
|387|[First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/FirstUniqueCharacterinaString.cpp)|_O(n)_|_O(n)_|easy|||
|737|[Sentence Similarity II](https://leetcode.com/problems/sentence-similarity-ii/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SentenceSimilarityII.cpp)|_O(n)_|_O(n)_|medium||并查集，字符串在map里的位置作为并查集的查询条件|
|734|[Sentence Similarity](https://leetcode.com/problems/sentence-similarity/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SentenceSimilarity.cpp)|_O(n)_|_O(n)_|easy|||
|721|[Accounts Merge](https://leetcode.com/problems/accounts-merge/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/AccountsMerge.cpp)|_O(n)_|_O(n)_|medium||1. 并查集 2. email-name，email-id，set[id]-emails, name-emails|
|554|[Brick Wall](https://leetcode.com/problems/brick-wall/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/BrickWall.cpp)|_O(n)_|_O(n)_|medium||记录每一行右边界出现的次数，从长度减去它就是最少要穿过的数目|
|457|[4Sum II](https://leetcode.com/problems/4sum-ii/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/4SumII.cpp)|_O(n^2)_|_O(n^2)_|medium||统计前两个数组两两元素的和并统计次数，再和后两个进行比较|
|lintcode|[Find the Weak Connected Component in the Directed Graph](http://lintcode.com/en/problem/find-the-weak-connected-component-in-the-directed-graph/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/FindTheWeakConnectedComponentInTheDirectedGraph.cpp)|_O(n^2)_|_O(n^2)_|medium||并查集|

## Queue
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|362|[Sliding Window Maximum](http://lintcode.com/en/problem/sliding-window-maximum/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SlidingWindowMaximum.cpp)|_O(n)_|_O(n)_|medium|lintcode|deque|
|122|[Largest Rectangle in Histogram](http://lintcode.com/en/problem/largest-rectangle-in-histogram/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LargestRectangleinHistogram.cpp)|_O(n)_|_O(n)_|medium|lintcode||
|126|[Max Tree](http://lintcode.com/en/problem/max-tree/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/MaxTree.cpp)|_O(n)_|_O(n)_|hard|lintcode|decending stack|
|367|[Expression Tree Build](http://lintcode.com/en/problem/expression-tree-build/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ExpressionTreeBuild.cpp)|_O(n)_|_O(n)_|medium|lintcode||


|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium|lintcode||



## Heap
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|130|[Heapify](http://lintcode.com/en/problem/heapify/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/Heapify.cpp)|_O(n)_|_O(n)_|medium|lintcode|Heap|
|364|[Trapping Rain Water II](http://lintcode.com/en/problem/trapping-rain-water-ii/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/TrappingRainWaterII.cpp)|_O(m*n*(logm+logn)_|_O(m*n)_|hard|lintcode||
|81|[Data Stream Median](http://lintcode.com/en/problem/data-stream-median/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/DataStreamMedian.cpp)|_O(nlogn)_|_O(n)_|hard|lintcode|two heap|


|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium|lintcode||

## Data Structure
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|134|[LRU Cache](http://lintcode.com/en/problem/lru-cache/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LRUCache.cpp)|_O(1)_|_O(k)_|hard|lintcode||

|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium|lintcode||



## Math
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|13|[Roman to Integer](https://leetcode.com/problems/roman-to-integer/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RomantoInteger.cpp)|_O(n)_|_O(1)_|easy|||
|12|[Integer to Roman](https://leetcode.com/problems/integer-to-roman/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/IntegertoRoman.cpp)|_O(n)_|_O(1)_|medium|||
|400|[Nth Digit](https://leetcode.com/problems/nth-digit/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/NthDigit.cpp)|_O(lgn)_|_O(1)_|easy|||


## Sort
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|88|[Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/MergeSortedArray.cpp)|_O(n)_|_O(1)_|easy||从后向前插入|
|147|[Insertion Sort List](https://leetcode.com/problems/insertion-sort-list/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/InsertionSortList.cpp)|_O(n)_|_O(n)_|medium||找到要插入位置的节点，再插入|
|75|[Sort Colors](https://leetcode.com/problems/sort-colors/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SortColors.cpp)|_O(n)_|_O(1)_|medium||把数组分为三个部分，0 ，1，2 |
|88|[Merge Sorted Array]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/MergeSortedArray.cpp)|_O(n)_|_O(1)_|easy||从后向前遍历两个数组|
|148|[Sort List](https://leetcode.com/problems/sort-list/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SortList.cpp)|_O(nlgn)_|_O(lgn)_|medium||先把两个链表拆成两个链表，递归两个指针合并两链表|
|179|[Largest Number](https://leetcode.com/problems/largest-number/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(nlogn)_|_O(1)_|medium||通过将两个数字组合成一个字符串形式对数字按照askii进行排序，再将字符串依次组合成一个数字|
|274|[H-Index](https://leetcode.com/problems/h-index/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/HIndex.cpp)|_O(n)_|_O(n)_|medium||1、排序，找论文数大于引用数的 2、用一个数组记录引用数是0到n（大于n的记为n）之间被引用的文章有多少，再进行累加|
|347|[Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/TopKFrequentElements.cpp)|_O(nlogn)_|_O(n)_|medium||按照元素的数量分成若干个捅，从后向前从捅中取元素|
|451|[Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SortCharactersByFrequency.cpp)|_O(n)_|_O(n)_|medium||与上题类似|
|692|[Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/TopKFrequentWords.cpp)|_O(nlgn)_|_O(n)_|medium|||






## Two Pointers
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|19|[Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RemoveNthNodeFromEndofList.cpp)|_O(n)_|_O(1)_|easy||快慢指针，快指针先走n步，再同时开始走|
|86|[Partition List](https://leetcode.com/problems/partition-list/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/PartitionList.cpp)|_O(n)_|_O(1)_|medium||双指针。用两个指针分别表示比x大和小的两个链表，最后将小表的尾指向大表的头|
|141|[Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LinkedListCycle.cpp)|_O(n)_|_O(1)_|easy||快慢指针|
|142|[Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LinkedListCycleII.cpp)|_O(n)_|_O(n)_|medium||fast在相遇点再走k步到达循环链表的起点，与从头开始走k步同一个位置|
|143|[Reorder List](https://leetcode.com/problems/reorder-list/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ReorderList.cpp)|_O(n)_|_O(1)_|medium||1、快慢指针分拆链表 2、后半部分reverse 3、再合并两个链表|
|283|[Move Zeroes](https://leetcode.com/problems/move-zeroes/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/MoveZeroes.cpp)|_O(n)_|_O(1)_|easy||从前向后遍历，设置一个标记元素，如果不是零则和后面的元素交换并自增标记元素，是零则不自增，这样零的会跑到最后|
|287|[Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/FindtheDuplicateNumber.cpp)|_O(n)_|_O(n)_|medium|||
|344|[Reverse String](https://leetcode.com/problems/reverse-string/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ReverseString.cpp)|_O(n)_|_O(1)_|easy||前指针和后指针不断交换直到相遇|
|345|[Reverse Vowels of a String]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ReverseVowelsofaString.cpp)|_O(n)_|_O(1)_|easy||细节:aeiou字符串弄成const string 2、比对时都用小写 |
|349|[Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/IntersectionofTwoArrays.cpp)|_O(n + m)_|_O(n + m)_|easy||1、哈希法：将第一个数组放入set中，遍历第二个数据 2、对两个数组排序再同事比对|
|567|[Permutation in String](https://leetcode.com/problems/permutation-in-string/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/PermutationinString.cpp)|_O(n)_|_O(n)_|medium||利用哈希表将第一个字符串的的元素都存起来，再遍历第二个字符串，在第一个字符串长度大小的窗口里检查是否全部出现了哈希表里字符。注意字符串哈表使用vector<int> count(256)而不是vector<char>|
|363|[Trapping Rain Water]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/TrappingRainWater.cpp)|_O(n)_|_O(1)_|medium|lintcode||

|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium|lintcode||


## Recursion
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|100|[Same Tree]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SameTree.cpp)|_O(n)_|_O(h)_|easy||当都为空则停止迭代返回true，否则迭代|
|104|[Maximum Depth of Binary Tree]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/MaximumDepthofBinaryTree.cpp)|_O(n)_|_O(n)_|easy||注意停止条件|
|110|[Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/BalancedBinaryTree.cpp)|_O(n)_|_O(h)_|easy||左子树和右子树高度是否相差1|
|111|[Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/MinimumDepthofBinaryTree.cpp)|_O(n)_|_O(h)_|easy|||
|129|[Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SumRoottoLeafNumbers.cpp)|_O(n)_|_O(h)_|medium||使用辅助函数，用0作为和 。停止条件：如果是空则return 0 ，如果左子树和右子树都不存在，则返回当前结点的值 ，其他情况递归左子树和右子树。|
|298|[Binary Tree Longest Consecutive Sequence](https://leetcode.com/problems/binary-tree-longest-consecutive-sequence/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/BinaryTreeLongestConsecutiveSequence.cpp)|_O(n)_|_O(h)_|medium|||
|669|[Trim a Binary Search Tree](https://leetcode.com/problems/trim-a-binary-search-tree/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/TrimaBinarySearchTree.cpp)|_O(n)_|_O(h)_|easy||如果当前结点值小于L或大于R，则递归返回右子树或左子树，再分别递归左子树和右子树|
|108|[Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ConvertSortedArraytoBinarySearchTree.cpp)|_O(n)_|_O(h)_|easy||二分法构建BST|
|98|[Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ValidateBinarySearchTree.cpp)|_O(n)_|_O(h)_|medium||递归，设置上下边界的值，注意边界值设置成numeric_limits<long>::max() min() |
|105|[Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ConstructBinaryTreefromPreorderandInorderTraversal.cpp)|_O(n)_|_O(n)_|medium||构造一个map记录中序中的序号，从该序号以前是左子树，以后是右子树|
|106|[Construct Binary Tree from Inorder and Postorder Traversal]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ConstructBinaryTreefromInorderandPostorderTraversal.cpp)|_O(n)_|_O(n)_|medium||同上构造一个map，递归创建左子树和右子树|
|109|[Convert Sorted List to Binary Search Tree](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ConvertSortedListtoBinarySearchTree.cpp)|_O(n)_|_O(n)_|medium||使用快慢指针找到中间节点，中间节点的左子树从开始到中间节点的构造的bst，右子树是从中间节点的一下个节点到最后节点构造的bst。|
|114|[Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/FlattenBinaryTreetoLinkedList.cpp)|_O(n)_|_O(n)_|medium||将左子树放在右子树的位置上，并将原来的右子树放在新右子树的右子树|
|404|[Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SumofLeftLeaves.cpp)|_O(n)_|_O(h)_|easy||构造辅助函数，加入适否是左子树标记。如果叶子结点（左右子树为空），如果是左子树，则返回叶子的值，否则返回0，递归左子树和右子树|
|437|[Path Sum III](https://leetcode.com/problems/path-sum-iii/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/PathSumIII.cpp)|_O(n^2)_|_O(h)_|easy||辅助函数记录当前的值，再去遍历左子树和右子树|
|671|[Second Minimum Node In a Binary Tree](https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SecondMinimumNodeInaBinaryTree.cpp)|_O(n^2)_|_O(n)_|medium||使用辅助函数，以及set存储（里面元素是从小到大排列的）当前节点的值，如果set>2则删除末尾的结点，便利左子树和右子树。则此时set保存了所有节点中最小的两个值，取后面的那个即可|
|116|[Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/PopulatingNextRightPointersinEachNode.cpp)|_O(n)_|_O(log n)_|medium||如果是空则退出，如果存在左子树则把左子树的next指向右子树，如果存在右子树且存在next，则右子树的next指向next的左子树|
|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium|||



## Binary Search
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|34|[Search for a Range](https://leetcode.com/problems/search-for-a-range/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SearchforaRange.cpp)|_O(logn)_|_O(1)_|medium||二分法|
|35|[Search Insert Position](https://leetcode.com/problems/search-insert-position/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n^2)_|_O(n)_|medium||二分法|
|69|[Sqrt(x)](https://leetcode.com/problems/sqrtx/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/Sqrt.cpp)|_O(logn)_|_O(1)_|medium||二分法判断sqrt，注意的是边界值|
|74|[Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/Searcha2DMatrix.cpp)|_O(logm+logn)_|_O(1)_|medium||看成一个一维数组，二分法|
|33|[Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SearchinRotatedSortedArray.cpp)|_O(logn)_|_O(1)_|medium||每次在有序的那一半元素里找，抛弃另一半元素|
|81|[Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SearchinRotatedSortedArrayII.cpp)|_O(logn)_|_O(1)_|medium||如果nums[left] == nums[mid] 则++left|
|162|[Find Peak Element](https://leetcode.com/problems/find-peak-element/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium||二分法中间值大于后面那个元素则证明前面一部分一定有极值（因为o是无穷小）否则右边一定有极值|
|153|[Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium||如果没有旋转则是最左边的元素，如果有旋转，则找乱序里面最左边的元素|
|154|[Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/FindMinimuminRotatedSortedArrayII.cpp)|_O(n)_|_O(n)_|medium||如果mid和左边相同则left ++ ，判断一开始是否乱序时条件是nums[left] <= nums[right]|
|278|[First Bad Version](https://leetcode.com/problems/first-bad-version/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/FirstBadVersion.cpp)|_O(logn)_|_O(1)_|easy|||



## Binary Search Tree
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|230|[Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/KthSmallestElementinaBST.cpp)|_O(max(h,k))_|_O(h)_|medium||把元素从根节点到左子树开始入栈，从最小元素开始出栈，直到第k个最小元素为止|
|235|[Lowest Common Ancestor of a Binary Search Tree]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LowestCommonAncestorofaBinarySearchTree.cpp)|_O(h)_|_O(1)_|easy||公共祖先的值一定是比小的元素大，比大的元素小，按照这个要求去遍历即可|
|450|[Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/DeleteNodeinaBST.cpp)|_O(h)_|_O(h)_|medium||左子树为空右子树为空都不为空三种情况，都不为空时将右子树中最小的点变为替换结点|
|285|[Inorder Successor in BST](https://leetcode.com/problems/inorder-successor-in-bst/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/InorderSuccessorinBST.cpp)|_O(h)_|_O(1)_|medium||如果有右子树，则找右子树中最左边的结点，如果没有右子树，则找大于当前结点的右子树的最左结点|
|270|[Closest Binary Search Tree Value](https://leetcode.com/problems/closest-binary-search-tree-value/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ClosestBinarySearchTreeValue.cpp)|_O(h)_|_O(1)_|easy||两个变量gap和closet，不断遍历左子树找最小的gap的closet值|

|201|[Segment Tree Build](http://lintcode.com/en/problem/segment-tree-build/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SegmentTreeBuild.cpp)|_O(n)_|_O(n)_|medium|lintcode|segment tree , BST|
|202|[Segment Tree Query](http://lintcode.com/en/problem/segment-tree-query/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SegmentTreeQuery.cpp)|_O(lgn)_|_O(1)_|medium|lintcode|segment tree , BST|
|203|[Segment Tree Modify](Segment Tree Modify)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SegmentTreeModify.cpp)|_O(lgn)_|_O(1)_|medium|lintcode|segment tree , BST|
|205|[Interval Minimum Number](https://www.lintcode.com/problem/interval-minimum-number/description)|[C++]()|_O(logn)_|_O(logn)_|medium|lintcode|segment tree 的应用|

|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium|lintcode||


## Breadth-First Search
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|102|[Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/BinaryTreeLevelOrderTraversal.cpp)|_O(n)_|_O(n)_|easy||层序遍历广度优先，使用一个队列遍历当前层元素，把当前层元素的左子树和右子树放在队列中的后面|
|103|[Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/BinaryTreeZigzagLevelOrderTraversal.cpp)|_O(n)_|_O(n)_|medium||与上题相同，多加一个判断是否reverse|
|117|[Populating Next Right Pointers in Each Node II](https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/PopulatingNextRightPointersinEachNodeII.cpp)|_O(n)_|_O(1)_|medium||记录prev、curr、next三个结点，双层遍历，外层遍历遍历所有层，内层设置每个子节点的next|
|133|[Clone Graph](https://leetcode.com/problems/clone-graph/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/CloneGraph.cpp)|_O(n)_|_O(n)_|medium||广度优先遍历，使用队列保存当前遍历的结点，使用map保存原图和新图的结点映射，遍历时判断原来是否已经遍历过此节点，如果已经遍历过只更新neighbour，没有的话加入映射并更新neighbour|
|207|[Course Schedule](https://leetcode.com/problems/course-schedule/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/CourseSchedule.cpp)|_O(V + E)_|_O(E)_|medium||拓扑排序图使用二维数组表示，再用数组保存每个节点的入度，把入度为0的节点放入队列中，遍历图。遍历到的点入度减1，入度为0则放入队列，看最后是否还有入度不为0的点|
|210|[Course Schedule II](https://leetcode.com/problems/course-schedule-ii/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/CourseScheduleII.cpp)|_O(V + E)_|_O(E)_|medium||与上题类似，把入度为0的点依次加入结果集中即可|
|261|[Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/GraphValidTree.cpp)|_O(n)_|_O(n)_|medium||可以使用并查集。图是有效的树：1、没有环 2、是连通的 ，其中2等价于图节点数等于边数减一|
|127|[Word Ladder](https://leetcode.com/problems/word-ladder/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/WordLadder.cpp)|_O(n)_|_O(n)_|medium||BFS 每次遍历当前队列中的元素，当变换字母时加入新的队列中|


## Depth-First Search
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|112|[Path Sum](https://leetcode.com/problems/path-sum/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/PathSum.cpp)|_O(n)_|_O(h)_|easy||递归，停止条件：root为空或者是叶子节点且值等于sum|
|113|[Path Sum II](https://leetcode.com/problems/path-sum-ii/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/PathSumII.cpp)|_O(n)_|_O(h)_|medium||记录迭代的路径经过的点，把当前节点的值先放进去，如果满足sum则放入结果集，再pop出当前元素|
|199|[Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/BinaryTreeRightSideView.cpp)|_O(n)_|_O(h)_|medium||用一个数字来表示当前所在的层，每层只放一个节点，如果结果集数目小于当前层数则把当前节点放进去，先遍历右子树再遍历左子树|
|236|[Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LowestCommonAncestorofaBinaryTree.cpp)|_O(n)_|_O(n)_|medium||如果左子树和右子树里都有目标节点则root是lca|
|200|[Number of Islands](https://leetcode.com/problems/number-of-islands/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/NumberofIslands.cpp)|_O(m*n)_|_O(m*n)_|medium||遍历每个值，如果是island则dfs更新周围的点为water|
|257|[Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/BinaryTreePaths.cpp)|_O(n*h)_|_O(h)_|easy||dfs 当前路径和结果集|


## Backtracking      
1) 定义一个解空间，它包含问题的解  2) 用适于搜索的方式组织该空间  3) 用深度优先法搜索该空间，利用限界函数避免移动到不可能产生解的子空间。

| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|78|[Subsets](https://leetcode.com/problems/subsets/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/Subsets.cpp)|_O(n * 2^n)_|_O(1)_|medium||遍历每个元素的时候，找到每个元素所在的子集并添加到结果集里|
|39|[Combination Sum](https://leetcode.com/problems/combination-sum/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/CombinationSum.cpp)|_O(k * n^k)_|_O(k)_|medium||dfs，先给候选元素排序，再记录每次循环的位置避免重复|



|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium|||

Combination Sum