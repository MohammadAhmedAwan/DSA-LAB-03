#pragma once
#include"node.h"
#include<iostream>
using namespace std;

class stack
{
public:
	node* head;

	stack();
	
	void push(int);
	
	int pop();
	
	int peek();
	
	void isEmpty();
	
	int size();

	void print();
};