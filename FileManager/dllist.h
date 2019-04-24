#pragma once

#include "pch.h"

template <class T>
struct generic_node {
	T data;

	struct generic_node* prev;
	struct generic_node* next;
};

template <class T>
class Linked_List {

private: 

	generic_node<T>* head, * tail;

public:

	Linked_List<T>() {
		head = NULL;
		tail = NULL;
	};

	bool isEmpty();
	void display();
	void append(T value);
	void delete_element(int key);
	void shrink(int number);
	void delete_element(std::string key);
	void from_file(std::string file);
	void to_file(std::string file);
	void delete_ddlist();

};