#include <jsbind/jsbind.hpp>
#include <jsbind/Promise.hpp>

using namespace jsbind;

int main() {
    emlite::init();
    Console console;
    // Create a JS Promise that resolves after 1 second
    auto promise = Promise<Any>::resolve("done");
    console.log("Promise created");
    promise.then(
        Function::Fn<void(Any)>([](Any value) {
            Console().log("Promise resolved with:");
            Console().log(value);
        }),
        Function::Fn<void(Any)>([](Any error) {
            Console().log("Promise rejected with:");
            Console().log(error);
        })
    );
    promise.catch_(Function::Fn<void(Any)>([](Any error) {
        Console().log("Promise rejected (catch) with:");
        Console().log(error);
    }));
    return 0;
}
