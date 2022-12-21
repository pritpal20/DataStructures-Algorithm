#pragma once
#include <iostream>

struct node {
	int data;
	node* next;

	node(int _data) : data(_data),next(nullptr) {

	} 
};

class list {

private : 
	node* root;
public:
	list() : root(nullptr) {

	}
	~list() {
		std::cout << "object deleted \n" ;
	}

	void insert(int data) {
		node* temp = root;
		node* new_node = new node(data);
		root = new_node;
		new_node->next = temp;
	}
	
	void print() {

		node* current = root;

		while(current) {
			std::cout << current->data << "->";
			current = current->next;
		}
		std::cout << "null" << std::endl; 
	}
};