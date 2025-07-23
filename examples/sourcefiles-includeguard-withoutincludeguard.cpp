// bad          -- NOT include #include guards --
#include <cstddef>

namespace MyLib {
    template<typename T>
    class Vector {
    public:
        Vector();
        void push_back(const T& value);
        size_t size() const;
        T& operator[](size_t index);

    private:
        T* data;
        size_t capacity;
        size_t length;
    };
}
