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
        assert(index <= _nextIndex && "Wrong index");
        return _buffer[index];
    }

    size_t pushBack(T element) {
        if (isFull()) { resize(); }
        _buffer[_nextIndex] = element;
        return _nextIndex++;
    }

    size_t getSize() {
        return _nextIndex;
    }

    T &getLast() {
        assert(_nextIndex != 0 && "DArray in empty!");
        return _buffer[_nextIndex - 1];
    }

    size_t deleteLast() {
        assert(_nextIndex != 0 && "DArray in empty!");
        return (--_nextIndex - 1);
    }

    ~DArray() {
        delete[] _buffer;
    }

private:
    bool isFull() {
        return _nextIndex == _bufferSize;
    }

    void resize() {
        auto oldBuffer = _buffer;
        _buffer = new T[_bufferSize * 2];
        memmove(_buffer, oldBuffer, _bufferSize * sizeof(T));
        _bufferSize *= 2;
        delete[] oldBuffer;
    }

    size_t _bufferSize;
    size_t _nextIndex;
    T *_buffer;
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
