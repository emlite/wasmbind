
#include <jsbind/jsbind.hpp>
#include <jsbind/url.hpp>

using namespace jsbind;

int main() {
    emlite::init();
    Console console;
    // Parse a URL using the JS URL constructor
    jsbind::URL url = jsbind::URL::create("https://example.com/path?query=1").unwrap();
    console.log("Full URL:");
    console.log(url.href());
    console.log("Host:");
    console.log(url.protocol());
    console.log("Pathname:");
    console.log(url.pathname());
    console.log("Search:");
    console.log(url.search());
    url.pathname("/newpath");
    console.log("Modified pathname:");
    console.log(url.pathname());

    return 0;
}
