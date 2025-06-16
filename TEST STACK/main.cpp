
#include <iostream>

using namespace std;


class MyStack
{

public:

	MyStack(int size)
	{
		capacity_ = size;
		arr_ = new int[capacity_];
		top_idx_ = -1;
	}

	~MyStack()
	{
		delete[] arr_;
	}


	bool IsFull()
	{
		return top_idx_ == capacity_ - 1;
	}

	bool IsEmpty()
	{
		return top_idx_ < 0;
	}

	int GetTop()
	{
		if (IsEmpty())
		{
			cout << endl << "Stack Is Empty !!";
			return -1;
		}

		return arr_[top_idx_];
	}

	void Push(int data)
	{
		if (IsFull())
		{
			cout << endl << "Stack is Full !!";
			return;
		}

		arr_[++top_idx_] = data;
	}

	int Pop()
	{
		if (IsEmpty())
		{
			cout << "stack is empty !!";
			return -1;
		}

		return arr_[top_idx_--];
	}


private:

	int top_idx_;
	int capacity_;
	int* arr_;

};


int main()
{

	MyStack test_stack(100);

	test_stack.GetTop();
	cout << endl;
	test_stack.Pop();
	cout << endl;
	
	cout << "push into stack: ";
	int l_data;
	cin >> l_data;
	test_stack.Push(l_data);

	cout << "stack after push: " << endl;
	cout << "stack top is: " <<  test_stack.GetTop();

	cout << endl << endl << "stack after pop: ";
	test_stack.Pop();
	cout << "stack size: " << test_stack.GetTop() << endl;
	cout << "stack is empty: " << test_stack.IsEmpty();


	return 0;
}



