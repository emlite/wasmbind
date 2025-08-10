#include <webbind/XMLDocument.hpp>

namespace webbind {

XMLDocument XMLDocument::take_ownership(Handle h) noexcept {
        return XMLDocument(h);
    }
XMLDocument XMLDocument::clone() const noexcept { return *this; }
emlite::Val XMLDocument::instance() noexcept { return emlite::Val::global("XMLDocument"); }
XMLDocument::XMLDocument(Handle h) noexcept : Document(emlite::Val::take_ownership(h)) {}
XMLDocument::XMLDocument(const emlite::Val &val) noexcept: Document(val) {}


} // namespace webbind