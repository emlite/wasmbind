#include <emlite/emlite.hpp>
#include <jsbind/Function.hpp>
#include <jsbind/Object.hpp>
#include <jsbind/Promise.hpp>
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

void queueMicrotask(const jsbind::Function &callback) {
    emlite::Val::global("queueMicrotask")(callback);
}

Promise<Result<Object, Error>> import(const String &specifier) {
    auto importPromise = emlite::Val::global("import")(specifier);
    return Promise<Result<Object, Error>>::take_ownership(importPromise.as_handle());
}

Result<Object, Error> require(const String &specifier) {
    auto requireFn = emlite::Val::global("require");
    if (requireFn.is_undefined()) {
        return err<Object, Error>(Error("require is not available in this environment"));
    }
    
    auto moduleExports = requireFn(specifier);
    return ok<Object, Error>(Object(moduleExports));
}

Result<Function, Error> createRequire(const emlite::Val &importMetaUrl) {
    auto moduleObj = emlite::Val::global("module");
    if (moduleObj.is_undefined()) {
        return err<Function, Error>(Error("module.createRequire not supported in this environment"));
    }

    auto createRequireFn = moduleObj.get("createRequire");
    if (createRequireFn.is_undefined()) {
        return err<Function, Error>(Error("module.createRequire not available"));
    }

    auto requireFn = createRequireFn(importMetaUrl);
    return ok<Function, Error>(Function(requireFn));
}

JsStructuredSerializeOptions::JsStructuredSerializeOptions(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}
JsStructuredSerializeOptions JsStructuredSerializeOptions::take_ownership(Handle h) noexcept {
    return JsStructuredSerializeOptions(h);
}
JsStructuredSerializeOptions::JsStructuredSerializeOptions(const emlite::Val &val) noexcept
    : emlite::Val(val) {}
JsStructuredSerializeOptions::JsStructuredSerializeOptions() noexcept
    : emlite::Val(emlite::Val::object()) {}
JsStructuredSerializeOptions JsStructuredSerializeOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Object> JsStructuredSerializeOptions::transfer() const {
    return emlite::Val::get("transfer").as<jsbind::TypedArray<jsbind::Object>>();
}

void JsStructuredSerializeOptions::transfer(const jsbind::TypedArray<jsbind::Object> &value) {
    emlite::Val::set("transfer", value);
}

} // namespace jsbind
