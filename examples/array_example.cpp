#include <jsbind/jsbind.hpp>
#include <jsbind/jsbind.hpp>

using namespace jsbind;

using namespace jsbind;

int main() {
    Console console;
    int data[6] = {1, 2, 3, 4, 5, 6};
    auto arr = Sequence<int>::new_(data, 6);
    console.log(arr.size());
    for (size_t i = 0; i < arr.size(); ++i) {
        console.log(arr[i]);
    }
    jsbind::Array arr2; // Default constructed
    arr2.push(1);
    arr2.push(2);
    arr2.push(3);
    return 0;
}
