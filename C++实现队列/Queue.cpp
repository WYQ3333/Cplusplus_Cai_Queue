#include<iostream>
using namespace std;

typedef int DataType;

class Queue
{
public:
	Queue(DataType *array, DataType left=0, DataType right=0)
	{
		array = new int[10];
		_array = array;
		_left = left;
		_right = right;
	}
	void QueuePush(DataType data)//入队
	{
		if (_right < 10)
		{
			_array[_right] = data;
			_right++;
		}
	}
	void QueuePop()
	{
		if (_left < _right)
		{
			_left++;
		}
		else
		{
			cout << "队列为空" << endl;
		}
	}
	bool IsEmptyQueue()
	{
		if (_left == _right)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void QueuePrint()
	{
		int i = 0;
		for (i = _left; i < _right; i++)
		{
			cout << _array[i] << " ";
		}
	}
	~Queue()
	{
		delete _array;
	}
private:
	DataType *_array;
	DataType _left;
	DataType _right;
};

int main()
{
	DataType *array = NULL;
	Queue q(array);
	cout<<q.IsEmptyQueue()<<endl;
	q.QueuePush(1);
	q.QueuePush(2);
	q.QueuePush(3);
	q.QueuePush(4);
	q.QueuePrint();
	cout << endl;
	q.QueuePop();
	q.QueuePrint();
	system("pause");
	return 0;
}