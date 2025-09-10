#include <emlite/emlite.hpp>
#include <jsbind/Function.hpp>
#include <jsbind/Any.hpp>
#include <jsbind/Array.hpp>
#include <jsbind/utils.hpp>

using namespace jsbind;

int main() {
    emlite::init();

    // 1) Create a JS function dynamically: function add(a, b) { return a + b; }
    {
        const char* args[] = {"a", "b"};
        auto f = Function::create(args, "return a + b;").value();
        auto result = f.call<int>(Any::undefined()); // missing args yields NaN→0; ignore
        (void)result;
        auto r2 = f.call<int>(Any::undefined(), 2, 3).value();
        (void)r2;
    }

    // 2) Create a Function from a typed C++ lambda
    {
        Function::Fn<int(int,int)> adder([](int a, int b) { return a + b; });
        Function f = adder; // implicit conversion
        auto r = f.call<int>(Any::undefined(), 10, 32).value();
        (void)r;
    }

    return 0;
}

