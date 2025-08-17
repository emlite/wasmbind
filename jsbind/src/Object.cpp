#include <jsbind/Object.hpp>
#include <emlite/emlite.hpp>

namespace jsbind {

Object::Object(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Object Object::take_ownership(Handle h) noexcept {
    return Object(h);
}

Object::Object(const emlite::Val &val) : emlite::Val(val) {}

Object::Object() noexcept : emlite::Val(emlite::Val::object()) {}

Object Object::clone() const noexcept {
    return *this;
}

bool Object::hasOwnProperty(const char *prop) noexcept {
    return has_own_property(prop);
}

bool Object::isNull() const noexcept {
    return emlite::Val::is_null();
}

bool Object::isUndefined() const noexcept {
    return emlite::Val::is_undefined();
}

emlite::Val Object::instance() noexcept {
    return emlite::Val::global("Object");
}

emlite::Val Object::create(const emlite::Val &prototype) noexcept {
    return emlite::Val::global("Object").call("create", prototype);
}

emlite::Val Object::create(const emlite::Val &prototype, const emlite::Val &properties) noexcept {
    return emlite::Val::global("Object").call("create", prototype, properties);
}

emlite::Val Object::setPrototypeOf(const emlite::Val &obj, const emlite::Val &prototype) noexcept {
    return emlite::Val::global("Object").call("setPrototypeOf", obj, prototype);
}

} // namespace jsbind