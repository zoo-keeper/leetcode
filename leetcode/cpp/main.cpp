//
// Created by zz on 2017/9/26.
//



#include <vector>
#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include "TreeNode.h"
#include "AddandSearchWord.cpp"
#include "RangeSumQuery.cpp"

using namespace std;

int main() {
    //Solution solu ;
    TreeNode node1 = TreeNode{0};
    TreeNode node2 = TreeNode{1};
    TreeNode node3 = TreeNode{1};
    node1.left = &node2;
    node1.right = &node2;

    vector<string> strs = {"-78","-33","196","+","-19","-","115","+","-","-99","/","-18","8","*","-86","-","-","16","/","26","-14","-","-","47","-","101","-","163","*","143","-","0","-","171","+","120","*","-60","+","156","/","173","/","-24","11","+","21","/","*","44","*","180","70","-40","-","*","86","132","-84","+","*","-","38","/","/","21","28","/","+","83","/","-31","156","-","+","28","/","95","-","120","+","8","*","90","-","-94","*","-73","/","-62","/","93","*","196","-","-59","+","187","-","143","/","-79","-89","+","-"};


    /*for(int num : solu.inorderTraversal(&node1)){
        cout << num;
    }*/

    WordDictionary words ;
    words.addWord("ran");
    words.addWord("rune");
    words.addWord("runner");
    words.addWord("runs");
    words.addWord("add");
    words.addWord("adds");
    words.addWord("adder");
    words.addWord("addee");

    //cout << words.search("r.n") << endl;
    vector<int> nums({1,3,5});
    vector<int> nums1({{{}}});

    NumArray na1(nums1);
    na1.sumRange(0,0);

}
