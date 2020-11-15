# 学习笔记
## 第5课
* 做题方法：
1. clarification
2. possible solutions --> optimal (time & space)
3. code
4. test cases
* hash, set, map
## 第6课
* tree, binary tree， binary search tree
** linked list 是特殊化的tree，tree是特殊化的graph
** binary tree遍历：pre-order 根左右，in-order 左根右，post-order 左右根
** binary search tree：左<根，右>根
** tree的结构，递归比循环更容易
* heap, binary heap
** heap可以迅速找到最大或者最小值: find-max O(1), delete-max O(logN), insert O(logN)/O(1)
** binary heap通过完全binary tree实现，一般使用“数组”，实现相对容易，但是在heap中时间复杂度较高
* graph: Adjacency matrix, Adjacency list
** 必须写 visited = set() 保证不重复，graph有环路
