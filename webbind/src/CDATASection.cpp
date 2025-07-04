#include <webbind/CDATASection.hpp>


CDATASection CDATASection::take_ownership(Handle h) noexcept {
        return CDATASection(h);
    }
CDATASection CDATASection::clone() const noexcept { return *this; }
CDATASection::CDATASection(Handle h) noexcept : Text(emlite::Val::take_ownership(h)) {}
CDATASection::CDATASection(const emlite::Val &val) noexcept: Text(val) {}


