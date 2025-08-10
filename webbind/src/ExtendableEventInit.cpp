#include "webbind/ExtendableEventInit.hpp"

using emlite::Val;
namespace webbind {

ExtendableEventInit::ExtendableEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
ExtendableEventInit ExtendableEventInit::take_ownership(Handle h) noexcept {
        return ExtendableEventInit(h);
    }
ExtendableEventInit::ExtendableEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
ExtendableEventInit::ExtendableEventInit() noexcept: EventInit(emlite::Val::object()) {}
ExtendableEventInit ExtendableEventInit::clone() const noexcept { return *this; }


} // namespace webbind