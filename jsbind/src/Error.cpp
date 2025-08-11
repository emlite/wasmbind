#include <jsbind/Error.hpp>

using namespace jsbind;

Error::Error(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Error Error::take_ownership(Handle h) noexcept { return Error(h); }

Error::Error(const emlite::Val &val) noexcept : emlite::Val(val) {}

Error::Error(const char *msg) noexcept : emlite::Val(emlite::Val::global("Error").new_(msg)) {}

Error::Error() noexcept : emlite::Val(emlite::Val::global("Error").new_()) {}

emlite::Val Error::instance() noexcept { return emlite::Val::global("Error"); }

String Error::message() const { return get("message").template as<String>(); }

String Error::name() const { return get("name").template as<String>(); }

bool Error::stack(String &out) const {
    emlite::Val s = get("stack");
    if (s.is_undefined())
        return false;
    out = s.template as<String>();
    return true;
}

#define DEFINE_JS_ERROR(NAME)                                                                      \
    NAME::NAME(Handle h) noexcept : Error(emlite::Val::take_ownership(h)) {}                       \
                                                                                                   \
    NAME NAME::take_ownership(Handle h) noexcept { return NAME(h); }                               \
                                                                                                   \
    NAME::NAME(const emlite::Val &val) noexcept : Error(val) {}                                    \
    NAME::NAME(const char *msg) noexcept                                                           \
        : Error(emlite::Val::global(#NAME).new_(emlite::Val(msg))) {}                              \
                                                                                                   \
    emlite::Val NAME::instance() noexcept { return emlite::Val::global(#NAME); }

DEFINE_JS_ERROR(EvalError)
DEFINE_JS_ERROR(RangeError)
DEFINE_JS_ERROR(ReferenceError)
DEFINE_JS_ERROR(SyntaxError)
DEFINE_JS_ERROR(TypeError)
DEFINE_JS_ERROR(URIError)
DEFINE_JS_ERROR(AggregateError)

#undef DEFINE_JS_ERROR
