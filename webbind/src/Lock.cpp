#include "webbind/Lock.hpp"

namespace webbind {

Lock Lock::take_ownership(Handle h) noexcept {
        return Lock(h);
    }
Lock Lock::clone() const noexcept { return *this; }
emlite::Val Lock::instance() noexcept { return emlite::Val::global("Lock"); }
Lock::Lock(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Lock::Lock(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String Lock::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

LockMode Lock::mode() const {
    return emlite::Val::get("mode").as<LockMode>();
}


} // namespace webbind