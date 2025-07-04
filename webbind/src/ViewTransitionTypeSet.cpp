#include <webbind/ViewTransitionTypeSet.hpp>


ViewTransitionTypeSet ViewTransitionTypeSet::take_ownership(Handle h) noexcept {
        return ViewTransitionTypeSet(h);
    }
ViewTransitionTypeSet ViewTransitionTypeSet::clone() const noexcept { return *this; }
ViewTransitionTypeSet::ViewTransitionTypeSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ViewTransitionTypeSet::ViewTransitionTypeSet(const emlite::Val &val) noexcept: emlite::Val(val) {}


