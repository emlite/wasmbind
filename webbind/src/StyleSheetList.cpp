#include <webbind/StyleSheetList.hpp>
#include <webbind/CSSStyleSheet.hpp>


StyleSheetList StyleSheetList::take_ownership(Handle h) noexcept {
        return StyleSheetList(h);
    }
StyleSheetList StyleSheetList::clone() const noexcept { return *this; }
StyleSheetList::StyleSheetList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StyleSheetList::StyleSheetList(const emlite::Val &val) noexcept: emlite::Val(val) {}


CSSStyleSheet StyleSheetList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<CSSStyleSheet>();
}

unsigned long StyleSheetList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

