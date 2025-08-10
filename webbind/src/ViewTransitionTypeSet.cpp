#include <webbind/ViewTransitionTypeSet.hpp>

namespace webbind {

ViewTransitionTypeSet ViewTransitionTypeSet::take_ownership(Handle h) noexcept {
        return ViewTransitionTypeSet(h);
    }
ViewTransitionTypeSet ViewTransitionTypeSet::clone() const noexcept { return *this; }
emlite::Val ViewTransitionTypeSet::instance() noexcept { return emlite::Val::global("ViewTransitionTypeSet"); }
ViewTransitionTypeSet::ViewTransitionTypeSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ViewTransitionTypeSet::ViewTransitionTypeSet(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind