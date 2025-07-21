
#include <jsbind/jsbind.hpp>
#include <jsbind/Response.hpp>

using namespace jsbind;

int main() {
    Console console;
    const char* url = "https://jsonplaceholder.typicode.com/todos/1";
    // Fetch a URL and handle the response
    fetch(url)
        .then(Function::Fn<void(Response)>([](Response resp) {
            Console().log("Response status:");
            Console().log(resp.status());
            Console().log("Response ok:");
            Console().log(resp.ok());
            resp.text().then(
                Function::Fn<void(DOMString)>([](DOMString txt) {
                    Console().log("Response text:");
                    Console().log(txt);
                }),
                Function::Fn<void(Any)>([](Any err) {
                    Console().log("Text error:");
                    Console().log(err);
                })
            );
            resp.json().then(
                Function::Fn<void(Any)>([](Any json) {
                    Console().log("Response JSON:");
                    Console().log(json);
                }),
                Function::Fn<void(Any)>([](Any err) {
                    Console().log("JSON error:");
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
