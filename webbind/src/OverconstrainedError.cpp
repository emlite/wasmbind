#include <webbind/OverconstrainedError.hpp>

namespace webbind {

OverconstrainedError OverconstrainedError::take_ownership(Handle h) noexcept {
    return OverconstrainedError(h);
}

OverconstrainedError OverconstrainedError::clone() const noexcept { return *this; }

emlite::Val OverconstrainedError::instance() noexcept { return emlite::Val::global("OverconstrainedError"); }

OverconstrainedError::OverconstrainedError(Handle h) noexcept : DOMException(emlite::Val::take_ownership(h)) {}

OverconstrainedError::OverconstrainedError(const emlite::Val &val) noexcept: DOMException(val) {}

OverconstrainedError::OverconstrainedError(const jsbind::String& constraint) : DOMException(emlite::Val::global("OverconstrainedError").new_(constraint)) {}

OverconstrainedError::OverconstrainedError(const jsbind::String& constraint, const jsbind::String& message) : DOMException(emlite::Val::global("OverconstrainedError").new_(constraint, message)) {}

jsbind::String OverconstrainedError::constraint() const {
    return DOMException::get("constraint").as<jsbind::String>();
}


} // namespace webbind