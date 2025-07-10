#include <jsbind/jsbind.hpp>

using namespace jsbind;

int main() {
    Console console;
    uint8_t arr[] = {5, 1, 2, 3, 4,};
    auto u8arr = Uint8Array::from(arr, 5);
    console.log(u8arr);
    console.log(u8arr[0]);

    for (const auto a: u8arr) {
        console.log(a);
    }

    DOMString greeting = "Hello from jsbind 👋";
    Any n = 12345;
    console.log(greeting, n);
}