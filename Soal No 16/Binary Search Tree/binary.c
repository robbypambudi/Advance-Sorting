/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovani
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Mencari dan menghapus nilai yang telah ditentukan sesuai algoritma Binary Search Tree

*/
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>

/**
 * Node structure and
 * uniqueBST structure
 */

typedef struct bstnode_t
{
    int key;
    struct bstnode_t
        *left,
        *right;
} BSTNode;

typedef struct bst_t
{
    BSTNode *_root;
    unsigned int _size;
} BST;

BSTNode *__bst__createNode(int value)
{
    BSTNode *newNode = (BSTNode *)malloc(sizeof(BSTNode));
    newNode->key = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BSTNode *__bst__insert(BSTNode *root, int value)
{
    if (root == NULL)
        return __bst__createNode(value);

    if (value < root->key)
        root->left = __bst__insert(root->left, value);
    else if (value > root->key)
        root->right = __bst__insert(root->right, value);

    return root;
}

BSTNode *__bst__search(BSTNode *root, int value)
{
    while (root != NULL)
    {
        if (value < root->key)
            root = root->left;
        else if (value > root->key)
            root = root->right;
        else
            return root;
    }
    return root;
}

BSTNode *__bst__findMinNode(BSTNode *node)
{
    BSTNode *currNode = node;
    while (currNode && currNode->left != NULL)
        currNode = currNode->left;

    return currNode;
}

BSTNode *__bst__remove(BSTNode *root, int value)
{
    if (root == NULL)
        return NULL;

    if (value > root->key)
        root->right = __bst__remove(root->right, value);
    else if (value < root->key)
        root->left = __bst__remove(root->left, value);
    else
    {

        if (root->left == NULL)
        {
            BSTNode *rightChild = root->right;
            free(root);
            return rightChild;
        }
        else if (root->right == NULL)
        {
            BSTNode *leftChild = root->left;
            free(root);
            return leftChild;
        }

        BSTNode *temp = __bst__findMinNode(root->right);
        root->key = temp->key;
        root->right = __bst__remove(root->right, temp->key);
    }
    return root;
}

void __bst__inorder(FILE *out, BSTNode *root)
{
    if (root)
    {
        __bst__inorder(out, root->left);
        fprintf(out, "%d ", root->key);
        __bst__inorder(out, root->right);
    }
}

void __bst__postorder(FILE *out, BSTNode *root)
{
    if (root)
    {
        __bst__postorder(out, root->left);
        __bst__postorder(out, root->right);
        fprintf(out, "%d ", root->key);
    }
}

void __bst__preorder(FILE *out, BSTNode *root)
{
    if (root)
    {
        fprintf(out, "%d ", root->key);
        __bst__preorder(out, root->left);
        __bst__preorder(out, root->right);
    }
}

/**
 * PRIMARY FUNCTION
 * ---------------------------
 * Accessible and safe to use.
 */

void bst_init(BST *bst)
{
    bst->_root = NULL;
    bst->_size = 0u;
}

bool bst_isEmpty(BST *bst)
{
    return bst->_root == NULL;
}

bool bst_find(BST *bst, int value)
{
    BSTNode *temp = __bst__search(bst->_root, value);
    if (temp == NULL)
        return false;

    if (temp->key == value)
        return true;
    else
        return false;
}

void bst_insert(BST *bst, int value)
{
    if (!bst_find(bst, value))
    {
        bst->_root = __bst__insert(bst->_root, value);
        bst->_size++;
    }
}

void bst_remove(BST *bst, int value)
{
    if (bst_find(bst, value))
    {
        bst->_root = __bst__remove(bst->_root, value);
        bst->_size--;
    }
}

/**
 * Binary search tree traversal
 * - Inorder
 * - Postorder
 * - Preorder
 */

void bst_inorder(FILE *out, BST *bst)
{
    __bst__inorder(out, bst->_root);
}

void bst_postorder(FILE *out, BST *bst)
{
    __bst__postorder(out, bst->_root);
}

void bst_preorder(FILE *out, BST *bst)
{
    __bst__preorder(out, bst->_root);
}

void bst_print(FILE *out, BST *bst)
{
    fprintf(out, "Binary Search Tree\n");
    fprintf(out, "==================\n");
    fprintf(out, "Size: %d\n", bst->_size);
    fprintf(out, "Inorder: ");
    bst_inorder(out, bst);
    fprintf(out, "\n");
    fprintf(out, "Preorder: ");
    bst_preorder(out, bst);
    fprintf(out, "\n");
    fprintf(out, "Postorder: ");
    bst_postorder(out, bst);
    fprintf(out, "\n");
}
int pakAkuCapek(BSTNode *root, int value)
{
    int x = 10000;
    while (root != NULL)
    {
        // printf("%d\n", root->key);
        if (root->key > value)
        {

            if (root->key <= x && root->key >= value)
            {
                x = root->key;
            }
            root = root->left;
        }
        else if (root->key <= value)
        {
            if (root->key <= x && root->key >= value)
            {
                x = root->key;
            }
            root = root->right;
        }
    }
    return x;
}

int bst_cari_dan_hapus_pak(BST *bst, int value)
{
    return pakAkuCapek(bst->_root, value);
}

int main()
{
    BST set;
    bst_init(&set);

    // Setting Time Start
    clock_t start, end;

    FILE *in = fopen("input.txt", "r");

    int i;
    while (!feof(in))
    {
        fscanf(in, "%d", &i);
        bst_insert(&set, i);
    }

    fclose(in);

    FILE *out;
    out = fopen("output.txt", "w");
    fprintf(out, "Print Binary Tree Awal\n");
    bst_print(out, &set);

    printf("masukan data yang akan dicari dan dihapus");
    int find;
    scanf("%d", &find);
    start = clock();

    int hasil = bst_cari_dan_hapus_pak(&set, find);
    printf("data yang dicari dan dihapus %d", hasil);
    bst_remove(&set, hasil);
    end = clock();
    fprintf(out, "Print Binary Tree Setelah dihapus\n");
    bst_print(out, &set);
    printf("\n");
    fprintf(out, "Waktu Eksekusi: %f ms\n", (double)(end - start) / CLOCKS_PER_SEC * 1000);
    fclose(out);

    return 0;
}