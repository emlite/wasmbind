#include "webbind/ResizeObserverOptions.hpp"

using emlite::Val;
namespace webbind {

ResizeObserverOptions::ResizeObserverOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ResizeObserverOptions ResizeObserverOptions::take_ownership(Handle h) noexcept {
        return ResizeObserverOptions(h);
    }
ResizeObserverOptions::ResizeObserverOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ResizeObserverOptions::ResizeObserverOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ResizeObserverOptions ResizeObserverOptions::clone() const noexcept { return *this; }

ResizeObserverBoxOptions ResizeObserverOptions::box() const {
    return emlite::Val::get("box").as<ResizeObserverBoxOptions>();
}

void ResizeObserverOptions::box(const ResizeObserverBoxOptions& value) {
    emlite::Val::set("box", value);
}


} // namespace webbind