#include <webbind/ScrollToOptions.hpp>

using emlite::Val;
namespace webbind {

ScrollToOptions::ScrollToOptions(Handle h) noexcept : ScrollOptions(emlite::Val::take_ownership(h)) {}
ScrollToOptions ScrollToOptions::take_ownership(Handle h) noexcept {
        return ScrollToOptions(h);
    }
ScrollToOptions::ScrollToOptions(const emlite::Val &val) noexcept: ScrollOptions(val) {}
ScrollToOptions::ScrollToOptions() noexcept: ScrollOptions(emlite::Val::object()) {}
ScrollToOptions ScrollToOptions::clone() const noexcept { return *this; }

double ScrollToOptions::left() const {
    return emlite::Val::get("left").as<double>();
}

void ScrollToOptions::left(double value) {
    emlite::Val::set("left", value);
}

double ScrollToOptions::top() const {
    return emlite::Val::get("top").as<double>();
}

void ScrollToOptions::top(double value) {
    emlite::Val::set("top", value);
}


} // namespace webbind