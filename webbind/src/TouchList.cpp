#include <webbind/TouchList.hpp>
#include <webbind/Touch.hpp>


TouchList TouchList::take_ownership(Handle h) noexcept {
        return TouchList(h);
    }
TouchList TouchList::clone() const noexcept { return *this; }
TouchList::TouchList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TouchList::TouchList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long TouchList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

Touch TouchList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<Touch>();
}

