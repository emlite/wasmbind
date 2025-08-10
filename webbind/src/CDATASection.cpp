#include <webbind/CDATASection.hpp>

namespace webbind {

CDATASection CDATASection::take_ownership(Handle h) noexcept {
        return CDATASection(h);
    }
CDATASection CDATASection::clone() const noexcept { return *this; }
emlite::Val CDATASection::instance() noexcept { return emlite::Val::global("CDATASection"); }
CDATASection::CDATASection(Handle h) noexcept : Text(emlite::Val::take_ownership(h)) {}
CDATASection::CDATASection(const emlite::Val &val) noexcept: Text(val) {}


} // namespace webbind