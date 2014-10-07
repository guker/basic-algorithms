#pragma once
#include "general_settings.h"

using namespace std;

// Definition for singly-linked list.
struct GraphNode {
    double val;
    int id;
    double cost;
    double estimate;
    double g_score;
    double f_score;
    vector<GraphNode*> neighbor;
    GraphNode(double x, int y, double z, double w) : id(x), val(y), cost(z), estimate(w) {}
};

struct BinaryTreeNode{
    //int val;
    GraphNode *graphnode;
    int id;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    BinaryTreeNode* parent;
    BinaryTreeNode(GraphNode* x) : graphnode(x), id(0), left(NULL), right(NULL), parent(NULL){}
};


