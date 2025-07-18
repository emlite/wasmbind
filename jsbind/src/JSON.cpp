#include <jsbind/JSON.hpp>

using namespace jsbind;

String stringify(
    const Any &value, const Any &replacer, const Any &space
) {
    auto obj = emlite::Val::global("JSON");
    if (!replacer && !space)
        return obj()
            .call("stringify", value)
            .template as<String>();

    if (replacer && !space)
        return obj()
            .call("stringify", value, replacer)
            .template as<String>();

    if (!replacer && space)
        return obj()
            .call("stringify", value, space)
            .template as<String>();

    return obj()
        .call("stringify", value, replacer, space)
        .template as<String>();
}