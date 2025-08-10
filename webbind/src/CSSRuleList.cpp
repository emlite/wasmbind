#include <webbind/CSSRuleList.hpp>
#include <webbind/CSSRule.hpp>

namespace webbind {

CSSRuleList CSSRuleList::take_ownership(Handle h) noexcept {
    return CSSRuleList(h);
}

CSSRuleList CSSRuleList::clone() const noexcept { return *this; }

emlite::Val CSSRuleList::instance() noexcept { return emlite::Val::global("CSSRuleList"); }

CSSRuleList::CSSRuleList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

CSSRuleList::CSSRuleList(const emlite::Val &val) noexcept: emlite::Val(val) {}

CSSRule CSSRuleList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<CSSRule>();
}

unsigned long CSSRuleList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}


} // namespace webbind