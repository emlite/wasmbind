#include <jsbind/Reflect.hpp>
#include <jsbind/jsbind.hpp>

using namespace jsbind;

using namespace jsbind;

int main() {
    emlite::init();
    Console console;
    Any obj = Any::object();
    obj.set("foo", 123);
    console.log(obj["foo"]);
    return 0;
}
