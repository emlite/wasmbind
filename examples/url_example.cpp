
#include <jsbind/jsbind.hpp>
#include <jsbind/url.hpp>

using namespace jsbind;

int main() {
    Console console;
    // Parse a URL using the JS URL constructor
    jsbind::URL url("https://example.com/path?query=1");
    console.log("Full URL:");
    console.log(url.href());
    console.log("Host:");
    console.log(url.protocol());
    console.log("Pathname:");
    console.log(url.pathname());
    console.log("Search:");
    console.log(url.search());
    url.set_pathname("/newpath");
    console.log("Modified pathname:");
    console.log(url.pathname());

    return 0;
}
