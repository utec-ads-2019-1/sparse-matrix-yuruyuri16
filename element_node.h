#ifndef SPARSE_MATRIX_ELEMENT_NODE_H
#define SPARSE_MATRIX_ELEMENT_NODE_H

#include "node.h"

template <typename T>
class ENode : public Node<T>
{
	private:
		T row;
		T col;
		int value;

		friend class Matrix<T>;

	public:
		ENode(unsigned r, unsigned c, T v) : row(r), col(c), value(v), Node<T>(nullptr, nullptr)
		{
		}
};

#endif
