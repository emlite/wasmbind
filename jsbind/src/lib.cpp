#include <emlite/emlite.hpp>
#include <jsbind/global.hpp>
#include <jsbind/utils.hpp>

namespace jsbind {

Result<int32_t, Error> parseInt(const char *src) {
    auto result = emlite::Val::global("parseInt")(emlite::Val(src));
    if (isNaN(result)) {
        return err<int32_t>(Error(
            format("Invalid number format in parseInt(const char *src) [ src = \"%s\" ]\n", src)
                .get()
        ));
    }
    return ok<int32_t, Error>(result.template as<int32_t>());
}

Result<int32_t, Error> parseInt(const char *src, int32_t radix) {
    if (radix < 2 || radix > 36) {
        return err<int32_t>(
            Error("Radix must be between 2 and 36 in parseInt(const char *, int32_t)")
        );
    }
    auto result = emlite::Val::global("parseInt")(emlite::Val(src), emlite::Val(radix));
    if (isNaN(result)) {
        return err<int32_t>(Error(format(
                                      "Invalid number format in parseInt(const char *src, int32_t "
                                      "radix) [ src = \"%s\", radix = %d ]\n",
                                      src,
                                      radix
        )
                                      .get()));
    }
    return ok<int32_t, Error>(result.template as<int32_t>());
}

Result<double, Error> parseFloat(const char *src) {
    auto result = emlite::Val::global("parseFloat")(emlite::Val(src));
    if (isNaN(result)) {
        return err<double>(Error(
            format("Invalid number format in parseFloat(const char *src) [ src = \"%s\" ]\n", src)
                .get()
        ));
    }
    return ok<double, Error>(result.template as<double>());
}

Result<String, Error> atob(const String &encoded) {
    auto result = emlite::Val::global("atob")(encoded);
    return result.as<Result<String, Error>>();
}

Result<String, Error> btoa(const String &data) {
    auto result = emlite::Val::global("btoa")(data);
    return result.as<Result<String, Error>>();
}

} // namespace jsbind
