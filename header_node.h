#ifndef SPARSE_MATRIX_HEADER_NODE_H
#define SPARSE_MATRIX_HEADER_NODE_H

#include "node.h"

template <typename T>
class HNode : public Node<T>
{
	private:
		int indexValue;
		friend class Matrix<T>;

	public:
		HNode(int iv) : indexValue(iv), Node<T>(nullptr, nullptr)
		{
		}
};

#endif
