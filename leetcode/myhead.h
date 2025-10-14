#ifndef TREENODE_H
#define TREENODE_H

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
// Sınıf (struct) tanımı
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    // Kurucular (Constructors)
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif