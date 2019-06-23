#ifndef SPARSE_MATRIX_MATRIX_H
#define SPARSE_MATRIX_MATRIX_H

#include <stdexcept>

#include "header_node.h"
#include "element_node.h"

template <typename T>
class Matrix {
public:
    Node<T> *root;
    unsigned rows, columns;

public:
    Matrix(T rows, T columns) : rows(rows), columns(columns)
	{
		Node<T> *current;

		root = new Node<T>(nullptr, nullptr);
		
		current = root;
		for (auto i = 0; i < columns; ++i)
		{
			current->right = new HNode<T>(i);
			current = current->right;
		}
		current = root;
		for (auto i = 0; i < rows; ++i)
		{
			current->down = new HNode<T>(i);
			current = current->down;
		}
	}

    void set(unsigned r, unsigned c, T data)
	{
		ENode<T> *new_node, *en;

		if (r < rows && r >= 0 && c >= 0 && c < columns)
		{
			new_node = new ENode<T>(r, c, data);
			// RD
			HNode<T> *current = (HNode<T>*)root->right;
			while (current->indexValue != c)
			{
				current = (HNode<T>*)current->right;
			}
			if (current->down == nullptr)
			{
				current->down = new_node;
			}
			else
			{
				en = (ENode<T>*)current->down;
				if (r < en->row)
				{
					auto temp = en;
					current->down = new_node;
					new_node->down = temp;
				}
				else
				{
					auto next = (ENode<T>*)en->down;
					while (next != nullptr && next->row < r)
					{
						en = (ENode<T>*)en->down;
						next = (ENode<T>*)en->down;
					}
					if (next == nullptr)
					{
						en->down = new_node;
					}
					else
					{
						if (en->row == r)
						{
							std::cout << "reemplazando\n";
							en->value = data;
						}
						else
						{
							auto temp = next;
							en->down = new_node;
							new_node->down = temp;
						}
					}
				}
			}
			// DR
			current = (HNode<T>*)root->down;
			while (current->indexValue != r)
			{
				current = (HNode<T>*)current->down;
			}
			if (current->right == nullptr)
			{
				current->right = new_node;
			}
			else
			{
				en = (ENode<T>*)current->right;
				if (c < en->col)
				{
					auto temp = en;
					current->right = new_node;
					new_node->right = temp;
				}
				else
				{
					auto next = (ENode<T>*)en->right;
					while (next != nullptr && next->col < c)
					{
						en = (ENode<T>*)en->right;
						next = (ENode<T>*)en->right;
					}
					if (next == nullptr)
					{
						en->right = new_node;
					}
					else
					{
						if (en->col == c)
						{
							std::cout << "reemplazando\n";
							en->value = data;
						}
						else
						{
							auto temp = next;
							en->right = new_node;
							new_node->right = temp;
						}
					}
				}
			}
		}
	}

    T operator()(unsigned, unsigned) const;
    Matrix<T> operator*(T scalar) const;
    Matrix<T> operator*(Matrix<T> other) const;
    Matrix<T> operator+(Matrix<T> other) const;
    Matrix<T> operator-(Matrix<T> other) const;
    Matrix<T> transpose() const;
    void print() const
	{
		auto row = dynamic_cast<HNode<T>*>(root->down);
		ENode<T> *ce;
		while (row != nullptr)
		{
			ce = dynamic_cast<ENode<T>*>(row->right);
			while (ce != nullptr)
			{
				std::cout << ce->value << ' ';
				ce = dynamic_cast<ENode<T>*>(ce->right);
			}
			std::cout << '\n';
			row = dynamic_cast<HNode<T>*>(row->down);
		}
		std::cout << '\n';
		auto col = dynamic_cast<HNode<T>*>(root->right);
		while (col != nullptr)
		{
			ce = dynamic_cast<ENode<T>*>(col->down);
			while (ce != nullptr)
			{
				std::cout << ce->value << ' ';
				ce = dynamic_cast<ENode<T>*>(ce->down);
			}
			std::cout << '\n';
			col = dynamic_cast<HNode<T>*>(col->right);
		}
	}

    //~Matrix();
};

// Faltaron muchas cosas de la matriz, al menos el esperaba el operador ()

#endif //SPARSE_MATRIX_MATRIX_H
