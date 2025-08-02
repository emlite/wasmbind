#pragma once

#include "Any.hpp"
#include "String.hpp"
#include "Undefined.hpp"
#include <emlite/emlite.hpp>

namespace jsbind::JSON {
template <class T>
bool parse(
    const char *text, // UTF-8 JSON
    T &out,           // parsed result
    Any *err = nullptr
) // optional error out-param
{
    emlite::Val res =
        emlite::Val::global("JSON").call("parse", text);

    if (res.is_error()) {
        if (err)
            *err = res.as<Any>();
        return false;
    }

    out = res.as<T>();
    return true;
}

/// Enhanced JSON::parse using Result for better error handling
template <class T>
Result<T> parse(const char *text) {
    emlite::Val res =
        emlite::Val::global("JSON").call("parse", text);

    if (res.is_error()) {
        return Result<T>(res);  // Return error
    }

    return Result<T>(res.as<T>());  // Return success
}

/// Enhanced JSON::parse using Option for simple cases
template <class T>
Option<T> try_parse(const char *text) {
    emlite::Val res =
        emlite::Val::global("JSON").call("parse", text);

    if (res.is_error()) {
        return Option<T>();  // Return None
    }

    return Option<T>(res.as<T>());  // Return Some(value)
}

String stringify(
    const Any &value,
    const Any &replacer = Undefined::value,
    const Any &space    = Undefined::value
);
} // namespace jsbind::JSON