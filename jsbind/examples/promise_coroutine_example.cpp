#include <jsbind/jsbind.hpp>
#include <jsbind/Promise.hpp>

using namespace jsbind;

#if JSBIND_COROUTINE_SUPPORT

// Simple coroutine that returns a Promise<Any>
Promise<Any> async_fetch_data() {
    // Create a promise that resolves after some time
    auto promise = Promise<Any>::resolve("coroutine result");
    
    // Use co_await to wait for the promise
    auto result = co_await promise;
    
    co_return Promise<Any>::resolve(result);
}

// Another coroutine example with string type
Promise<String> async_get_string() {
    auto promise = Promise<Any>::resolve("Hello from coroutine!");
    
    // co_await the promise
    auto result = co_await promise;
    
    co_return Promise<String>::resolve(String(result));
}

// Test error handling in coroutines
Promise<Any> async_error_test() {
    // Create a rejected promise with a proper Error object
    auto error = TypeError("Something went wrong in coroutine!");
    auto promise = Promise<Any>::reject(error);
    
    // The promise rejection will be thrown via emlite::Val::throw_
    // when co_await resumes, causing the coroutine to terminate
    auto result = co_await promise;
    co_return Promise<Any>::resolve("This shouldn't be reached");
}

// Test successful coroutine with proper type conversion
Promise<String> async_string_conversion_test() {
    // Create a promise that resolves with a string value
    auto promise = Promise<Any>::resolve("Hello from typed coroutine!");
    
    // Convert to typed promise and await
    auto result = co_await Promise<String>(promise);
    co_return Promise<String>::resolve(result);
}

#endif

int main() {
    emlite::init();
    Console console;
    
#if JSBIND_COROUTINE_SUPPORT
    console.log("Testing C++20 coroutine support with Promise co_await");
    
    // Test the coroutine
    auto future_result = async_fetch_data();
    future_result.then(
        Function::Fn<void(Any)>([](Any value) {
            Console().log("Coroutine resolved with:");
            Console().log(value);
        }),
        Function::Fn<void(Any)>([](Any error) {
            Console().log("Coroutine rejected with:");
            Console().log(error);
        })
    );
    
    auto string_future = async_get_string();
    string_future.then(
        Function::Fn<void(Any)>([](Any value) {
            Console().log("String coroutine resolved with:");
            Console().log(value);
        }),
        Function::Fn<void(Any)>([](Any error) {
            Console().log("String coroutine rejected with:");
            Console().log(error);
        })
    );
    
    // Test error handling
    auto error_future = async_error_test();
    error_future.then(
        Function::Fn<void(Any)>([](Any value) {
            Console().log("Error handling test resolved with:");
            Console().log(value);
        }),
        Function::Fn<void(Any)>([](Any error) {
            Console().log("Error handling test rejected with:");
            Console().log(error);
        })
    );
    
    // Test string conversion
    auto string_conversion_future = async_string_conversion_test();
    string_conversion_future.then(
        Function::Fn<void(Any)>([](Any value) {
            Console().log("String conversion test resolved with:");
            Console().log(value);
        }),
        Function::Fn<void(Any)>([](Any error) {
            Console().log("String conversion test rejected with:");
            Console().log(error);
        })
    );
    
    console.log("Coroutine tests initiated");
#else
    console.log("C++20 coroutine support not available");
#endif
    
    return 0;
}