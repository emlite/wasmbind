#include <webbind/ResizeObserverSize.hpp>


ResizeObserverSize ResizeObserverSize::take_ownership(Handle h) noexcept {
        return ResizeObserverSize(h);
    }
ResizeObserverSize ResizeObserverSize::clone() const noexcept { return *this; }
ResizeObserverSize::ResizeObserverSize(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ResizeObserverSize::ResizeObserverSize(const emlite::Val &val) noexcept: emlite::Val(val) {}


double ResizeObserverSize::inlineSize() const {
    return emlite::Val::get("inlineSize").as<double>();
}

double ResizeObserverSize::blockSize() const {
    return emlite::Val::get("blockSize").as<double>();
}

