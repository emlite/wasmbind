#include <jsbind/Any.hpp>
#include <jsbind/Console.hpp>

int main() {
    jsbind::Any value(42); // Use constructor template
    jsbind::Console().log(
        jsbind::Any("Is undefined?"),
        jsbind::Any(value.isUndefined())
    );
    jsbind::Console().log(
        jsbind::Any("Is null?"), jsbind::Any(value.isNull())
    );
    return 0;
}
