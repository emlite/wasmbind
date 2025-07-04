#include <webbind/Lock.hpp>


Lock Lock::take_ownership(Handle h) noexcept {
        return Lock(h);
    }
Lock Lock::clone() const noexcept { return *this; }
Lock::Lock(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Lock::Lock(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString Lock::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

LockMode Lock::mode() const {
    return emlite::Val::get("mode").as<LockMode>();
}

