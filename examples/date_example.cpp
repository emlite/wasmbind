#include <jsbind/Date.hpp>
#include <jsbind/jsbind.hpp>

using namespace jsbind;

using namespace jsbind;

int main() {
    emlite::init();
    Console console;
    Date now;
    console.log(now.toIsoString());
    console.log(now.valueOf());
    return 0;
}
