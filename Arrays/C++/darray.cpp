#include <iostream>
#include <cassert>

/**
 * Dynamic array data structure, like std:: vector.
 * @tparam T type of darray elements
 */
template<class T>
class DArray {
public:
    explicit DArray(T value = T(), size_t count = 0) : _bufferSize(count + 1), _nextIndex(count),
                                                       _buffer(new T[_bufferSize]) {
        for (size_t i = 0; i < count; ++i) {
            _buffer[i] = value;
        }
    };

    T &operator[](size_t index) {

    }

    size_t pushBack(T element) {

    }

    size_t getSize() {

    }

    T &getLast() {

    }


    size_t deleteLast() {

    }

    ~DArray() {

    }

private:


    void resize() {

    }

    size_t _bufferSize;
    size_t _nextIndex;
    T *_buffer;
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
