#ifndef SPARSE_MATRIX_NODE_H
#define SPARSE_MATRIX_NODE_H

template <typename T>
class Matrix;

template <typename T>
class Node {
	protected:
		Node<T> *down, *right;

public:
    explicit Node(Node<T> *d, Node<T> *r) : down(d), right(r)
	{
	}

	virtual ~Node() = default;

    friend class Matrix<T>;
};

#endif //SPARSE_MATRIX_NODE_H
