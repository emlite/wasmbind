#include <webbind/ScrollIntoViewOptions.hpp>

using emlite::Val;
namespace webbind {

ScrollIntoViewOptions::ScrollIntoViewOptions(Handle h) noexcept : ScrollOptions(emlite::Val::take_ownership(h)) {}
ScrollIntoViewOptions ScrollIntoViewOptions::take_ownership(Handle h) noexcept {
        return ScrollIntoViewOptions(h);
    }
ScrollIntoViewOptions::ScrollIntoViewOptions(const emlite::Val &val) noexcept: ScrollOptions(val) {}
ScrollIntoViewOptions::ScrollIntoViewOptions() noexcept: ScrollOptions(emlite::Val::object()) {}
ScrollIntoViewOptions ScrollIntoViewOptions::clone() const noexcept { return *this; }

ScrollLogicalPosition ScrollIntoViewOptions::block() const {
    return emlite::Val::get("block").as<ScrollLogicalPosition>();
}

void ScrollIntoViewOptions::block(const ScrollLogicalPosition& value) {
    emlite::Val::set("block", value);
}

ScrollLogicalPosition ScrollIntoViewOptions::inline_() const {
    return emlite::Val::get("inline").as<ScrollLogicalPosition>();
}

void ScrollIntoViewOptions::inline_(const ScrollLogicalPosition& value) {
    emlite::Val::set("inline", value);
}

ScrollIntoViewContainer ScrollIntoViewOptions::container() const {
    return emlite::Val::get("container").as<ScrollIntoViewContainer>();
}

void ScrollIntoViewOptions::container(const ScrollIntoViewContainer& value) {
    emlite::Val::set("container", value);
}


} // namespace webbind