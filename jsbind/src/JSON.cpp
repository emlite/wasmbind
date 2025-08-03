#include <jsbind/JSON.hpp>

using namespace jsbind;

Result<String, Error> stringify(const Any &value, const Any &replacer, const Any &space) {
    auto obj = emlite::Val::global("JSON");
    if (!replacer && !space)
        return obj().call("stringify", value).template as<Result<String, Error>>();

    if (replacer && !space)
        return obj().call("stringify", value, replacer).template as<Result<String, Error>>();

    if (!replacer && space)
        return obj().call("stringify", value, space).template as<Result<String, Error>>();

    return obj().call("stringify", value, replacer, space).template as<Result<String, Error>>();
}