
#include <jsbind/jsbind.hpp>
#include <jsbind/String.hpp>

using namespace jsbind;

int main() {
    emlite::init();
    Console console;
    // Create a string
    String s("Hello, world!");
    console.log("Original string:");
    console.log(s);

    // Manipulation
    // No toUpperCase() in jsbind::String; show char_at and concat
    console.log("First char:");
    console.log(s.charAt(0));
    // No substring; show at()
    console.log("Char at index 1:");
    console.log(s.at(1));

    // Concatenation
    String s2(" JSBind");
    console.log("Concatenated:");
    console.log(s.concat(s2));

    // Encoding/decoding not available in jsbind::String

    // Length
    console.log("Length:");
    console.log(s.length());

    return 0;
}
