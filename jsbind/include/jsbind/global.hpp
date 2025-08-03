#include "Error.hpp"

namespace jsbind {

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

} // namespace jsbind