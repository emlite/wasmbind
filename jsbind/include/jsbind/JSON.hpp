#pragma once

#include "Any.hpp"
#include "String.hpp"
#include "Undefined.hpp"
#include "Error.hpp"
#include <emlite/emlite.hpp>

/// JavaScript JSON utilities with enhanced error handling
///
/// This namespace provides C++ wrappers for JavaScript JSON functionality
/// with improved error handling using Option and Result types for safer
/// JSON parsing and serialization operations.
namespace jsbind::JSON {

/// Parses JSON string with Result-based error handling
///
/// This function provides safe JSON parsing that returns a Result type
/// containing either the parsed value or an error. It's ideal when you
/// need detailed error information for invalid JSON.
/// @param text JSON string to parse
/// @returns Result containing parsed value on success or error on failure
template <class T>
Result<T, Error> parse(const char *text) {
    return emlite::Val::global("JSON").call("parse", text).as<Result<T, Error>>();
}

/// Converts JavaScript value to JSON string
///
/// This function serializes a JavaScript value to its JSON string
/// representation with optional formatting and replacement controls.
/// @param value JavaScript value to serialize
/// @param replacer optional replacer function or array to transform values
/// @param space optional spacing for pretty-printing (string or number)
/// @returns JSON string representation of the value
String stringify(
    const Any &value, const Any &replacer = Undefined::value, const Any &space = Undefined::value
);
} // namespace jsbind::JSON