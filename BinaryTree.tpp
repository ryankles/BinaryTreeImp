template <typename T>
BinaryTree<T>::~BinaryTree()
{
    clear(root);
}

template <typename T>
void BinaryTree<T>::insert(T val)
{
    insert(root, val);
}

template <typename T>
void BinaryTree<T>::insert(Node *&node, T val)
{
    if (node == nullptr)
    {
        node = new Node(val);
    }
    else if (val < node->data)
    {
        insert(node->left, val);
    }
    else
    {
        insert(node->right, val);
    }
}

template <typename T>
void BinaryTree<T>::inorder() const
{
    inorder(root);
    std::cout << std::endl;
}

template <typename T>
void BinaryTree<T>::inorder(Node *node) const
{
    if (node != nullptr)
    {
        inorder(node->left);
        std::cout << node->data << " ";
        inorder(node->right);
    }
}

template <typename T>
void BinaryTree<T>::preorder() const
{
    preorder(root);
    std::cout << std::endl;
}

template <typename T>
void BinaryTree<T>::preorder(Node *node) const
{
    if (node != nullptr)
    {
        std::cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
}

template <typename T>
void BinaryTree<T>::postorder() const
{
    postorder(root);
    std::cout << std::endl;
}

template <typename T>
void BinaryTree<T>::postorder(Node *node) const
{
    if (node != nullptr)
    {
        postorder(node->left);
        postorder(node->right);
        std::cout << node->data << " ";
    }
}

template <typename T>
bool BinaryTree<T>::search(T val) const
{
    return search(root, val) != nullptr;
}

template <typename T>
typename BinaryTree<T>::Node *BinaryTree<T>::search(Node *node, T val) const
{
    if (node == nullptr || node->data == val)
    {
        return node;
    }
    else if (val < node->data)
    {
        return search(node->left, val);
    }
    else
    {
        return search(node->right, val);
    }
}

template <typename T>
void BinaryTree<T>::remove(T val)
{
    remove(root, val);
}

template <typename T>
void BinaryTree<T>::remove(Node *&node, T val)
{
    if (node == nullptr)
        return;

    if (val < node->data)
    {
        remove(node->left, val);
    }
    else if (val > node->data)
    {
        remove(node->right, val);
    }
    else
    {
        // Node with only one child or no child
        if (node->left == nullptr)
        {
            Node *temp = node->right;
            delete node;
            node = temp;
        }
        else if (node->right == nullptr)
        {
            Node *temp = node->left;
            delete node;
            node = temp;
        }
        else
        {
            // Node with two children
            Node *temp = findMin(node->right);
            node->data = temp->data;
            remove(node->right, temp->data);
        }
    }
}

template <typename T>
typename BinaryTree<T>::Node *BinaryTree<T>::findMin(Node *node) const
{
    while (node->left != nullptr)
    {
        node = node->left;
    }
    return node;
}

template <typename T>
void BinaryTree<T>::clear()
{
    clear(root);
    root = nullptr;
}

template <typename T>
void BinaryTree<T>::clear(Node *&node)
{
    if (node != nullptr)
    {
        clear(node->left);
        clear(node->right);
        delete node;
    }
}

template <typename T>
bool BinaryTree<T>::isEmpty() const
{
    return root == nullptr;
}