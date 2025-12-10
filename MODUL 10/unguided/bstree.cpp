#include "bstree.h"
#include <iostream>

using namespace std;
address alokasi(infotype x) {
    address P = new Node;
    P->info = x;
    P->left = Nil;
    P->right = Nil;
    return P;
}

void insertNode(address &root, infotype x) {
    if(root == Nil) {
        root = alokasi(x);
    }else{
        if (x < root->info)
            insertNode(root->left, x);
        else if (x > root->info)
            insertNode(root->right, x);
    }
}

address findNode(infotype x, address root) {
    if(root == Nil)
        return Nil;
    else if (x == root->info)
        return root;
    else if (x < root->info)
        return findNode(x, root->left);
    else
        return findNode(x, root->right);
}

void InOrder(address root) {
    if(root != Nil) {
        InOrder(root->left);
        cout << root->info << " - ";
        InOrder(root->right);
    }
}

void PreOrder(address root) {
    if(root != Nil) {
        cout << root->info << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(address root) {
    if(root != Nil) {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->info << " ";
    }
}


int hitungJumlahNode(address root) {
    if(root == Nil)
    return 0;
    return 1 + hitungJumlahNode(root->left) + hitungJumlahNode(root->right);
}

int hitungTotalInfo(address root) {
    if(root == Nil)
    return 0;
    return root->info + hitungTotalInfo(root->left) + hitungTotalInfo(root->right);
}

int hitungKedalaman(address root) {
    if(root == Nil) 
    return 0;
    int kiri = hitungKedalaman(root->left);
    int kanan = hitungKedalaman(root->right);
    return 1 + (kiri > kanan ? kiri : kanan);
}