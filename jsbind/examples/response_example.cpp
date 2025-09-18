
#include <jsbind/jsbind.hpp>
#include <jsbind/Response.hpp>

using namespace jsbind;

int main() {
    emlite::init();
    Console console;
    const char* url = "https://jsonplaceholder.typicode.com/todos/1";
    // Fetch a URL and handle the response
    fetch(url)
        .then(Function::Fn<void(Response)>([](Response resp) {
            Console().log("Response status:");
            Console().log(resp.status());
            Console().log("Response ok:");
            Console().log(resp.ok());
            resp.json().then(
                Function::Fn<void(String)>([](auto txt) {
                    Console().log("Response text:");
                    Console().log(txt);
                }),
                Function::Fn<void(Any)>([](Any err) {
                    Console().log("Text error:");
                    Console().log(err);
                })
            );
        }),
        Function::Fn<void(Any)>([](Any err) {
            Console().log("Fetch error:");
            Console().log(err);
        })
    );
    return 0;
}
