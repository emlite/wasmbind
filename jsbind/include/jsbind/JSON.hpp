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

String stringify(
    const Any &value,
    const Any &replacer = Undefined::value,
    const Any &space    = Undefined::value
);
} // namespace jsbind::JSON