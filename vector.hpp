#include <iostream>
#include <vector>

template <typename T>
class CoolerVector
{
public:
    CoolerVector() : size_(0), capacity_(0), container_({}) {}

    void pop_back()
    {
        container_.at(size_ - 1) = {};

        size_ -= 1;

        return;

        // ⭐TODO: Without using the prebuilt .pop_back() function, finish this function so that it always removes the last element in container_
        // 💡 Dont forget about size_ and capacity_
    }

    void push_back(T value)
    {
        if (size_ + 1 > capacity_) {
            container_.at(size_ + 1) = value; 
        } else {
            capacity_ = (capacity_ * 2);
            container_.at(size_ + 1) = value;
        }
        return;
        // ⭐TODO: Without using the prebuilt .push_back() function, finish this function so that it always removes the last element in container_
        // 💡 Dont forget about size_ and capacity_
    }

    void display()
    {
        for (T value : container_)
        {
            std::cout << value << " " << std::endl;
        }
        }

private:
    int size_;
    int capacity_;
    std::vector<T> container_;
};