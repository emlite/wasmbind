
#include <jsbind/jsbind.hpp>
#include <jsbind/Function.hpp>

using namespace jsbind;

int main() {
    Console console;

    // Create a JS function dynamically: function(x, y) { return x + y; }
    const char *args[] = {"x", "y"};
    Function add(args, "return x + y;");
    Any result = add(2, 3);
    console.log("add(2, 3):");
    console.log(result);

    // Use a JS function as a callback
    Function cb = Function::Fn<void(Any)>([](Any v) {
        Console().log("Callback called with:");
        Console().log(v);
    });
    cb("test value");

    // Call a global JS function (console.log)
    Function log("console.log");
    log("Hello from JS console.log!");

    return 0;
}
