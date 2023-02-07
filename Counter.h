#ifndef COUNTER
#define COUNTER

class Counter {
public:
	Counter();
	Counter(int);
	Counter operator++(int);
	Counter operator--(int);
	void set(int);
	int get();

private:
	int counter;
};

#endif // COUNTER