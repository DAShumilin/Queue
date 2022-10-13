#pragma once

#include <stack>

template <typename T>

class QueueD {

private:

	std::stack<T> tmpF;
	std::stack<T> tmpS;

public:

	QueueD() {

	};
	~QueueD() {
	
	};

	void push(T element) {
		tmpF.push(element);
	};

	void pop() {
		if (tmpS.empty()) {
			while (!tmpF.empty()) {
				T tmp = tmpF.top();
				tmpS.push(tmp);
				tmpF.pop();
			}
		}
		tmpS.pop();
	};

	bool empty() {
		return (tmpF.empty() & tmpS.empty());
	};

	int size() {
		return (tmpF.size() + tmpS.size());
	};

	T front() {
		while (!tmpF.empty()) {
			T tmp = tmpF.top();
			tmpS.push(tmp);
			tmpF.pop();
		}
		T tmp = tmpS.top();
		return tmp;
	};

	T back() {
		if (!tmpF.empty()) {
			return tmpF.top();
		}
		else {
			while (!tmpS.empty()) {
				T tmp = tmpS.top();
				tmpF.push(tmp);
				tmpS.pop();
			}
			return tmpF.top();
		}
	};
};