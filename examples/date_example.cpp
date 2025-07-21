#include <jsbind/Date.hpp>
#include <jsbind/jsbind.hpp>
#include <jsbind/Date.hpp>

using namespace jsbind;

using namespace jsbind;

int main() {
    Console console;
    Date now;
    console.log(now.to_iso_string());
    console.log(now.value_of());
    return 0;
}
