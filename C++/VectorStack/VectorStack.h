#include <string>
#include <vector>

class VectorStack {
private:
	std::vector<std::string> values;
public:

	void push(std::string val) {
		values.push_back(val);
	}

	std::string pop() {
		if (values.empty())
			throw std::out_of_range("Stack is empty");
		std::string val = values.back(); 
		values.pop_back(); 
		return val;
	}
};