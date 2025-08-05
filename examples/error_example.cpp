#include <jsbind/Error.hpp>
#include <jsbind/jsbind.hpp>
#include <jsbind/Error.hpp>

using namespace jsbind;

using namespace jsbind;

int main() {
    emlite::init();
    Console console;
    Error err("Something went wrong");
    console.log(err.message());
    return 0;
}
