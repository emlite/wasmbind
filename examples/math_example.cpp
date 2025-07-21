#include <jsbind/Math.hpp>
#include <jsbind/jsbind.hpp>
#include <jsbind/Math.hpp>

using namespace jsbind;

using namespace jsbind;

int main() {
    Console console;
    double val = 3.14159;
    console.log(Math::sin(val));
    console.log(Math::cos(val));
    console.log(Math::sqrt(val));
    return 0;
}
