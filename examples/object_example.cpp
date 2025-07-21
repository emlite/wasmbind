#include <jsbind/jsbind.hpp>
#include <jsbind/jsbind.hpp>

using namespace jsbind;

using namespace jsbind;

int main() {
    Console console;
    Any obj = Any::object();
    obj.set("foo", 42);
    console.log(obj["foo"]);
    return 0;
}
