#include <jsbind/Date.hpp>
#include <jsbind/jsbind.hpp>

using namespace jsbind;

using namespace jsbind;

int main() {
    Console console;
    Date now;
    console.log(now.toIsoString());
    console.log(now.valueOf());
    return 0;
}
