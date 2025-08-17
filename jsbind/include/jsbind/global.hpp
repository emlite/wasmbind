#include "Error.hpp"

namespace jsbind {

template <typename T>
class TypedArray;

template <typename K, typename V>
class Record;

class Object;

template <typename T>
class Promise;

class Function;

/// Safely parses integer from string with error handling
/// @param src string to parse
/// @returns Result containing parsed integer or error
Result<int32_t, Error> parseInt(const char *src);

/// Safely parses integer from string with radix and error handling
/// @param src string to parse
/// @param radix base for parsing (2-36)
/// @returns Result containing parsed integer or error
Result<int32_t, Error> parseInt(const char *src, int32_t radix);

/// Safely parses float from string with error handling
/// @param src string to parse
/// @returns Result containing parsed float or error
Result<double, Error> parseFloat(const char *src);

/// Safely decodes base64 string with error handling
/// @param encoded base64 encoded string
/// @returns Result containing decoded string or error
Result<String, Error> atob(const String &encoded);

/// Safely encodes string to base64 with error handling
/// @param data string to encode
/// @returns Result containing base64 encoded string or error
Result<String, Error> btoa(const String &data);

template <typename T>
bool isNaN(const T &t) {
    return emlite::Val::global("isNaN")(t).template as<bool>();
}

/// Queues a microtask to be executed
/// @param callback function to execute as microtask
void queueMicrotask(const jsbind::Function &callback);

/// Dynamically imports a module
/// @param specifier module specifier to import
/// @returns Promise that resolves to Result containing the module namespace object
Promise<Result<Object, Error>> import(const String &specifier);

/// Requires a CommonJS module
/// @param specifier module specifier to require
/// @returns Result containing the module exports
Result<Object, Error> require(const String &specifier);

/// Creates a require function using import.meta.url
/// @param importMetaUrl the import.meta.url value (e.g., import.meta.url)
/// @returns Result containing require function for CommonJS module loading
Result<Function, Error> createRequire(const emlite::Val &importMetaUrl);

class JsStructuredSerializeOptions : public emlite::Val {
    explicit JsStructuredSerializeOptions(Handle h) noexcept;

  public:
    static JsStructuredSerializeOptions take_ownership(Handle h) noexcept;
    explicit JsStructuredSerializeOptions(const emlite::Val &val) noexcept;
    JsStructuredSerializeOptions() noexcept;
    [[nodiscard]] JsStructuredSerializeOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Object> transfer() const;
    void transfer(const jsbind::TypedArray<jsbind::Object> &value);
};

/// Performs a structured clone of a value
/// @param value the value to clone
/// @param options optional structured clone options
/// @returns deep clone of the input value
template <typename T>
T structuredClone(
    const T &value, const JsStructuredSerializeOptions &options = JsStructuredSerializeOptions()
) {
    return emlite::Val::global("structuredClone")(value, options).template as<T>();
}
} // namespace jsbind