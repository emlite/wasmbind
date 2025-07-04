#include <jsbind/Object.hpp>

using namespace jsbind;

Object::Object(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

Object Object::take_ownership(Handle h) noexcept {
    return Object(h);
}

Object::Object(const emlite::Val &val) noexcept
    : emlite::Val(val) {}

bool Object::hasOwnProperty(const char *prop) noexcept {
    return has_own_property(prop);
}

DEFINE_CLONE(Object)