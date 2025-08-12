
#include <jsbind/jsbind.hpp>

using namespace jsbind;

int main() {
    emlite::init();
    Console console;
    // Create and log a Uint8Array
    uint8_t arr[] = {5, 1, 2, 3, 4};
    auto u8arr = Uint8Array::from(arr, 5);
    console.log("Uint8Array:");
    console.log(u8arr);
    console.log("First element:");
    console.log(u8arr[0]);

    // Show iteration and sum
    int sum = 0;
    for (const auto a: u8arr) {
        sum += a;
    }
    console.log("Sum:");
    console.log(sum);

    // Demonstrate Any type conversions
    Any a = 42;
    console.log("Any as int:");
    console.log(a.as<int>());
    a = "A string";
    console.log("Any as string:");
    console.log(a);

    // Property access and method call
    Any obj = Any::object();
    obj.set("foo", 123);
    obj.set("bar", "baz");
    console.log("Object foo:");
    console.log(obj["foo"]);
    console.log("Object bar:");
    console.log(obj["bar"]);

    // Call a JS method
    Any str = "hello world";
    console.log("Uppercase:");
    console.log(str.call("toUpperCase"));

    // Error handling
    Any bad = obj["missing"];
    console.log(bad);
    if (bad.is_error()) {
        console.log("Caught error:");
        console.log(bad.as<Error>().message());
    }

    // Multiple arguments
    String greeting = "Hello from jsbind 👋";
    Any n = 12345;
    console.log(greeting, n);
    return 0;
}